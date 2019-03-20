#ifndef AFTASK_GRAPH_H
#define AFTASK_GRAPH_H

#include <stack>
#include <unordered_map>
#include <fstream>
#include <string>
#include <atomic>

#include "AFTask.H"
#include "Common.H"
#include "CallSiteData.H"
#include "Task_Logger.H"

#include "tbb/concurrent_unordered_map.h"

extern Task_Logger* taskLogger;

class AFTaskGraph {
protected:
  PIN_LOCK handshake_lock = PTHREAD_MUTEX_INITIALIZER;
  
  std::stack<struct AFTask*> cur_dpst_index[NUM_THREADS];
  std::unordered_map<size_t, struct AFTask*> temp_cur_map;
  tbb::concurrent_unordered_map<std::string, struct CallSiteData*> callSiteMap;
  std::atomic<size_t> last_allocated_node;

  void CaptureSpawnOnly(THREADID threadid, size_t taskId, size_t return_address);
  void CaptureSpawnAndWaitForAll(THREADID threadid, size_t taskId, size_t return_address);
  void CaptureSpawnAndWait(THREADID threadid, size_t taskId, size_t return_address);
  struct AFTask* create_node(THREADID threadid);

public:
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
  size_t getCurStepParent(THREADID threadid);
  size_t getCurStepId(THREADID threadid);
  struct location getCurStepRegionBegin(THREADID threadid);
  struct location getCurStepRegionEnd(THREADID threadid);
  void dumpCallsiteInfo();
  void setStepRegion(THREADID threadid, const char* file, int line, bool start);
  void attributeSchedOvWork(THREADID threadid, size_t so_work);
};

#endif
