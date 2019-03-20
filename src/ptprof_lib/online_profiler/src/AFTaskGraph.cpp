#include <iostream>
#include <sstream>
#include <fstream>
#include <string.h>
#include <assert.h>
#include "AFTaskGraph.H"

AFTaskGraph::AFTaskGraph() {
  init_causal_regions();
  
  ll_lock = PTHREAD_MUTEX_INITIALIZER;
  for (unsigned int i = 0 ; i < NUM_THREADS; i++) {
    init_ll(&dpst_ll[i]);
  }
  
  struct AFTask* head_node = create_node();
  head_node->type = FINISH;
  initialize_prof_data(head_node);

  head_node->act_children++; //adding one ref count to show that it is on the stack still
  push_ll(dpst_ll[0],head_node);
  cur_dpst_index[0].push(head_node);

  head_node->act_children++;
}

void AFTaskGraph::init_causal_regions() {
  std::ifstream region_file;
  region_file.open("causal_regions.csv");

  if (region_file.is_open()) {
    std::string line;
    while (std::getline (region_file, line)) {
      RegionInfo region;
      std::stringstream sstream(line);
      std::string beg_file_str;
      std::getline(sstream, beg_file_str, ',');
      region.region_begin.filename = beg_file_str;

      std::string beg_line_str;
      std::getline(sstream, beg_line_str, ',');
      region.region_begin.line = std::stoi(beg_line_str);

      std::string end_file_str;
      std::getline(sstream, end_file_str, ',');
      region.region_end.filename = end_file_str;

      std::string end_line_str;
      std::getline(sstream, end_line_str, ',');
      region.region_end.line = std::stoi(end_line_str);

      std::string opt_factor_str;
      std::getline(sstream, opt_factor_str, ',');
      region.region_work = std::stoi(opt_factor_str);

      opt_regions.push_back(region);
    }
  }

  if (!opt_regions.empty()) analysis_type = CAUSAL;
}

struct AFTask* AFTaskGraph::create_node() {
  //initialize DPST node to defaults;
  struct AFTask* new_node = new AFTask();

  new_node->young_ns_child = NO_TYPE;
  new_node->sync_finish_flag = false;
  new_node->parent = NULL;
  new_node->type = NO_TYPE;
  new_node->spawn_site = 0;
  
  new_node->act_children = 0;
  new_node->next = NULL;
  new_node->prev = NULL;
  return new_node;
}

void AFTaskGraph::initialize_prof_data(struct AFTask* node) {
  //initialize work span data
  node->t_prof.work = 0;
  node->t_prof.local_work = 0;
  node->t_prof.critical_child = 0;


  //intializing RegionInfo
  node->t_prof.local_step.region_work = 0;
  node->t_prof.critical_step.region_work = 0;

  //if ASYNC node copy the work from all step nodes and finish nodes from the left on to async node
  if (node->type == ASYNC) {
    struct AFTask* parent_node = node->parent;
    node->t_prof.parent_work.store(parent_node->t_prof.local_work.load());
    node->t_prof.parent_step = parent_node->t_prof.local_step;
  } else {
    node->t_prof.parent_work = 0;
    node->t_prof.parent_step.region_work = 0;
  }

  //initialize data to compute percentage of critical work
  node->t_prof.local_local_work = 0;
}

//Called by task profiler after a step node completes. Update the work of cur node
void AFTaskGraph::add_step_work(THREADID threadid, size_t work) {
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_node->t_prof.work += work;
}

void AFTaskGraph::populate_region_info(RegionInfo& node_r_info,
				       Location& begin_info,
				       Location& end_info,
				       size_t work) {
  node_r_info.region_begin.filename = begin_info.filename;
  node_r_info.region_begin.line = begin_info.line;
  node_r_info.region_end.filename = end_info.filename;
  node_r_info.region_end.line = end_info.line;
  node_r_info.region_work = work;
}

size_t AFTaskGraph::get_region_opt_factor(struct Location& begin, struct Location& end) {

  for (std::vector<struct RegionInfo>::iterator it = opt_regions.begin() ; it != opt_regions.end(); ++it) {
    if (it->region_begin.filename.compare(begin.filename) == 0 &&
	it->region_begin.line == begin.line &&
	it->region_end.filename.compare(end.filename) == 0 &&
	it->region_end.line == end.line) {
      return it->region_work;
    }
  }
  return 0;
}

//Called by task profiler after a step node completes. Update the
//critical work of cur node. Work and critical work need to be separate
//since during what-if analysis we may need to update the work and
//critical work to separate values
void AFTaskGraph::add_step_critical_work(THREADID threadid, size_t work) {
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  // If step node belongs to causal regions reduce the critical work
  size_t region_opt_factor = get_region_opt_factor(cur_node->step_region_begin,cur_node->step_region_end);
  if (region_opt_factor) {
    work = work /region_opt_factor;
  }
  
  cur_node->t_prof.local_work += work;
  cur_node->t_prof.local_local_work += work;

  if (work > cur_node->t_prof.local_step.region_work) {
    populate_region_info(cur_node->t_prof.local_step,cur_node->step_region_begin,cur_node->step_region_end,work);
    // cur_node->t_prof.local_step.region_begin.filename = cur_node->step_region_begin.filename;
    // cur_node->t_prof.local_step.region_begin.line = cur_node->step_region_begin.line;
    // cur_node->t_prof.local_step.region_end.filename = cur_node->step_region_end.filename;
    // cur_node->t_prof.local_step.region_end.line = cur_node->step_region_end.line;
    // cur_node->t_prof.local_step.region_work = work;
  }
}

void AFTaskGraph::add_step_critical_work_whatif(THREADID threadid, size_t work) {
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_node->t_prof.local_work += work;
  cur_node->t_prof.local_local_work += work;
}

//Decrement ref count of parent. Called by task profiler after step node completes
void AFTaskGraph::decrement_act_child(THREADID threadid) {
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_node->act_children--;
}

//Compute the work and critical recursively of nodes whose ref count
//becomes 0
void AFTaskGraph::update_recurse(struct AFTask* node) {
  if (node->act_children.load() == 0) {
    calculateWorkSpan(node);
    aggregate_work_span(node);

    struct AFTask* parent = node->parent;
    remove_ll(node);
    delete(node);

    // Fine grain lock with parent to maintain atomicity between two
    // concurrent updates from two ASYNC nodes that make active
    // children to go to 0 TODO: Revisit. Maybe you dont need this
    PIN_GetLock(&parent->update_lock, 0);
    parent->act_children--;
    while (parent->act_children.load() == 0) {
      PIN_ReleaseLock(&parent->update_lock);
      
      node = parent;
      calculateWorkSpan(node);
      aggregate_work_span(node);

      parent = node->parent;
      remove_ll(node);
      delete(node);

      PIN_GetLock(&parent->update_lock, 0);
      parent->act_children--;      
    }
    PIN_ReleaseLock(&parent->update_lock);
  }
}

// Called on spawn call
void AFTaskGraph::CaptureSpawnOnly(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  //if current node rightmost child is Async or not
  //check for STEP and prev of STEP == ASYNC
  struct AFTask* newNode;
  if (cur_node->young_ns_child == ASYNC) {
    newNode = create_node();
    cur_node->young_ns_child = ASYNC;

    newNode->parent = cur_node;
    newNode->type = ASYNC;
    newNode->spawn_site = return_address;
    cur_node->act_children++; //Increase ref count of parent

    initialize_prof_data(newNode);
    
  } else {
    struct AFTask* newFinish = create_node();
    cur_node->young_ns_child = FINISH;
    newFinish->sync_finish_flag = true;
    newFinish->parent = cur_node;
    newFinish->type = FINISH;
    cur_node->act_children++; //Increase ref count of parent

    initialize_prof_data(newFinish);

    newNode = create_node();
    newFinish->young_ns_child = ASYNC;
    newNode->parent = newFinish;
    newNode->type = ASYNC;
    newNode->spawn_site = return_address;
    newFinish->act_children++; //Increase ref count of parent

    initialize_prof_data(newNode);

    newFinish->act_children++; //adding one ref count to show that it is on the stack still
    push_ll(dpst_ll[threadid],newFinish);
    cur_dpst_index[threadid].push(newFinish);
    cur_node = newFinish;
  }
  cur_node->act_children++; //Increase ref count of parent for adding step node

  // Lock the update of map that performs handshake between thread
  // creating the child task and thread executing the child task
  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId, newNode));
  PIN_ReleaseLock(&handshake_lock);
}

// Called on spawn_and_wait_for_all call
void AFTaskGraph::CaptureSpawnAndWaitForAll(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  //if current node rightmost child is Async or not
  //check for STEP and prev of STEP == ASYNC
  struct AFTask* newNode;
  if (cur_node->young_ns_child == ASYNC) {
    newNode = create_node();
    cur_node->young_ns_child = ASYNC;

    newNode->parent = cur_node;
    newNode->type = ASYNC;
    newNode->spawn_site = return_address;
    cur_node->act_children++; // Increase ref count of parent

    initialize_prof_data(newNode);
  } else {
    struct AFTask* newFinish = create_node();
    cur_node->young_ns_child = FINISH;
    newFinish->sync_finish_flag = true;
    newFinish->parent = cur_node;
    newFinish->type = FINISH;
    cur_node->act_children++; //Increase ref count of parent

    initialize_prof_data(newFinish);
    
    newNode = create_node();
    newFinish->young_ns_child = ASYNC;
    newNode->parent = newFinish;
    newNode->type = ASYNC;
    newNode->spawn_site = return_address;
    newFinish->act_children++; //Increase ref count of parent

    initialize_prof_data(newNode);

    newFinish->act_children++; //adding one ref count to show that it is on the stack still
    push_ll(dpst_ll[threadid],newFinish);
    cur_dpst_index[threadid].push(newFinish);
    //cur_node = newFinish; 
  }
  //cur_node->act_children++; //Increase ref count of parent for adding step node
  
  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId, newNode));
  PIN_ReleaseLock(&handshake_lock);
}

// Called on spawn_root_and_wait
void AFTaskGraph::CaptureSpawnAndWait(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  struct AFTask* newFinish = create_node();
  cur_node->young_ns_child = FINISH;
  newFinish->parent = cur_node;
  newFinish->type = FINISH;
  newFinish->spawn_site = return_address;
  cur_node->act_children++; //Increase ref count of parent

  initialize_prof_data(newFinish);

  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId,newFinish));
  PIN_ReleaseLock(&handshake_lock);
}

// Called on __exec__begin__
void AFTaskGraph::CaptureExecute(THREADID threadid, size_t taskId)
{
  PIN_GetLock(&handshake_lock, 0);
  struct AFTask* temp_cur = temp_cur_map.at(taskId);
  temp_cur_map.erase(taskId);
  PIN_ReleaseLock(&handshake_lock);

  temp_cur->act_children++; //adding one ref count to show that it is on the stack still
  push_ll(dpst_ll[threadid],temp_cur);
  cur_dpst_index[threadid].push(temp_cur);
  
  temp_cur->act_children++; //Increase ref count of parent for adding step node
}

// Called on __exec_end__
void AFTaskGraph::CaptureReturn(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  
  // On spawn_wait_for_all call, the top of the stack will be a
  // implicit FINISH node, since wait_for_all would not have been
  // called. Hence we need to pop twice
  if (cur_node->sync_finish_flag == true) {
    cur_dpst_index[threadid].pop();

    // Lock is needed here since decrement and removal of the node has
    // to happen atomically.    
    PIN_GetLock(&update_lock, 0);
    cur_node->act_children--;
    update_recurse(cur_node);
    PIN_ReleaseLock(&update_lock);
    
    cur_node = cur_dpst_index[threadid].top();
  }
  cur_dpst_index[threadid].pop();

  // Lock is needed here since decrement and removal of the node has
  // to happen atomically.
  PIN_GetLock(&update_lock, 0);
  cur_node->act_children--;
  update_recurse(cur_node);
  PIN_ReleaseLock(&update_lock);
}

// Called on wait_for_all call
void AFTaskGraph::CaptureWaitOnly(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_dpst_index[threadid].pop();

  // Lock is needed here since decrement and removal of the node has
  // to happen atomically.  
  PIN_GetLock(&update_lock, 0);
  cur_node->act_children--;
  update_recurse(cur_node);
  PIN_ReleaseLock(&update_lock);

  cur_node = cur_dpst_index[threadid].top();
  cur_node->act_children++; // Increase ref count of parent for adding step node
}

// Called after spawn_root_and_wait
void AFTaskGraph::CaptureWait(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_node->act_children++; // Increase ref count of parent for adding step node
}

void AFTaskGraph::CaptureSetTaskId(THREADID threadid, size_t taskId,
				   int sp_only, void* return_address, 
				   const char* file, int line, bool par_for) {
  size_t ret_addr = (size_t)return_address;
  if (line == 0 || file == NULL) {
    ret_addr = 0;
  } else {
    std::string map_key(file);
    map_key.append(":");
    map_key.append(std::to_string(line));

    //Using unique hash value instead of return address
    //This hash value is always unqiue
    std::hash<std::string> key_hash;
    ret_addr = key_hash(map_key);

    // Need a lock here since callsite map is shared. If two
    // spawn calls from the same spawn site happens the there will be a race
    if (callSiteMap.count(ret_addr) == 0) {
      struct CallSiteData callsiteData;
      callsiteData.cs_filename = file;
      callsiteData.cs_line_number = line;
      callsiteData.par_for = par_for;
      callSiteMap.insert(std::pair<size_t, struct CallSiteData>(ret_addr, callsiteData));
    }
  }

  if (sp_only) {
    CaptureSpawnOnly(threadid, taskId, ret_addr);
  } else {
    CaptureSpawnAndWait(threadid, taskId, ret_addr);
  }
}

void AFTaskGraph::CaptureSetTaskId(THREADID threadid, size_t taskId,
				   void* return_address, 
				   const char* file, int line, bool par_for) {
  size_t ret_addr = (size_t)return_address;
  if (line == 0 || file == NULL) {
    ret_addr = 0;
  } else {
    std::string map_key(file);
    map_key.append(":");
    map_key.append(std::to_string(line));
    
    //Using unique hash value instead of return address
    //This hash value is always unqiue
    std::hash<std::string> key_hash;
    ret_addr = key_hash(map_key);

    // Need a lock here since callsite map is shared. If two
    // spawn calls from the same spawn site happens the there will be a race
    if (callSiteMap.count(ret_addr) == 0) {
      struct CallSiteData callsiteData;
      callsiteData.cs_filename = file;
      callsiteData.cs_line_number = line;
      callsiteData.par_for = par_for;
      callSiteMap.insert(std::pair<size_t, struct CallSiteData>(ret_addr, callsiteData));
    }
  }

  CaptureSpawnAndWaitForAll(threadid, taskId, ret_addr);
}

void AFTaskGraph::setStepRegion(THREADID threadid, const char* file, int line, bool start) {
  if (file == NULL) return; //Can be NULL for step nodes from parallel_for
  struct AFTask* cur_step_parent = cur_dpst_index[threadid].top();
  if (start) {
    cur_step_parent->step_region_begin.line = line;
    cur_step_parent->step_region_begin.filename.clear();
    cur_step_parent->step_region_begin.filename = file;
  } else {
    cur_step_parent->step_region_end.line = line;
    cur_step_parent->step_region_end.filename.clear();
    cur_step_parent->step_region_end.filename = file;

    //std::cout << "BEGIN: " << cur_step_parent->step_region_begin.filename << ":" << cur_step_parent->step_region_begin.line << std::endl;
    //std::cout << "END: " << cur_step_parent->step_region_end.filename << ":" << cur_step_parent->step_region_end.line << std::endl;
  }
}

/** The below functions are used to compute the work and critical
    work **/

void AFTaskGraph::calculateWorkSpan(struct AFTask* node) {
  struct AFTask* parent = node->parent;
  //assert(parent != NULL);
  
  if (node->type == ASYNC) {
    // Calculate the span of the subtree with ASYNC node as root
    if (node->t_prof.local_work >= node->t_prof.critical_child) {
      node->t_prof.critical_child.store(node->t_prof.local_work.load());

      node->t_prof.critical_step = node->t_prof.local_step;
    }

    insert_cs_data(node->t_prof.critical_call_sites, node->spawn_site, node->t_prof.local_local_work);

    // Update the work of the parent
    parent->t_prof.work += node->t_prof.work;

    // Check if ASYNC node realises the greatest span of the parent
    // If it does update the critical_child of the parent to this ASYNC node
    PIN_GetLock(&parent->t_prof.ss_lock, 0);
    if (node->t_prof.critical_child + node->t_prof.parent_work > parent->t_prof.critical_child) {
      parent->t_prof.critical_child = node->t_prof.critical_child + node->t_prof.parent_work;

      parent->t_prof.critical_call_sites.clear();
      parent->t_prof.critical_call_sites = node->t_prof.critical_call_sites;

      if (node->t_prof.critical_step.region_work > node->t_prof.parent_step.region_work) {
	parent->t_prof.critical_step = node->t_prof.critical_step;
      } else {
	parent->t_prof.critical_step = node->t_prof.parent_step;
      }
    }
    PIN_ReleaseLock(&parent->t_prof.ss_lock);

  } else if (node->type == FINISH) {
    // Update the work of the parent
    parent->t_prof.work += node->t_prof.work;

    // Calculate the span of the subtree with FINISH node as root
    if (node->t_prof.local_work >= node->t_prof.critical_child) {
      node->t_prof.critical_child.store(node->t_prof.local_work.load());

      if (node->sync_finish_flag) { //if implicit finish node
	
	parent->t_prof.local_local_work += node->t_prof.local_local_work;
	
      } else { //if the finish node is created from a spawn_root_and_wait call
	struct CallSiteData& callsiteData = callSiteMap.at(node->spawn_site);
	if (callsiteData.par_for) {
	  node->t_prof.critical_call_sites.clear(); //This is thread-safe
	  insert_cs_data(node->t_prof.critical_call_sites,
			 node->spawn_site, node->t_prof.critical_child);
	} else {
	  insert_cs_data(node->t_prof.critical_call_sites,
			 node->spawn_site, node->t_prof.local_local_work);
	}

	PIN_GetLock(&parent->t_prof.ss_lock, 0);
	// add critical call sites to parent and delete current call site
	merge_critical_call_sites(node->t_prof.critical_call_sites, parent->t_prof.critical_call_sites);
	PIN_ReleaseLock(&parent->t_prof.ss_lock);
      }

      node->t_prof.critical_step = node->t_prof.local_step;
      
    } else { //needed for just critical path calculation
      std::unordered_map<size_t, size_t>& cs_map = node->t_prof.critical_call_sites;
      size_t sum_cs = 0;
      //find sum of all spawn site on critical path
      for (std::unordered_map<size_t,size_t>::iterator it=cs_map.begin();
	   it!=cs_map.end(); ++it) {
	sum_cs += it->second;
      }
      parent->t_prof.local_local_work += (node->t_prof.critical_child-sum_cs);

      PIN_GetLock(&parent->t_prof.ss_lock, 0);
      // add critical call sites to parent and delete current call site
      merge_critical_call_sites(node->t_prof.critical_call_sites, parent->t_prof.critical_call_sites);
      PIN_ReleaseLock(&parent->t_prof.ss_lock);
    }

    // Add current node's critical work to the parent's local work
    parent->t_prof.local_work += node->t_prof.critical_child;

    if (node->t_prof.critical_step.region_work > parent->t_prof.local_step.region_work) {
      parent->t_prof.local_step = node->t_prof.critical_step;
    }
  } else {
    //FATAL: should never get here
    assert(0);
  }
}

void AFTaskGraph::merge_critical_call_sites(std::unordered_map<size_t, size_t>& source,
					      std::unordered_map<size_t, size_t>& dest) {

  for (std::unordered_map<size_t,size_t>::iterator it=source.begin();
       it!=source.end(); ++it) {
    if (dest.count(it->first) != 0) {//entry present. update
      dest.at(it->first) += it->second;
    } else { //entry not present. add
      dest.insert(std::pair<size_t, size_t>(it->first, it->second));
    }
  }
}

void AFTaskGraph::insert_cs_data(std::unordered_map<size_t, size_t>& cs_map, size_t call_site, size_t work) {
  if (cs_map.count(call_site) != 0) {
    cs_map.at(call_site) += work;
  } else {
    cs_map.insert(std::pair<size_t, size_t>(call_site, work));
  }
}

bool AFTaskGraph::checkRecursiveCall(struct AFTask* node, size_t call_site) {
  if (node->parent == NULL) {
    return false;
  } else {
    struct AFTask* parent = node->parent;
    if (parent->spawn_site == node->spawn_site) {
      return true;
    } else {
      return checkRecursiveCall(parent, call_site);
    }
  }
}

bool AFTaskGraph::recursiveCall(struct AFTask* node) {
  return checkRecursiveCall(node, node->spawn_site);
}

void AFTaskGraph::aggregate_work_span(struct AFTask* node) {
  /* If node is a ASYNC node and is not a recursive call */
  if (node->spawn_site != 0 && !recursiveCall(node)) {
    // Needs to be synchronized.. use concurrent unordered map in tbb
    if (workSpanMap.count(node->spawn_site) != 0) {
      workSpanMap.at(node->spawn_site).work += node->t_prof.work;
      workSpanMap.at(node->spawn_site).span += node->t_prof.critical_child;
      workSpanMap.at(node->spawn_site).call_count++;
    } else {
      WorkSpanData wsdata;
      wsdata.work = node->t_prof.work;
      wsdata.span = node->t_prof.critical_child;
      wsdata.call_count = 1;
      workSpanMap.insert(std::pair<size_t, struct WorkSpanData>(node->spawn_site, wsdata));
    }
  }
}

void AFTaskGraph::FinalizeAndGenerateProfile() {
#if 0
  // Check if backing store is empty for all threads except thread
  // 0. Thread 0 should have just one element.
  //print_ll(dpst_ll[0]);
  //std::cout << "***************\n";
  assert(dpst_ll[0]->next->next == NULL);
  assert(cur_dpst_index[0].size() == 1);
  for (unsigned int i = 1; i < NUM_THREADS; i++) {
    //print_ll(dpst_ll[i]);
    //std::cout << "***************\n";
    assert(dpst_ll[i]->next == NULL);
    assert(cur_dpst_index[i].empty());
  }
#endif

  struct AFTask* head = cur_dpst_index[0].top();

  //This will always evaluate to TRUE
  if (head->t_prof.local_work >= head->t_prof.critical_child) {
    head->t_prof.critical_child.store(head->t_prof.local_work.load());
    
    head->t_prof.critical_step = head->t_prof.local_step;
  }

  std::ofstream report;
  if (analysis_type == WHAT_IF) {
    report.open("what_if_profile.csv");
  } else if (analysis_type == CAUSAL) {
    report.open("causal_profile.csv");
  } else {
    report.open("parallelism_profile.csv");
  }
  report << "Source file,Line number,Work,Span,Parallelism,Percent critical work" << std::endl;

  report << "main" << ","
	 << 0 << ","
	 << head->t_prof.work << ","
	 << head->t_prof.critical_child << ","
	 << (double)head->t_prof.work/(double)head->t_prof.critical_child << ","
	 << ((double)head->t_prof.local_local_work/(double)head->t_prof.critical_child)*100.00
	 << std::endl;

  std::unordered_map<size_t,size_t> head_cs_data = head->t_prof.critical_call_sites;
  size_t check_critical_work = head->t_prof.local_local_work;

  for (tbb::concurrent_unordered_map<size_t,struct WorkSpanData>::iterator it=workSpanMap.begin();
       it!=workSpanMap.end(); ++it) {
    struct CallSiteData& callsiteData = callSiteMap.at(it->first);
    struct WorkSpanData& workspanData = it->second;

    if (head_cs_data.count(it->first) != 0) { //spawn site on critical path
      size_t cs_critical_work = head_cs_data.at(it->first);
      check_critical_work += cs_critical_work;

      report << callsiteData.cs_filename << ","
	     << callsiteData.cs_line_number << ","
	     << workspanData.work << ","
	     << workspanData.span << ","
	     << (double)workspanData.work/(double)workspanData.span << ","
	     << ((double)cs_critical_work/(double)head->t_prof.critical_child)*100.00
	     << std::endl;
    } else { // spawn site not on critical path
      report << callsiteData.cs_filename << ","
	     << callsiteData.cs_line_number << ","
	     << workspanData.work << ","
	     << workspanData.span << ","
	     << (double)workspanData.work/(double)workspanData.span << ","
	     << 0
	     << std::endl;
    }
  }
  //assert(check_critical_work == head->t_prof.critical_child);

  report.close();

  report.open("max_region.csv");
  report << (double)head->t_prof.work/(double)head->t_prof.critical_child << std::endl;
  report << head->t_prof.critical_step.region_begin.filename << ","
	 << head->t_prof.critical_step.region_begin.line << ","
	 << head->t_prof.critical_step.region_end.filename << ","
	 << head->t_prof.critical_step.region_end.line
	 << std::endl;

  report.close();
}
