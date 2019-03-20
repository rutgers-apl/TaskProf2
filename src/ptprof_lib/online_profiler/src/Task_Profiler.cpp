#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <string.h>
#include "Task_Profiler.H"

Task_Profiler::Task_Profiler(const char* file, int line) {
  taskGraph->setStepRegion(0, file, line, true);
  
  start_count(0);
}

int Task_Profiler::perf_event_open_wrapper(struct perf_event_attr *hw_event, pid_t pid,
		int cpu, int group_fd, unsigned long flags)
{
  int ret;
  ret = syscall(__NR_perf_event_open, hw_event, pid, cpu,
		group_fd, flags);
  return ret;
}

void Task_Profiler::start_count(THREADID threadid) {
#if 1
  struct perf_event_attr pe;

  memset(&pe, 0, sizeof(struct perf_event_attr));
  pe.type = PERF_TYPE_HARDWARE;
  pe.size = sizeof(struct perf_event_attr);
  pe.config = PERF_COUNT_HW_CPU_CYCLES;
  pe.disabled = 1;
  pe.exclude_kernel = 1;
  pe.exclude_hv = 1;
  pe.exclude_idle = 1;

  int fd;
  fd = perf_event_open_wrapper(&pe, 0, -1, -1, 0);
  if (fd == -1) {
    fprintf(stderr, "Unable to read performance counters. Linux perf event API not supported on the machine. Error number: %d\n", errno);
    exit(EXIT_FAILURE);
  }
  perf_fds[threadid] = fd;

  ioctl(fd, PERF_EVENT_IOC_RESET);
  ioctl(fd, PERF_EVENT_IOC_ENABLE);
#endif
}

size_t Task_Profiler::stop_n_get_count (THREADID threadid) {
#if 1
  ioctl(perf_fds[threadid], PERF_EVENT_IOC_DISABLE);
  size_t count = 0;
  read(perf_fds[threadid], &count, sizeof(unsigned long));
  close(perf_fds[threadid]);
  return count;
#else
  return 1;
#endif
}

void Task_Profiler::TP_CaptureExecute(THREADID threadid,const char* file, int line) {
  taskGraph->setStepRegion(threadid, file, line, true);
  start_count(threadid);
}

void Task_Profiler::TP_CaptureReturn(THREADID threadid,const char* file, int line) {
  size_t count = stop_n_get_count(threadid);

  taskGraph->setStepRegion(threadid, file, line, false);
  taskGraph->add_step_work(threadid, count);
  taskGraph->add_step_critical_work(threadid, count);
  taskGraph->decrement_act_child(threadid);
}

void Task_Profiler::TP_CaptureWait_Entry(THREADID threadid,const char* file, int line) {
  size_t count = stop_n_get_count(threadid);

  taskGraph->setStepRegion(threadid, file, line, false);
  taskGraph->add_step_work(threadid, count);
  taskGraph->add_step_critical_work(threadid, count);
  taskGraph->decrement_act_child(threadid);
}

void Task_Profiler::TP_CaptureWait_Exit(THREADID threadid,const char* file, int line) {
  taskGraph->setStepRegion(threadid, file, line, true);
  start_count(threadid);
}

void Task_Profiler::TP_CaptureSpawn_Entry(THREADID threadid,const char* file, int line) {
  size_t count = stop_n_get_count(threadid);
  
  taskGraph->setStepRegion(threadid, file, line, false);
  taskGraph->add_step_work(threadid, count);
  taskGraph->add_step_critical_work(threadid, count);
  taskGraph->decrement_act_child(threadid);
}

void Task_Profiler::TP_CaptureSpawn_Exit(THREADID threadid,const char* file, int line) {
  taskGraph->setStepRegion(threadid, file, line, true);
  start_count(threadid);
}

void Task_Profiler::TP_CaptureBeginOptimize(THREADID threadid, const char* file, int line, void* return_address) {
  size_t count = stop_n_get_count(threadid);
  taskGraph->add_step_work(threadid, count);
  taskGraph->add_step_critical_work_whatif(threadid, count);
  start_count(threadid);
}

void Task_Profiler::TP_CaptureEndOptimize(THREADID threadid, const char* file, int line, void* return_address) {
  size_t count = stop_n_get_count(threadid);
  taskGraph->add_step_work(threadid, count);
  
  taskGraph->analysis_type = WHAT_IF;
  //Reduce work by OPT factor
  count = count/OPT_FACTOR;
  taskGraph->add_step_critical_work_whatif(threadid, count);
  start_count(threadid);
}

void Task_Profiler::Fini(const char* file, int line) {
  size_t count = stop_n_get_count(0);

  taskGraph->setStepRegion(0, file, line, false);
  taskGraph->add_step_work(0, count);
  taskGraph->add_step_critical_work(0, count);
  taskGraph->decrement_act_child(0);
}
