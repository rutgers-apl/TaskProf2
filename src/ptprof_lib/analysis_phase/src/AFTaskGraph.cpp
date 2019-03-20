#include <iostream>
#include <assert.h>
#include <string>
#include <sstream>
#include <string.h>
#include <vector>
#include <unistd.h>

#include "AFTaskGraph.H"

AFTaskGraph::AFTaskGraph(std::string folder) {
  last_allocated_node = 0;
  size_t length = NUM_GRAPH_NODES * sizeof(struct AFTask);
  tgraph_nodes = (struct AFTask*) mmap(0, length, PROT_READ|PROT_WRITE, MMAP_FLAGS, -1, 0);

  create_dpst(folder, true);
  //print_dpst();
}

void AFTaskGraph::print_dpst() {
  std::ofstream op_file;
  op_file.open("dpst.txt");
  for (size_t i = 1; i <= last_allocated_node;i++) {
    op_file << i << ","
	    << tgraph_nodes[i].parent << ","
	    << tgraph_nodes[i].type << ","
	    << std::endl;
  }
  op_file.close();
}

void AFTaskGraph::compare_step_work(std::string folder) {
  last_allocated_node = 0;
  size_t length = NUM_GRAPH_NODES * sizeof(struct AFTask);
  munmap( tgraph_nodes, length );
  tgraph_nodes = (struct AFTask*) mmap(0, length, PROT_READ|PROT_WRITE, MMAP_FLAGS, -1, 0);
  callSiteMap.clear();

  create_dpst(folder, false);
}

void AFTaskGraph::diff_anal_data (size_t total_par_work, size_t total_ser_work) {
  step_diff_file.open("diff_profile.csv");

  //step_diff_file << "Total work parallel execution,Total work serial execution,Total ratio" << std::endl;
  // step_diff_file << total_par_work << ","
  // 		 << total_ser_work << ","
  // 		 << (double)((double)total_par_work/(double)total_ser_work) << "X"
  // 		 << std::endl << std::endl << std::endl;

  //step_diff_file << "Start file:line,End file:line,Inflation" << std::endl;
  step_diff_file << "Program,"
		 << "Program,"
    //<< total_par_work << ","
    //<< total_ser_work << ","
		 << (double)((double)total_par_work/(double)total_ser_work)
		 << std::endl;

  for(auto it = par_step_work_info.begin(); it != par_step_work_info.end(); it++) {
    std::string start_file = it->first;

    std::vector<struct CallSiteData>& ser_end_data = ser_step_work_info.at(start_file);
    std::vector<struct CallSiteData>& par_end_data = it->second;
    
    for (auto par_it = par_end_data.begin(); par_it != par_end_data.end(); par_it++) {
      for (auto ser_it = ser_end_data.begin(); ser_it != ser_end_data.end(); ser_it++) {
	if (par_it->cs_filename.compare(ser_it->cs_filename) == 0 &&
	    par_it->cs_line_number == ser_it->cs_line_number) {
	  if (ser_it->work == 0) {
	  //Found! dump data
	    step_diff_file << start_file << ","
			   << par_it->cs_filename << ":" << par_it->cs_line_number << ","
	      // << par_it->work << ","
			   // << ((double)par_it->work/(double)total_par_work)*100.00 << ","
			   // << ser_it->work << ","
			   // << ((double)ser_it->work/(double)total_ser_work)*100.00 << ","
			   // << ((double)par_it->work/(double)total_ser_work)*100.00 << ","
			   << par_it->work
			   << std::endl;
	  } else {
	      step_diff_file << start_file << ","
			     << par_it->cs_filename << ":" << par_it->cs_line_number << ","
		//<< par_it->work << ","
			     // << ((double)par_it->work/(double)total_par_work)*100.00 << ","
			     //<< ser_it->work << ","
			     // << ((double)ser_it->work/(double)total_ser_work)*100.00 << ","
			     // << ((double)par_it->work/(double)total_ser_work)*100.00 << ","
			     << (double)((double)par_it->work/(double)ser_it->work)
			     << std::endl;
	  }
	  break;
	}
      }
    }
  }
  
  step_diff_file.close();  
}

void AFTaskGraph::initialize_task (size_t index, NodeType node_type, size_t call_site, size_t parent_idx) {
  last_allocated_node++;
  tgraph_nodes[index].parent = parent_idx;
  tgraph_nodes[index].type = node_type;
  tgraph_nodes[index].call_site = call_site;

  if (node_type == FINISH && call_site != 0)
    tgraph_nodes[index].sp_root_n_wt_flag = true;
  else
    tgraph_nodes[index].sp_root_n_wt_flag = false;
}

void AFTaskGraph::addSchedOvWork(std::string folder) {
  for (unsigned int i = 0; i < NUM_THREADS; i++) {
    std::string file_name = folder + "/sched_ov_" + std::to_string(i) + ".csv";
    std::ifstream so_file;
    so_file.open(file_name);

    if (so_file.is_open()) {
      std::string line;
      while (std::getline (so_file, line)) {
	std::stringstream sstream(line);

	std::string insert_index;
	std::getline(sstream, insert_index, ',');
	size_t insert_idx = std::stoul(insert_index);
	
	std::string so_work;
	std::getline(sstream, so_work, ',');
	size_t sov_work = std::stoul(so_work);
	//sum += sov_work;

	if(tgraph_nodes[insert_idx].type == ASYNC) {
	  size_t parent = tgraph_nodes[insert_idx].parent;
	  tgraph_nodes[parent].sc_ov_work += sov_work;
	} else {
	  tgraph_nodes[insert_idx].sc_ov_work += sov_work;
	}
      }
      so_file.close();
      remove(file_name.c_str());
    }
  }
}

void AFTaskGraph::check_so_data() {
  for (size_t i = 1; i <= last_allocated_node; i++) {
    struct AFTask* task_node = &tgraph_nodes[i];
    if (task_node->call_site == 0)
      assert(task_node->sc_ov_work == 0);
  }
}

AFTask* AFTaskGraph::findCallsiteParent(AFTask* node) {
  if (tgraph_nodes[node->parent].call_site != 0 || node->parent == 0) {
    if (node->parent == 0) {
      return node;
    }
    return &tgraph_nodes[node->parent];
  }
  return findCallsiteParent(&tgraph_nodes[node->parent]);
}

void AFTaskGraph::create_dpst(std::string folder, bool is_parallel) {
  /* Create DPST and add work information too */
  for (unsigned int i = 0; i < NUM_THREADS; i++) {
    /* Read work data of each node collected in collection phase */
    std::string file_name = folder + "/step_work_" + std::to_string(i) + ".csv";
    std::ifstream step_work_file;
    step_work_file.open(file_name);
    if (step_work_file.is_open()) {
      std::string line;
      while (std::getline (step_work_file, line)) {
	//std::cout << line << std::endl;
	std::stringstream sstream(line);

	std::string insert_index;
	std::getline(sstream, insert_index, ',');
	size_t insert_idx = std::stoul(insert_index);
	
	std::string parent_idx;
	std::getline(sstream, parent_idx, ',');
	size_t parent_index = std::stoul(parent_idx);

	std::string node_type;
	std::getline(sstream, node_type, ',');

	std::string call_site;
	std::getline(sstream, call_site, ',');

	initialize_task(insert_idx,static_cast<NodeType>(std::stoi(node_type)),
			std::stoul(call_site),
			parent_index);
	
	//update the number of children field in the parent index
	if (parent_index != 0) {
	  tgraph_nodes[parent_index].num_children++;
	}	  
	
	if (static_cast<NodeType>(std::stoi(node_type)) == STEP) {
	  //update step work
	  std::string step_work_str;
	  std::getline(sstream, step_work_str, ',');
	  tgraph_nodes[insert_idx].t_prof.work = std::stoul(step_work_str);

	  std::string start_line_str;
	  std::getline(sstream, start_line_str, ',');

	  std::string start_file_str;
	  std::getline(sstream, start_file_str, ',');

	  if (start_file_str.compare("NIL") != 0) {//empty start file
	    tgraph_nodes[insert_idx].start.line = std::stoi(start_line_str);
	    tgraph_nodes[insert_idx].start.filename = new char[64];
	    strcpy(tgraph_nodes[insert_idx].start.filename,start_file_str.c_str());
	  }

	  std::string end_line_str;
	  std::getline(sstream, end_line_str, ',');

	  std::string end_file_str;
	  std::getline(sstream, end_file_str, ',');

	  if (end_file_str.compare("NIL") != 0) {//empty end file
	    tgraph_nodes[insert_idx].end.line = std::stoi(end_line_str);
	    tgraph_nodes[insert_idx].end.filename = new char[64];
	    strcpy(tgraph_nodes[insert_idx].end.filename,end_file_str.c_str());
	  }
	
	  //Compare step work
	  if (tgraph_nodes[insert_idx].start.filename != NULL) {
	    std::string map_key(tgraph_nodes[insert_idx].start.filename);
	    map_key.append(":");
	    map_key.append(std::to_string(tgraph_nodes[insert_idx].start.line));
	    if (is_parallel) {
	      if (par_step_work_info.count(map_key) == 0) {
		struct CallSiteData end_line_info;
		std::string end_file(tgraph_nodes[insert_idx].end.filename);
		end_line_info.cs_filename = end_file;
		end_line_info.cs_line_number = tgraph_nodes[insert_idx].end.line;
		end_line_info.work = tgraph_nodes[insert_idx].t_prof.work;
	      
		std::vector<struct CallSiteData> end_line_vector;
		end_line_vector.push_back(end_line_info);
		par_step_work_info.insert(std::pair<std::string,
					  std::vector<struct CallSiteData> >(map_key,end_line_vector));
	      } else {
		std::vector<struct CallSiteData>& end_line_vector = par_step_work_info.at(map_key);

		//Iterate to find the exact line number
		bool found = false;
		for (std::vector<struct CallSiteData>::iterator it = end_line_vector.begin();
		     it != end_line_vector.end(); it++) {
		  if (it->cs_filename.compare(tgraph_nodes[insert_idx].end.filename) == 0 &&
		      it->cs_line_number == tgraph_nodes[insert_idx].end.line ) {
		    //Found end line. add work
		    found  = true;
		    it->work += tgraph_nodes[insert_idx].t_prof.work;
		    break;
		  }
		}

		if (!found) {
		  struct CallSiteData end_line_info;
		  std::string end_file(tgraph_nodes[insert_idx].end.filename);
		  end_line_info.cs_filename = end_file;
		  end_line_info.cs_line_number = tgraph_nodes[insert_idx].end.line;
		  end_line_info.work = tgraph_nodes[insert_idx].t_prof.work;
		  end_line_vector.push_back(end_line_info);
		}
	      }
	    } else {

	      if (ser_step_work_info.count(map_key) == 0) {
		struct CallSiteData end_line_info;
		std::string end_file(tgraph_nodes[insert_idx].end.filename);
		end_line_info.cs_filename = end_file;
		end_line_info.cs_line_number = tgraph_nodes[insert_idx].end.line;
		end_line_info.work = tgraph_nodes[insert_idx].t_prof.work;
	      
		std::vector<struct CallSiteData> end_line_vector;
		end_line_vector.push_back(end_line_info);
		ser_step_work_info.insert(std::pair<std::string,
					  std::vector<struct CallSiteData> >(map_key,end_line_vector));
	      } else {
		std::vector<struct CallSiteData>& end_line_vector = ser_step_work_info.at(map_key);

		bool found = false;
		//Iterate to find the exact line number
		for (std::vector<struct CallSiteData>::iterator it = end_line_vector.begin();
		     it != end_line_vector.end(); it++) {
		  if (it->cs_filename.compare(tgraph_nodes[insert_idx].end.filename) == 0 &&
		      it->cs_line_number == tgraph_nodes[insert_idx].end.line ) {
		    //Found end line. add work
		    found = true;
		    it->work += tgraph_nodes[insert_idx].t_prof.work;
		    break;
		  }
		}

		if (!found) {
		  struct CallSiteData end_line_info;
		  std::string end_file(tgraph_nodes[insert_idx].end.filename);
		  end_line_info.cs_filename = end_file;
		  end_line_info.cs_line_number = tgraph_nodes[insert_idx].end.line;
		  end_line_info.work = tgraph_nodes[insert_idx].t_prof.work;
		  end_line_vector.push_back(end_line_info);
		}
	      
	      }
	    
	    }
	  }
	
	  //update region work if present
	  std::string region;
	  while(std::getline(sstream, region, ',')) {
	    std::string reg_work;
	    std::getline(sstream, reg_work, ',');
	    if (tgraph_nodes[insert_idx].t_prof.region_work == NULL) {
	      tgraph_nodes[insert_idx].t_prof.region_work = new std::unordered_map<size_t, size_t>();
	      tgraph_nodes[insert_idx].t_prof.region_work->
		insert( std::pair<size_t, size_t>(std::stoul(region), std::stoul(reg_work)) );
	    } else {
	      std::unordered_map<size_t, size_t>* rw_map = tgraph_nodes[insert_idx].t_prof.region_work;
	      if (rw_map->count(std::stoul(region)) == 0) {
		rw_map->insert( std::pair<size_t, size_t>(std::stoul(region), std::stoul(reg_work)) );
	      } else {
		rw_map->at(std::stoul(region)) += std::stoul(reg_work);
	      }
	    }
	  }
	}
      }
      step_work_file.close();
      //remove file
      remove(file_name.c_str());
    } else {
      std::cerr << "Work data of step nodes not available\n";
      assert(0);
    }
  }
}

struct CallSiteData* AFTaskGraph::getSourceFileAndLine(size_t return_address, std::string folder) {
  if (callSiteMap.empty()) {
    std::ifstream call_site_file;
    call_site_file.open(folder + "/callsite_info.csv");
    if (call_site_file.is_open()) {
      std::string line;      
      while (std::getline (call_site_file, line)) {
	std::stringstream sstream(line);
	std::string cs_str;
	std::getline(sstream, cs_str, ',');
	std::string fn_str;
	std::getline(sstream, fn_str, ',');
	std::string line_str;
	std::getline(sstream, line_str, ',');
	std::string par_for_str;
	std::getline(sstream, par_for_str, ',');
	
	struct CallSiteData* cs_data = new CallSiteData();
	cs_data->cs_filename = fn_str;
	cs_data->cs_line_number = std::stoi(line_str);
	cs_data->par_for = std::stoi(par_for_str);
	
	callSiteMap.insert(std::pair<size_t, struct CallSiteData*>(std::stoul(cs_str), cs_data));
      }
    } else {
      std::cerr << "Work data of step nodes not available\n";
      assert(0);
    }
  }

  return callSiteMap.at(return_address);
}

void AFTaskGraph::initCallSiteMap(std::string folder) {
  std::ifstream call_site_file;
  call_site_file.open(folder + "/callsite_info.csv");
  if (call_site_file.is_open()) {
    std::string line;
    while (std::getline (call_site_file, line)) {
      std::stringstream sstream(line);
      std::string cs_str;
      std::getline(sstream, cs_str, ',');
      std::string fn_str;
      std::getline(sstream, fn_str, ',');
      std::string line_str;
      std::getline(sstream, line_str, ',');
      std::string par_for_str;
      std::getline(sstream, par_for_str, ',');

      struct CallSiteData* cs_data = new CallSiteData();
      cs_data->cs_filename = fn_str;
      cs_data->cs_line_number = std::stoi(line_str);
      cs_data->par_for = std::stoi(par_for_str);

      callSiteMap.insert(std::pair<size_t, struct CallSiteData*>(std::stoul(cs_str), cs_data));
    }
  }
}
