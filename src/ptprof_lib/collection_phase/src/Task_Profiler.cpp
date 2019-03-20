#include <unistd.h>
#include <fcntl.h>
#include <iostream>
#include <string.h>
//#include <assert.h>
#include "Task_Profiler.H"

//#include "CallSiteData.H"

void Task_Profiler::set_counter_type(struct perf_event_attr* pe) {
  CounterType c = (CounterType) p_counter_type;
  switch( c ) {
  case CYCLES:
    pe->type = PERF_TYPE_HARDWARE;
    pe->config = PERF_COUNT_HW_CPU_CYCLES;
    break;
  case INSTRUCTIONS:
    pe->type = PERF_TYPE_HARDWARE;
    pe->config = PERF_COUNT_HW_INSTRUCTIONS;
    break;
  case LOCAL_HITM:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x4D2;
    break;
  case REMOTE_HITM:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x10D3;
    break;
  case LOCAL_DRAM:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x1D3;
    break;
  case REMOTE_DRAM:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x4D3;
    break;
  case PAGE_FAULTS:
    pe->type = PERF_TYPE_SOFTWARE;
    pe->config = PERF_COUNT_SW_PAGE_FAULTS;
    break;
  case LLC_MISS:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x20d1;
    break;
  case L1_M_REPLACE:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x851;
    break;
  case L1_EVICTION:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x451;
    break;
  case L1_REPLACEMENT:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x151;
    break;
  case FP_DIVIDE:
    pe->type = PERF_TYPE_RAW;
    pe->config = 0x114;
    break;
  default:
    pe->type = PERF_TYPE_HARDWARE;
    pe->config = PERF_COUNT_HW_CPU_CYCLES;
  }
}

Task_Profiler::Task_Profiler(long int counter_type) {
  start_count(0);
  p_counter_type = counter_type;
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
  pe.size = sizeof(struct perf_event_attr);
  set_counter_type(&pe);
  //pe.type = PERF_TYPE_RAW;
  //pe.type = PERF_TYPE_HARDWARE;
  //pe.type = PERF_TYPE_SOFTWARE;
  //pe.type = PERF_TYPE_HW_CACHE;
  //pe.config = PERF_COUNT_SW_PAGE_FAULTS;
  //pe.config = PERF_COUNT_HW_INSTRUCTIONS;
  //pe.config = PERF_COUNT_HW_CPU_CYCLES;
  //pe.config = 0x10D3;0x4D2;//HITM
  //pe.config = 0x4D3;//remote_dram
  //pe.config = 0x114;//fp_divide
  //pe.config = 0x20d1;//llc_miss
  //pe.config = 0x1D3;//local_dram
  //pe.config = 0x851;//l1d.all_m_replacement
  //pe.config = 0x451;//l1d.eviction
  //pe.config = 0x151;//l1d.replacement
  //pe.config = PERF_COUNT_HW_CACHE_L1D | (PERF_COUNT_HW_CACHE_OP_WRITE << 8) | (PERF_COUNT_HW_CACHE_RESULT_ACCESS << 16);
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

void Task_Profiler::startSchedCount(THREADID threadid) {
  start_count(threadid);
}

size_t Task_Profiler::stopSchedCountOnly(THREADID threadid) {
  if (perf_fds[threadid] != 0) {
    return stop_n_get_count(threadid);
    //taskGraph->attributeSchedOvWork(threadid, count);
    //so_data[threadid].sched_ohead_work += count;
  }
  return 0;
}

void Task_Profiler::stopSchedCount(THREADID threadid) {
  if (perf_fds[threadid]!= 0) {
    size_t count = stop_n_get_count(threadid);
    taskGraph->attributeSchedOvWork(threadid, count);
    //so_data[threadid].sched_ohead_work += count;
    //so_data[threadid].sched_calls++;
  }
}

void Task_Profiler::update_step_and_region(THREADID threadid) {
  taskLogger->update_step_and_region(threadid,taskGraph->getCurStepRegionBegin(threadid),taskGraph->getCurStepRegionEnd(threadid));
}

void Task_Profiler::TP_CaptureExecute(THREADID threadid) {  
  start_count(threadid);
}

void Task_Profiler::TP_CaptureReturn(THREADID threadid) {
  size_t count = stop_n_get_count(threadid);
  taskLogger->log(threadid,taskGraph->getCurStepId(threadid),taskGraph->getCurStepParent(threadid),count,STEP,0);
}

void Task_Profiler::TP_CaptureWait_Entry(THREADID threadid) {
  size_t count = stop_n_get_count(threadid);
  taskLogger->log(threadid,taskGraph->getCurStepId(threadid),taskGraph->getCurStepParent(threadid),count,STEP,0);  
}

void Task_Profiler::TP_CaptureWait_Exit(THREADID threadid) {
  start_count(threadid);
}

void Task_Profiler::TP_CaptureSpawn_Entry(THREADID threadid) {
  size_t count = stop_n_get_count(threadid);
  taskLogger->log(threadid,taskGraph->getCurStepId(threadid),taskGraph->getCurStepParent(threadid),count,STEP,0);
}

void Task_Profiler::TP_CaptureSpawn_Exit(THREADID threadid) {
  start_count(threadid);
}

void Task_Profiler::TP_CaptureBeginOptimize(THREADID threadid, const char* file, int line, void* return_address) {
  size_t count = stop_n_get_count(threadid);
  taskLogger->log(threadid,taskGraph->getCurStepId(threadid),taskGraph->getCurStepParent(threadid),count,STEP,0);
  taskLogger->update_file_line(threadid,taskGraph->getCurStepRegionBegin(threadid),taskGraph->getCurStepRegionEnd(threadid));
  start_count(threadid);
}

void Task_Profiler::TP_CaptureEndOptimize(THREADID threadid, const char* file, int line, void* return_address) {
  size_t count = stop_n_get_count(threadid);  
  taskLogger->buffer_info(threadid,taskGraph->getCurStepId(threadid),taskGraph->getCurStepParent(threadid),count,STEP,0);
  taskLogger->update_file_line(threadid,taskGraph->getCurStepRegionBegin(threadid),taskGraph->getCurStepRegionEnd(threadid));
  
  if (regionMap.count((size_t)return_address) == 0) {
    struct CallSiteData* callsiteData = new CallSiteData();
    callsiteData->cs_filename = file;
    callsiteData->cs_line_number = line;
    regionMap.insert(std::pair<size_t, struct CallSiteData*>((size_t)return_address, callsiteData));
  }

  taskLogger->log_region_work(threadid,(size_t)return_address,count);
  start_count(threadid);
}

void Task_Profiler::Fini() {
  size_t count = stop_n_get_count(0);

  taskLogger->Fini(taskGraph->getCurStepId(0),
		   taskGraph->getCurStepParent(0),
		   count,
		   STEP,
		   0,
		   taskGraph->getCurStepRegionBegin(0),
		   taskGraph->getCurStepRegionEnd(0));


  //write callsite info to file
  taskGraph->dumpCallsiteInfo();

  if (!regionMap.empty()) {
    dumpRegionInfo();
  }

  //write scheduling overhead data
  // size_t total_so = 0;
  // size_t total_so_calls = 0;
  // for (int i = 0; i < NUM_THREADS; i++) {
  //   total_so += so_data[i].sched_ohead_work;
  //   total_so_calls += so_data[i].sched_calls;
  // }

  // std::ofstream report_sched_info;
  // report_sched_info.open("sched_info.csv");
  // report_sched_info << total_so << ","
  // 		    << total_so_calls
  // 		    << std::endl;
  // report_sched_info.close();
}

void Task_Profiler::dumpRegionInfo() {
  std::ofstream report_region_info;
  report_region_info.open("region_info.csv");
  for (std::unordered_map<size_t,struct CallSiteData*>::iterator it=regionMap.begin();
	 it!=regionMap.end(); ++it) {
    struct CallSiteData* cs_data = it->second;
    report_region_info << it->first << ","
		       << cs_data->cs_filename << ","
		       << cs_data->cs_line_number
		       << std::endl;
  }
  report_region_info.close();
}
