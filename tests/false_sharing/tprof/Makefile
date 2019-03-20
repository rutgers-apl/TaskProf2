CXX=g++
CXXFLAGS = -I$(TBBROOT)/include -I$(TP_ROOT)/include -std=c++11
LIBS = -L$(TBBROOT)/obj -ltbb -ltprof -L$(TP_ROOT)/obj

SRCS = $(wildcard *.cpp)

PROGS = $(patsubst %.cpp,%,$(SRCS))

all: $(PROGS)

%: %.cpp
	$(CXX) $(CXXFLAGS) -o $@ $< $(LIBS)

clean:
	rm -rf $(PROGS) *~ *.out
