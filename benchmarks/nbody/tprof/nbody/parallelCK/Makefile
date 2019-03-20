include parallelDefs

# required files
OCTTREE = geometry.h octTree.h blockRadixSort.h transpose.h
GLOBAL_REQUIRE = parallel.h sequence.h $(OCTTREE)
BENCH_REQUIRE = spherical.h
OBJS = CK.o

PCFLAGS += -I$(TP_ROOT)/include -I$(TBBROOT)/include -std=c++11 -fpermissive -g
PLFLAGS += -L$(TBBROOT)/obj -ltbb -L$(TP_ROOT)/obj -ltprof -std=c++11

include ../common/timeRequiredFiles
include MakeBench
