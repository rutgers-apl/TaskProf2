include parallelDefs

# required files
GLOBAL_REQUIRE = utils.h parallel.h sequence.h graph.h speculative_for.h unionFind.h
LOCAL_REQUIRE = 
OBJS = ST.o

PCFLAGS += -I$(TP_ROOT)/include -I$(TBBROOT)/include -std=c++11 -fpermissive
PLFLAGS += -L$(TBBROOT)/obj -ltbb -L$(TP_ROOT)/obj -ltprof -std=c++11

include ../common/timeRequiredFiles
include MakeBench

