#include <iostream>
#include <string.h>
#include "AFTaskGraph.H"

AFTaskGraph::AFTaskGraph() {
  last_allocated_node = 1;

  struct AFTask* head_node = create_node(0);
  cur_dpst_index[0].push(head_node);

  taskLogger->log(0,head_node->node_id,0,0,FINISH,0);

  //Add step node as the first child of Head node
  head_node->child_id = last_allocated_node++;
}

struct AFTask* AFTaskGraph::create_node(THREADID threadid) {
  //initialize task;
  struct AFTask* new_node = new AFTask();
  new_node->node_id = last_allocated_node++;
  new_node->young_ns_child = NO_TYPE;
  new_node->sync_finish_flag = false;

  return new_node;
}

size_t AFTaskGraph::getCurStepParent(THREADID threadid) {
  return (cur_dpst_index[threadid].top())->node_id;
}

size_t AFTaskGraph::getCurStepId(THREADID threadid) {
  return (cur_dpst_index[threadid].top())->child_id;
}

struct location AFTaskGraph::getCurStepRegionBegin(THREADID threadid) {
  struct AFTask* cur_task  = cur_dpst_index[threadid].top();
  return cur_task->start;
}

struct location AFTaskGraph::getCurStepRegionEnd(THREADID threadid) {
  struct AFTask* cur_task  = cur_dpst_index[threadid].top();
  return cur_task->end;
}

void AFTaskGraph::attributeSchedOvWork(THREADID threadid, size_t so_work) {
  struct AFTask* cur_task  = cur_dpst_index[threadid].top();
  cur_task->sc_ov_work += so_work;
}

void AFTaskGraph::CaptureSpawnOnly(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  //if current node rightmost child is Async or not
  //check for STEP and prev of STEP == ASYNC
  struct AFTask* newNode;
  if (cur_node->young_ns_child == ASYNC) {
    newNode = create_node(threadid);
    cur_node->young_ns_child = ASYNC;
    taskLogger->log(threadid,newNode->node_id,cur_node->node_id,0,ASYNC,return_address);
  } else {
    struct AFTask* newFinish = create_node(threadid);
    cur_node->young_ns_child = FINISH;

    newFinish->sync_finish_flag = true;
    taskLogger->log(threadid,newFinish->node_id,cur_node->node_id,0,FINISH,0);

    newNode = create_node(threadid);
    newFinish->young_ns_child = ASYNC;

    taskLogger->log(threadid,newNode->node_id,newFinish->node_id,0,ASYNC,return_address);

    cur_dpst_index[threadid].push(newFinish);
    cur_node = newFinish;
  }

  newNode->child_id = last_allocated_node++;

  cur_node->child_id = last_allocated_node++;

  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId, newNode));
  PIN_ReleaseLock(&handshake_lock);
}

void AFTaskGraph::CaptureSpawnAndWaitForAll(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  //if current node rightmost child is Async or not
  //check for STEP and prev of STEP == ASYNC
  struct AFTask* newNode;
  if (cur_node->young_ns_child == ASYNC) {
    newNode = create_node(threadid);
    cur_node->young_ns_child = ASYNC;

    taskLogger->log(threadid,newNode->node_id,cur_node->node_id,0,ASYNC,return_address);
  } else {
    struct AFTask* newFinish = create_node(threadid);
    cur_node->young_ns_child = FINISH;

    newFinish->sync_finish_flag = true;

    taskLogger->log(threadid,newFinish->node_id,cur_node->node_id,0,FINISH,0);

    newNode = create_node(threadid);
    newFinish->young_ns_child = ASYNC;

    taskLogger->log(threadid,newNode->node_id,newFinish->node_id,0,ASYNC,return_address);

    cur_dpst_index[threadid].push(newFinish);
    cur_node = newFinish;
  }

  newNode->child_id = last_allocated_node++;

  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId, newNode));
  PIN_ReleaseLock(&handshake_lock);
}

void AFTaskGraph::CaptureExecute(THREADID threadid, size_t taskId)
{
  PIN_GetLock(&handshake_lock, 0);
  struct AFTask* temp_cur = temp_cur_map.at(taskId);
  temp_cur_map.erase(taskId);
  PIN_ReleaseLock(&handshake_lock);
  
  cur_dpst_index[threadid].push(temp_cur);
}

void AFTaskGraph::CaptureSpawnAndWait(THREADID threadid, size_t taskId, size_t return_address)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  struct AFTask* newFinish = create_node(threadid);
  cur_node->young_ns_child = FINISH;

  taskLogger->log(threadid,newFinish->node_id,cur_node->node_id,0,FINISH,return_address);  
  newFinish->child_id = last_allocated_node++;

  PIN_GetLock(&handshake_lock, 0);
  temp_cur_map.insert(std::pair<size_t, struct AFTask*>(taskId,newFinish));  
  PIN_ReleaseLock(&handshake_lock);
}

void AFTaskGraph::CaptureReturn(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  if (cur_node->sync_finish_flag == true) {
    taskLogger->log_sched_ov(threadid, cur_node->node_id, cur_node->sc_ov_work);
    cur_dpst_index[threadid].pop();      
    delete cur_node->start.filename;
    cur_node->start.filename = NULL;
    delete cur_node->end.filename;
    cur_node->end.filename = NULL;
    delete cur_node;
    cur_node = cur_dpst_index[threadid].top();
  }
  taskLogger->log_sched_ov(threadid,
			   (cur_dpst_index[threadid].top())->node_id,
			   (cur_dpst_index[threadid].top())->sc_ov_work);
  cur_dpst_index[threadid].pop();
  delete cur_node->start.filename;
  delete cur_node->end.filename;  
  delete cur_node;
}

void AFTaskGraph::CaptureWait(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();
  cur_node->child_id = last_allocated_node++;
}

void AFTaskGraph::CaptureWaitOnly(THREADID threadid)
{
  struct AFTask* cur_node = cur_dpst_index[threadid].top();

  taskLogger->log_sched_ov(threadid, cur_node->node_id, cur_node->sc_ov_work);
  
  cur_dpst_index[threadid].pop();
  delete cur_node->start.filename;
  cur_node->start.filename = NULL;
  delete cur_node->end.filename;
  cur_node->end.filename = NULL;
  delete cur_node;

  cur_node = cur_dpst_index[threadid].top();

  cur_node->child_id = last_allocated_node++;
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
    if (callSiteMap.count(map_key) == 0) {
      struct CallSiteData* callsiteData = new CallSiteData();
      callsiteData->ss_id = ret_addr;
      callsiteData->cs_filename = file;
      callsiteData->cs_line_number = line;
      callsiteData->par_for = par_for;
      callSiteMap.insert(std::pair<std::string, struct CallSiteData*>(map_key, callsiteData));
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
    if (callSiteMap.count(map_key) == 0) {
      struct CallSiteData* callsiteData = new CallSiteData();
      callsiteData->ss_id = ret_addr;
      callsiteData->cs_filename = file;
      callsiteData->cs_line_number = line;
      callsiteData->par_for = par_for;
      callSiteMap.insert(std::pair<std::string, struct CallSiteData*>(map_key, callsiteData));
    }
  }

  CaptureSpawnAndWaitForAll(threadid, taskId, ret_addr);
}

void AFTaskGraph::dumpCallsiteInfo() {
  std::ofstream report_callsite_info;
  report_callsite_info.open("callsite_info.csv");
  for (tbb::concurrent_unordered_map<std::string,struct CallSiteData*>::iterator it=callSiteMap.begin();
       it!=callSiteMap.end(); ++it) {
    struct CallSiteData* cs_data = it->second;
    report_callsite_info << cs_data->ss_id << ","
			 << cs_data->cs_filename << ","
			 << cs_data->cs_line_number << ","
			 << cs_data->par_for
			 << std::endl;
  }
  report_callsite_info.close();
}

void AFTaskGraph::setStepRegion(THREADID threadid, const char* file, int line, bool start) {
  if (file == NULL) return;
  struct AFTask* cur_step_parent = cur_dpst_index[threadid].top();
  if (start) {
    cur_step_parent->start.line = line;
    delete cur_step_parent->start.filename;
    cur_step_parent->start.filename = new char[64];
    strcpy(cur_step_parent->start.filename, file);
  } else {
    cur_step_parent->end.line = line;
    delete cur_step_parent->end.filename;
    cur_step_parent->end.filename = new char[64];
    strcpy(cur_step_parent->end.filename, file);
  }
}
