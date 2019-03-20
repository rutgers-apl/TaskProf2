include parallelDefs

# required files
SORT = sampleSort.h quickSort.h transpose.h
GLOBAL_REQUIRE = parallel.h sequence.h $(SORT)
LOCAL_REQUIRE = 
INCLUDE = sampleSort.h

PCFLAGS += -I$(TBBROOT)/include -std=c++11 -fpermissive
PLFLAGS += -L$(TBBROOT)/obj -ltbb -std=c++11

include ../common/timeRequiredFiles
include MakeBenchI
