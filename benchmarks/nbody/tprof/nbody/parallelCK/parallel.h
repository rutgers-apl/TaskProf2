#define parallel_main main
#include "tbb/parallel_for.h"
#define parallel_for tbb::parallel_for

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
