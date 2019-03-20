#include <iostream>
#include "AFTask.H"

// A global lock is needed because removing from linked list can occur
// from any thread. Push to thread happens from a same thread.
PIN_LOCK ll_lock;

void init_ll(struct AFTask** head_ptr) {
  struct AFTask* dummy = new AFTask();
  dummy->next = NULL;
  dummy->prev = NULL;
  *head_ptr = dummy;
}

void push_ll(struct AFTask* head, struct AFTask* new_node) {
  PIN_GetLock(&ll_lock, 0);
  new_node->next = head->next;
  new_node->prev = head;
  if (head->next != NULL) {
    head->next->prev = new_node;
  }
  head->next = new_node;
  PIN_ReleaseLock(&ll_lock);
}

void remove_ll(struct AFTask* node) {
  PIN_GetLock(&ll_lock, 0);
  node->prev->next = node->next;
  if (node->next != NULL) {
    node->next->prev = node->prev;
  }
  PIN_ReleaseLock(&ll_lock);
}

void print_ll(struct AFTask* dummy) {
  struct AFTask* head = dummy->next;
  while(head != NULL) {
    std::cout << "TYPE:" << head->type << ", "
	      << "SFFLAG:" << head->sync_finish_flag << ", "
	      << "PARENT:" << head->parent << ", "
	      << "ACT CHILDREN: " << head->act_children.load()
	      << std::endl;
    head = head->next;
  }
}
