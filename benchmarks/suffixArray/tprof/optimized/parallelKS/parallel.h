#define cilk_spawn
#define cilk_sync
#define parallel_main main
#include "tbb/parallel_for.h"
#define parallel_for tbb::parallel_for
#define parallel_for_1 for
#define parallel_for_256 for
#define cilk_for for

#include <limits.h>

#if defined(LONG)
typedef long intT;
typedef unsigned long uintT;
#define INT_T_MAX LONG_MAX
#else
typedef int intT;
typedef unsigned int uintT;
#define INT_T_MAX INT_MAX
#endif
