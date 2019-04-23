#ifndef TASK_PROFILER_H
#define TASK_PROFILER_H

#include <unistd.h>
#include <sys/ioctl.h>
#include <linux/perf_event.h>
#include <asm/unistd.h>
#include <sys/syscall.h>
#include <fstream>
#include <vector>
#include <string>
#include <unordered_map>

#include "AFTaskGraph.H"
#include "Common.H"

extern AFTaskGraph* taskGraph;

class Task_Profiler {
private:
  std::unordered_map<size_t, struct CallSiteData*> regionMap;
  int perf_fds[NUM_THREADS];
  int perf_event_open_wrapper(struct perf_event_attr *hw_event, pid_t pid,
			      int cpu, int group_fd, unsigned long flags);
  size_t stop_n_get_count (THREADID threadid);
  void start_count(THREADID threadid);

public:
  Task_Profiler(const char* file, int line);
  void TP_CaptureExecute(THREADID threadid,const char* file, int line);
  void TP_CaptureReturn(THREADID threadid,const char* file, int line);
  void TP_CaptureWait_Entry(THREADID threadid,const char* file, int line);
  void TP_CaptureWait_Exit(THREADID threadid,const char* file, int line);
  void TP_CaptureSpawn_Entry(THREADID threadid,const char* file, int line);
  void TP_CaptureSpawn_Exit(THREADID threadid,const char* file, int line);

  void TP_StartTaskOvhd(THREADID threadid);
  void TP_StopTaskOvhd(THREADID threadid);
  
  void TP_CaptureBeginOptimize(THREADID threadid, const char* file, int line, void* return_address);
  void TP_CaptureEndOptimize(THREADID threadid, const char* file, int line, void* return_address);
  
  void Fini(const char* file, int line);
};

#endif
