include parallelDefs

# required files
OCTTREE = geometry.h octTree.h blockRadixSort.h transpose.h
GLOBAL_REQUIRE = parallel.h sequence.h $(OCTTREE)
BENCH_REQUIRE = spherical.h
OBJS = CK.o

PCFLAGS += -I$(TBBROOT)/include -std=c++11 -fpermissive
PLFLAGS += -L$(TBBROOT)/obj -ltbb -std=c++11

include ../common/timeRequiredFiles
include MakeBench
