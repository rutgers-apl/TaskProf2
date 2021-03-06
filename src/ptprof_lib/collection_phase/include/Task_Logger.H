#ifndef TASK_LOGGER_H
#define TASK_LOGGER_H

#include <unordered_map>
#include <fstream>
#include <vector>
#include <string>
#include <string.h>

#include "Common.H"
#include "Location.H"

#define NUM_ENTRIES 1024

struct step_work_data {
  //char* seq_num_str;
  //unsigned int sum_seq_nos;
  //unsigned int depth;
  size_t step_parent;
  size_t work;
  size_t node_id;
  unsigned short int node_type;
  size_t ret_addr;
  struct location start;
  struct location end;
  std::unordered_map<size_t, size_t>* region_work;
};

class Task_Logger {
private:
  std::ofstream report_sched[NUM_THREADS];
  std::ofstream report[NUM_THREADS];
  unsigned int last_allocated[NUM_THREADS];
  struct step_work_data step_work_list[NUM_THREADS][NUM_ENTRIES] = {{{0}}};

public:
  Task_Logger();
  void update_step_and_region(THREADID threadid,struct location start, struct location end);
  void update_file_line(THREADID threadid,struct location start, struct location end);
  void log(THREADID,size_t,size_t,size_t,unsigned short int,size_t);
  void buffer_info(THREADID threadid,size_t creator_tid,size_t parent,size_t work,int node_type,size_t ret_addr);
  void log_region_work(THREADID threadid,size_t return_address,size_t work);
  void Fini(size_t creator_tid,size_t parent,size_t work,unsigned short int node_type,size_t ret_addr,struct location start, struct location end);
  void log_sched_ov(THREADID threadid, size_t node_id, size_t work);  
};

#endif
