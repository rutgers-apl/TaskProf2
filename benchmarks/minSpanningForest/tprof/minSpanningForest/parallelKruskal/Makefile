include parallelDefs

# required files
SORT =  quickSort.h sampleSort.h transpose.h serialSort.h
GLOBAL_REQUIRE = utils.h parallel.h sequence.h graph.h speculative_for.h unionFind.h $(SORT)
LOCAL_REQUIRE = 
OBJS = MST.o

PCFLAGS += -I$(TP_ROOT)/include -I$(TBBROOT)/include -std=c++11 -fpermissive
PLFLAGS += -L$(TBBROOT)/obj -ltbb -L$(TP_ROOT)/obj -ltprof -std=c++11

include ../common/timeRequiredFiles
include MakeBench

