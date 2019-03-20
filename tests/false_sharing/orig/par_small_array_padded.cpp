#include <stdlib.h>
#include "tbb/task_scheduler_init.h"
#include "tbb/parallel_for.h"

using namespace tbb;

#define ARRAY_SIZE 64
#define GRAINSIZE 1

struct data {
  char d;
  char pad[63];
};

struct data a[ARRAY_SIZE] __attribute__ ((aligned));

class ApplyFoo {
public:
  void operator()( const blocked_range<size_t>& r ) const {
    for( size_t i=r.begin(); i!=r.end(); ++i ) { 
      for (int j=0;j < 100000000;j++)
	a[i].d++;
      for (int j=0;j < 100000000;j++)
	a[i].d--;
    }
  }
};

void ParallelApplyFoo( struct data a[], size_t n ) {
  parallel_for(blocked_range<size_t>(0,n,GRAINSIZE), ApplyFoo(), tbb::simple_partitioner());
}

int main(int argc, char** argv) {
  tbb::task_scheduler_init init(16);
  ParallelApplyFoo(a, ARRAY_SIZE);
}
