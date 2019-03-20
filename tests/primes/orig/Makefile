CXX=g++
CXXFLAGS = -I$(TBBROOT)/include -std=c++11
LIBS = -L$(TBBROOT)/obj -ltbb
SRCS = $(wildcard *.cpp)
PROGS = $(patsubst %.cpp,%,$(SRCS))

all: $(PROGS)

%: %.cpp
	$(CXX) -g $(CXXFLAGS) -o $@ $< $(LIBS)

clean:
	rm -rf $(PROGS) *~ *.out
