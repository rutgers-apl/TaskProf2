#ifndef AFTASK_H
#define AFTASK_H

#include <atomic>
#include <unordered_map>

#include "Common.H"
#include "RegionInfo.H"

enum NodeType {
  NO_TYPE = 0,
  ASYNC = 1,
  FINISH = 2,
  STEP = 3
};

struct profiler_data {
  std::atomic<size_t> work;
  std::atomic<size_t> local_work;
  std::atomic<size_t> critical_child;
  std::atomic<size_t> parent_work;

  std::atomic<size_t> t_overhead;
  std::atomic<size_t> et_overhead;

  /**** CALCULATING %AGE OF CRITICAL PATH AND REGION ****/
  std::atomic<size_t> local_local_work;
  std::unordered_map<size_t, size_t> critical_call_sites;
  PIN_LOCK ss_lock = PTHREAD_MUTEX_INITIALIZER;

  std::unordered_map<size_t, size_t> region_work;
  /**** CALCULATING %AGE OF CRITICAL PATH REGION ****/

  /***** REGION INFORMATION FOR CAUSAL ANALYSIS ********/
  RegionInfo local_step;
  RegionInfo critical_step;
  RegionInfo parent_step;
  /***** REGION INFORMATION FOR CAUSAL ANALYSIS ********/
};

struct AFTask {
  NodeType young_ns_child; //NodeType of youngest non-step child  
  bool sync_finish_flag;

  struct AFTask* parent;
  NodeType type;
  
  /* profile data for each task */
  struct profiler_data t_prof;
  size_t spawn_site;

  PIN_LOCK update_lock = PTHREAD_MUTEX_INITIALIZER;
  std::atomic<unsigned int> act_children;

  struct Location step_region_begin;
  struct Location step_region_end;

  /* pointer for linked list */
  struct AFTask* next;
  struct AFTask* prev;
};

extern PIN_LOCK ll_lock;
void init_ll(struct AFTask** head_ptr);
void push_ll(struct AFTask* head, struct AFTask* task_node);
void remove_ll(struct AFTask* node);
void print_ll(struct AFTask* dummy);

#endif
