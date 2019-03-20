CXX=g++

INCLUDE = -I$(TP_ROOT)/include -I$(TBBROOT)/include

EXEC = swaptions

DEF := $(DEF) -DENABLE_THREADS -DTBB_VERSION
LIBS := $(LIBS) -ltbb -ltprof

OBJS= CumNormalInv.o MaxFunction.o RanUnif.o nr_routines.o icdf.o \
	HJM_SimPath_Forward_Blocking.o HJM.o HJM_Swaption_Blocking.o  \
	HJM_Securities.o

LDFLAGS = -L$(TBBROOT)/obj -L$(TP_ROOT)/obj

CXXFLAGS += -g -std=c++11 #-O3 -std=c++0x

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(DEF) $(OBJS) $(INCLUDE) $(LIBS) -o $(EXEC)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.cpp -o $*.o

.c.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.c -o $*.o

clean:
	rm -f $(OBJS) $(EXEC) *~ *.out
