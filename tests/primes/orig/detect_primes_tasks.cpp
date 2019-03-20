#include "tbb/task.h"
#include "tbb/task_scheduler_init.h"
#include <fstream>
#include <iostream>
#include <assert.h>

#define NUM_THREADS_THIS 4

size_t grain_size;
size_t total_elems;

size_t** primes;
size_t* num_primes;

bool IsPrime(size_t num) {
  if (num <= 1) return false; // zero and one are not prime
  for (size_t i=2; i*i<=num; i++) {
    if (num % i == 0) return false;
  }
  return true;
}

class CheckPrimesTask:public tbb::task {
private:
  size_t begin_t;
  size_t end_t;

public:
  CheckPrimesTask(size_t begin_a, size_t end_a) {
    begin_t = begin_a;
    end_t = end_a;
  }
  
  tbb::task* execute() {
    if ((end_t-begin_t) <= grain_size) {
      //determine range_id
      size_t range_id;
      if (begin_t == 0) {
	range_id = 0;
      } else {
	range_id = begin_t/grain_size;
      }

      for (size_t i = begin_t ; i < end_t; i++) {
	if (IsPrime(i)) {
	  primes[range_id][num_primes[range_id]] = i;
	  num_primes[range_id]++;
	}
      }
    } else {
      set_ref_count(3);
      tbb::task& a = *new( tbb::task::allocate_child() ) CheckPrimesTask(begin_t, begin_t + ((end_t-begin_t)/2));
      tbb::task::spawn(a);
      tbb::task& b = *new( tbb::task::allocate_child() ) CheckPrimesTask((begin_t + (end_t-begin_t)/2), end_t);
      tbb::task::spawn(b);
      tbb::task::wait_for_all();
    }
    return NULL;
  }  
};

int main(int argc, char* argv[]) {
  if (argc != 4) {
    std::cout << "Format: ./detect_primes <range_begin> <range_end> <grain_size>" << std::endl;
    return 0;
  }
  
  size_t range_begin = strtoul(argv[1], NULL, 0);
  size_t range_end = strtoul(argv[2], NULL, 0);
  assert(range_end > range_begin);
  grain_size = strtoul(argv[3], NULL, 0);
  
  tbb::task_scheduler_init init(NUM_THREADS_THIS);
  total_elems = range_end - range_begin;
  assert(grain_size <= total_elems);

  size_t ranges = total_elems/grain_size;
  primes = new size_t* [ranges];
  num_primes = new size_t [ranges];
  for (size_t i = 0; i < ranges; i++) {
    num_primes[i] = 0;
    primes[i] = new size_t[total_elems/ranges];
  }

  tbb::task& a = *new( tbb::task::allocate_root() ) CheckPrimesTask(range_begin, range_end);
  tbb::task::spawn_root_and_wait(a);
  
  std::ofstream report;
  report.open("primes.txt");
  for (unsigned int i = 0; i < ranges; i++) {
    for (size_t j = 0; j < num_primes[i]; j++)
      report << primes[i][j] << "   ";
  }
}
