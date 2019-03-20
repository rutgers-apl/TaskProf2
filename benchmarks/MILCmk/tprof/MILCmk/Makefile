CC = g++
#COPT = -O3 -qhot -qsimd=noauto
#COPT = -O5 -qhot=level=2 -qsimd=auto
#OMP = -qsmp=omp
OMP = -I$(TP_ROOT)/include -I$(TBBROOT)/include -std=c++11

#QLADIR = . #qla-1.7.1
#CINC = -I$(QLADIR)
#CFLAGSA = -DHAVE_XLC
CFLAGSF = $(CFLAGSA) $(COPT) $(OMP) $(CINC) -DQLA_Precision=\'F\' -DQLA_Colors=3 -DQLA_Nc=3 -I./
CFLAGSD = $(CFLAGSA) $(COPT) $(OMP) $(CINC) -DQLA_Precision=\'D\' -DQLA_Colors=3 -DQLA_Nc=3 -I./
LDFLAGS = -L$(TBBROOT)/obj -ltbb -L$(TP_ROOT)/obj -ltprof

FSRC = $(wildcard QLA_F3_*.c)
FOBJS = $(patsubst %.c, %.o, $(FSRC))
DSRC = $(wildcard QLA_D3_*.c)
DOBJS = $(patsubst %.c, %.o, $(DSRC))

#PROGS = qla_bench-f3 qla_bench-d3
PROGS = qla_bench-f3

all: $(PROGS)

qla_bench-f3: qla_bench.c $(FOBJS)
	$(CC) $(CFLAGSF) $(FOBJS) $< -o $@ $(LDFLAGS)

qla_bench-d3: qla_bench.c $(DOBJS)
	$(CC) $(CFLAGSD) $(DOBJS) $< -o $@ $(LDFLAGS)

$(FOBJS):%.o:%.c
	$(CC) $(CFLAGSF) -c $< -o $@

$(DOBJS):%.o:%.c
	$(CC) $(CFLAGSD) -c $< -o $@

clean:
	rm -f $(PROGS) *.o *~

tarball:
	tar jcvhf MILCmk-v1.tar.bz2 --transform 's|^./|MILCmk-v1/|' ./README ./Makefile ./runtests ./bench-*.output ./*.[ch] ./qla-1.7.1/*.[ch]
