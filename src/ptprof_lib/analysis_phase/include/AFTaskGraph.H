#ifndef AFTASK_GRAPH_H
#define AFTASK_GRAPH_H

#include <string>
#include <unordered_map>
#include <sys/mman.h>
#include <sstream>
#include <sstream>
#include <fstream>
#include <vector>

#include "AFTask.H"
#include "Common.H"
#include "CallSiteData.H"
#include "Location.H"

#define MMAP_FLAGS (MAP_PRIVATE| MAP_ANONYMOUS| MAP_NORESERVE)
//#define NUM_GRAPH_NODES 134217728
#define NUM_GRAPH_NODES 242747012//146650394//146641882//146638554

// struct step_stats {
//   size_t count;
//   struct location start;
//   struct location end;
// };

struct pending_info {
  size_t idx;
  unsigned short int parent_thd;
  size_t parent_idx;
};

class AFTaskGraph {
protected:
  size_t begin_index[NUM_THREADS];
  std::unordered_map<size_t, struct CallSiteData*> callSiteMap;
  //std::unordered_map<std::string, size_t> step_work_info;
  std::unordered_map<std::string, std::vector<struct CallSiteData> > par_step_work_info;
  std::unordered_map<std::string, std::vector<struct CallSiteData> > ser_step_work_info;

  //size_t create_node(NodeType node_type, size_t call_site, size_t parent_idx);
  void initialize_task (size_t index,NodeType node_type, size_t call_site, size_t parent_idx);
  void create_dpst(std::string, bool);
  //void update_seqnum_str(size_t cur_index, size_t parent_index);

  std::ofstream step_diff_file;
  void print_dpst();

public:
  size_t last_allocated_node;
  struct AFTask* tgraph_nodes;

  AFTaskGraph(std::string);
  struct AFTask* getHead() {return &tgraph_nodes[1];}
  struct AFTask* getTask(size_t index) {return &tgraph_nodes[index];}
  struct CallSiteData* getSourceFileAndLine(size_t return_address, std::string folder);
  void compare_step_work(std::string folder);
  void diff_anal_data (size_t total_par_work, size_t total_ser_work);
  void initCallSiteMap(std::string folder);
  void addSchedOvWork(std::string folder);
  void check_so_data();
  AFTask* findCallsiteParent(AFTask* node);
};

#endif
