#ifndef AFTASK_GRAPH_H
#define AFTASK_GRAPH_H

#include <stack>
#include <unordered_map>
#include <fstream>
#include <string>
#include <vector>

#include "tbb/concurrent_unordered_map.h"

#include "AFTask.H"
#include "Common.H"
#include "CallSiteData.H"
#include "WorkSpanData.H"

#define OPT_FACTOR 50

enum AnalysisType {
  PARALLELISM = 0,
  WHAT_IF = 1,
  CAUSAL = 2
};

class AFTaskGraph {
protected:  
  PIN_LOCK update_lock = PTHREAD_MUTEX_INITIALIZER;  
  PIN_LOCK handshake_lock = PTHREAD_MUTEX_INITIALIZER;

  struct AFTask* dpst_ll[NUM_THREADS];
  std::stack<struct AFTask*> cur_dpst_index[NUM_THREADS];
  
  std::unordered_map<size_t, struct AFTask*> temp_cur_map;
  tbb::concurrent_unordered_map<size_t, struct CallSiteData> callSiteMap;

  // Using RegionInfo to store regions to optimize. Using region_work
  // to store number of times a region must be optmized
  std::vector<struct RegionInfo> opt_regions;
  void init_causal_regions();

  void CaptureSpawnOnly(THREADID threadid, size_t taskId, size_t return_address);
  void CaptureSpawnAndWaitForAll(THREADID threadid, size_t taskId, size_t return_address);
  void CaptureSpawnAndWait(THREADID threadid, size_t taskId, size_t return_address);
  struct AFTask* create_node();

  /* Profiler Functions */
  tbb::concurrent_unordered_map<size_t, struct WorkSpanData> workSpanMap;
  
  void initialize_prof_data(struct AFTask* node);
  void calculateWorkSpan(struct AFTask* node);
  void merge_critical_call_sites(std::unordered_map<size_t, size_t>& source,std::unordered_map<size_t, size_t>& dest);
  void insert_cs_data(std::unordered_map<size_t, size_t>& cs_map, size_t call_site, size_t work);
  bool checkRecursiveCall(struct AFTask* node, size_t call_site);
  bool recursiveCall(struct AFTask* node);
  void aggregate_work_span(struct AFTask* node);
  void update_recurse(struct AFTask* node);

  void populate_region_info(RegionInfo& node_r_info,
			    Location& begin_info,
			    Location& end_info,
			    size_t work);
  size_t get_region_opt_factor(struct Location& begin, struct Location& end);

public:
  AnalysisType analysis_type = PARALLELISM;
  
  AFTaskGraph();
  void CaptureExecute(THREADID threadid, size_t taskId);
  void CaptureReturn(THREADID threadid);
  void CaptureWaitOnly(THREADID threadid);
  void CaptureWait(THREADID threadid);
  void CaptureSetTaskId(THREADID threadid, size_t taskId, 
			int sp_only, void* return_address, 
			const char* file, int line, bool par_for = false);
  void CaptureSetTaskId(THREADID threadid, size_t taskId, 
			void* return_address, 
			const char* file, int line, bool par_for = false);

  void add_step_work(THREADID threadid, size_t work);
  void add_step_critical_work(THREADID threadid, size_t work);
  void add_step_critical_work_whatif(THREADID threadid, size_t work);
  void decrement_act_child(THREADID threadid);

  void setStepRegion(THREADID threadid, const char* file, int line, bool start);

  void attribute_sched_ov_work(THREADID threadid, size_t so_work);
  
  void FinalizeAndGenerateProfile();
};

#endif
