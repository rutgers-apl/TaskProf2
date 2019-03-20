#include "tbb/task_scheduler_init.h"
#include "t_debug_task.h"
#include "tbb/parallel_for.h"

using namespace std;
using namespace tbb;

#define PAR_RANGE 262144
#define N_THREADS 4

size_t GRAINSIZE = 1;

struct data {
  char d;
  char pad[63];
};

struct data a[N_THREADS] __attribute__ ((aligned));

class ApplyFoo {
public:
  void operator()( const blocked_range<size_t>& r,size_t taskId ) const {
    for( size_t i=r.begin(); i!=r.end(); ++i ) { 
      a[get_cur_tid()].d++;
    }
  }
};

class Driver: public t_debug_task {
  size_t size;
public:
  Driver(size_t s) {
    size = s;
  }
  
  task* execute() {
    __exec_begin__(getTaskId(), __FILE__, __LINE__);

    if (size <= GRAINSIZE) {
      a[get_cur_tid()].d++;
    } else {
      tbb::t_debug_task* a = new(task::allocate_child()) Driver(size/2);
      tbb::t_debug_task* b = new(task::allocate_child()) Driver(size/2);

      set_ref_count(3);
      tbb::t_debug_task::spawn(*a, __FILE__, __LINE__);
      tbb::t_debug_task::spawn(*b, __FILE__, __LINE__);
    
      tbb::t_debug_task::wait_for_all(__FILE__, __LINE__);
    }
    
    __exec_end__(getTaskId(),__FILE__, __LINE__);
    return NULL;
  }
};
 
int main( int argc, const char *argv[] ) {
  tbb::task_scheduler_init init(N_THREADS);
  TD_Activate(__FILE__, __LINE__);

  if (argc != 2)
    GRAINSIZE = 1;
  else
    GRAINSIZE = atoi(argv[1]);

  task& v = *new(task::allocate_root()) Driver(PAR_RANGE);
  t_debug_task::spawn_root_and_wait(v, __FILE__, __LINE__);

  parallel_for(blocked_range<size_t>(0,PAR_RANGE,GRAINSIZE), ApplyFoo(), tbb::simple_partitioner(), __FILE__, __LINE__);

  Fini(__FILE__, __LINE__);
}
