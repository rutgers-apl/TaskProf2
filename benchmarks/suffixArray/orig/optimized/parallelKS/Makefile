include parallelDefs

# required files
SORT =  blockRadixSort.h transpose.h
OTHER = merge.h rangeMin.h
GLOBAL_REQUIRE = parallel.h sequence.h utils.h $(SORT) $(OTHER)
LOCAL_REQUIRE = 
OBJS = pks.o

PCFLAGS += -I$(TBBROOT)/include -std=c++11 -fpermissive
PLFLAGS += -L$(TBBROOT)/obj -ltbb -std=c++11

include ../common/timeRequiredFiles
include MakeBench
