CXX=g++

INCLUDE = -I$(TBBROOT)/include

EXEC = swaptions

DEF := $(DEF) -DENABLE_THREADS -DTBB_VERSION
LIBS := $(LIBS) -ltbb

OBJS= CumNormalInv.o MaxFunction.o RanUnif.o nr_routines.o icdf.o \
	HJM_SimPath_Forward_Blocking.o HJM.o HJM_Swaption_Blocking.o  \
	HJM_Securities.o

LDFLAGS = -L$(TBBROOT)/obj

CXXFLAGS += -std=c++11

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(LDFLAGS) $(DEF) $(OBJS) $(INCLUDE) $(LIBS) -o $(EXEC)

.cpp.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.cpp -o $*.o

.c.o:
	$(CXX) $(CXXFLAGS) $(DEF) -c $*.c -o $*.o

clean:
	rm -f $(OBJS) $(EXEC) *~ *.out
