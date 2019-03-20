#ifndef COMMON_H
#define COMMON_H

#define NUM_THREADS 32

#include <pthread.h>

typedef unsigned int THREADID;
typedef unsigned long ADDRINT;
typedef pthread_mutex_t PIN_LOCK;

inline void PIN_GetLock(PIN_LOCK* lock, int tid) {
  pthread_mutex_lock(lock);
}

inline void PIN_ReleaseLock(PIN_LOCK* lock) {
  pthread_mutex_unlock(lock);
}

#endif
