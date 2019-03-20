#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <sys/time.h>
#include <math.h>
#include "qla.h"

#include "tbb/task_scheduler_init.h"
#include "tbb/parallel_reduce.h"

#if QLA_Precision == 'F'
#include "QLA_F3_V_vpeq_M_times_pV.c"
#include "QLA_F3_V_veq_Ma_times_V.c"
#include "QLA_F3_V_vmeq_pV.c"
#include "QLA_F3_D_vpeq_spproj_M_times_pD.c"
#include "QLA_F3_M_veq_M_times_pM.c"
#include "QLA_F3_r1_veq_norm2_V.c"
#include "QLA_F3_c1_veq_V_dot_V.c"
#define REALBYTES 4
#else
#include "QLA_D3_V_vpeq_M_times_pV.c"
#include "QLA_D3_V_veq_Ma_times_V.c"
#include "QLA_D3_V_vmeq_pV.c"
#include "QLA_D3_D_vpeq_spproj_M_times_pD.c"
#include "QLA_D3_M_veq_M_times_pM.c"
#include "QLA_D3_r1_veq_norm2_V.c"
#include "QLA_D3_c1_veq_V_dot_V.c"
#define REALBYTES 8
#endif
#define NC QLA_Nc

#define myalloc(type, n) (type *) aligned_malloc(n*sizeof(type))

#define ALIGN 64
void *
aligned_malloc(size_t n)
{
  size_t m = (size_t) malloc(n+ALIGN);
  size_t r = m % ALIGN;
  if(r) m += (ALIGN - r);
  return (void *)m;
}

double
dtime(void)
{
  struct timeval tv;
  gettimeofday(&tv, NULL);
  return CLOCKS_PER_SEC*(tv.tv_sec + 1e-6*tv.tv_usec);
}

void
set_R(QLA_Real *r, int i)
{
  *r = 1+cos(i);
}

void
set_C(QLA_Complex *c, int i)
{
  QLA_c_eq_r_plus_ir(*c, 1+cos(i), 1+sin(i));
}

void
set_V(QLA_ColorVector *v, int i)
{
  for(int j=0; j<QLA_Nc; j++) {
    QLA_c_eq_r_plus_ir(QLA_elem_V(*v,j), j+1+cos(i), j+1+sin(i));
    //QLA_real(QLA_elem_V(*v,j)) = 1;
    //QLA_imag(QLA_elem_V(*v,j)) = 0;
  }
}

void
set_H(QLA_HalfFermion *h, int i)
{
  for(int j=0; j<QLA_Nc; j++) {
    for(int k=0; k<(QLA_Ns/2); k++) {
      QLA_c_eq_r_plus_ir(QLA_elem_H(*h,j,k), (j+4)*(k+1)+cos(i), (j+4)*(k+1)+sin(i));
    }
  }
}

void
set_D(QLA_DiracFermion *d, int i)
{
  for(int j=0; j<QLA_Nc; j++) {
    for(int k=0; k<QLA_Ns; k++) {
      QLA_c_eq_r_plus_ir(QLA_elem_D(*d,j,k), (j+4)*(k+1)+cos(i), (j+4)*(k+1)+sin(i));
    }
  }
}

void
set_M(QLA_ColorMatrix *m, int i)
{
  for(int j=0; j<QLA_Nc; j++) {
    for(int k=0; k<QLA_Nc; k++) {
      QLA_c_eq_r_plus_ir(QLA_elem_M(*m,j,k),
			 (((j-k+QLA_Nc+1)*(j+k+1))%19)+cos(i),
			 (((j+4)*(k+1))%17)+sin(i));
    }
  }
}

class sumT {
 private:
  const QLA_Real* const _r;

 public:
  QLA_Real _t;

 sumT(const QLA_Real r[]):_r(r),_t(0) {}

 sumT(sumT& x, tbb::split):_r(x._r),_t(0) {}

  void operator()(const tbb::blocked_range<int>& r, size_t thdId) {
    const QLA_Real *r_local = _r;
    for( int i=r.begin(); i!=r.end(); ++i ) {
      _t += r_local[i];
    }
  }

  void join( const sumT& y ) {
    _t += y._t;
  }
};

QLA_Real
sum_C(QLA_Complex *d, int n)
{
  QLA_Real t=0, *r=(QLA_Real *)d;
  int nn = n*sizeof(QLA_Complex)/sizeof(QLA_Real);
  for(int i=0; i<nn; i++) t += r[i];
  return t/nn;
  /* sumT sumTclass(r); */
  /* static tbb::affinity_partitioner ap; */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,nn),sumTclass,ap,__FILE__,__LINE__); */
  /* return (sumTclass._t)/nn; */
}

QLA_Real
sum_V(QLA_ColorVector *d, int n)
{
  QLA_Real t=0, *r=(QLA_Real *)d;
  int nn = n*sizeof(QLA_ColorVector)/sizeof(QLA_Real);
  for(int i=0; i<nn; i++) t += r[i];
  return t/nn;
  /* sumT sumTclass(r); */
  /* static tbb::affinity_partitioner ap; */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,nn),sumTclass,ap,__FILE__,__LINE__); */
  /* return (sumTclass._t)/nn;   */
}

QLA_Real
sum_H(QLA_HalfFermion *d, int n)
{
  QLA_Real t=0, *r=(QLA_Real *)d;
  int nn = n*sizeof(QLA_HalfFermion)/sizeof(QLA_Real);
  for(int i=0; i<nn; i++) t += r[i];
  return t/nn;
  /* sumT sumTclass(r); */
  /* static tbb::affinity_partitioner ap; */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,nn),sumTclass,ap,__FILE__,__LINE__); */
  /* return (sumTclass._t)/nn;   */
}

QLA_Real
sum_D(QLA_DiracFermion *d, int n)
{
  QLA_Real t=0, *r=(QLA_Real *)d;
  int nn = n*sizeof(QLA_DiracFermion)/sizeof(QLA_Real);
  for(int i=0; i<nn; i++) t += r[i];
  return t/nn;
  /* sumT sumTclass(r); */
  /* static tbb::affinity_partitioner ap; */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,nn),sumTclass,ap,__FILE__,__LINE__); */
  /* return (sumTclass._t)/nn;   */
}

QLA_Real
sum_M(QLA_ColorMatrix *d, int n)
{
  QLA_Real t=0, *r=(QLA_Real *)d;
  int nn = n*sizeof(QLA_ColorMatrix)/sizeof(QLA_Real);
  for(int i=0; i<nn; i++) t += r[i];
  return t/nn;
  /* sumT sumTclass(r); */
  /* static tbb::affinity_partitioner ap; */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,nn),sumTclass,ap,__FILE__,__LINE__); */
  /* return (sumTclass._t)/nn;   */
}

#define set_fields {							\
    tbb::parallel_for(tbb::blocked_range<int>(0, n),			\
		      [=](tbb::blocked_range<int> br,size_t thdId)	\
		      {for(int i = br.begin(); i != br.end(); i++) {	\
			  set_R(&r1[i], i);				\
			  set_C(&c1[i], i);				\
			  set_V(&v1[i], i);				\
			  set_V(&v2[i], i);				\
			  set_D(&d1[i], i);				\
			  set_D(&d2[i], i);				\
			  set_M(&m1[i], i);				\
			  set_M(&m2[i], i);				\
			  set_M(&m3[i], i);				\
			  int j = ((i|16)+256) % n;			\
			  vp1[i] = &v2[j];				\
			  dp1[i] = &d2[j];				\
			  mp1[i] = &m3[j];				\
			}						\
		      }, __FILE__, __LINE__);				\
  }

/* #define set_fields { \ */
/*   _Pragma("omp parallel for schedule(dynamic,(n/128))") \ */
/*   for(int i=0; i<n; ++i) { \ */
/*     set_R(&r1[i], i); \ */
/*     set_C(&c1[i], i); \ */
/*     set_V(&v1[i], i); \ */
/*     set_V(&v2[i], i); \ */
/*     set_D(&d1[i], i); \ */
/*     set_D(&d2[i], i); \ */
/*     set_M(&m1[i], i); \ */
/*     set_M(&m2[i], i); \ */
/*     set_M(&m3[i], i); \ */
/*     int j = ((i|16)+256) % n; \ */
/*     vp1[i] = &v2[j]; \ */
/*     dp1[i] = &d2[j]; \ */
/*     mp1[i] = &m3[j]; \ */
/*   } \ */
/* } */

int
main(int argc, char *argv[])
{
  tbb::task_scheduler_init init(atoi(argv[1]));
  TD_Activate(__FILE__,__LINE__,argc,argv);
  QLA_Real sum, *r1;
  QLA_Complex *c1;
  QLA_ColorVector *v1, *v2, *v3, *v4, *v5;
  QLA_ColorVector **vp1, **vp2, **vp3, **vp4;
  QLA_HalfFermion *h1, *h2, **hp1;
  QLA_DiracFermion *d1, *d2, **dp1;
  QLA_ColorMatrix *m1, *m2, *m3, *m4, **mp1;
  double flop, mem, time1;
  int nmin, nmax, c, nthreads=1;

  printf("QLA_Precision = %c\n", QLA_Precision);
/* #ifdef _OPENMP */
/*   nthreads = omp_get_max_threads(); */
/*   printf("OMP THREADS = %i\n", nthreads); */
/*   printf("omp_get_wtick = %g\n", omp_get_wtick()); */
/* #ifdef CPU_ZERO */
/* #pragma omp parallel */
/*   { */
/*     int tid = omp_get_thread_num(); */
/*     cpu_set_t set; */
/*     CPU_ZERO(&set); */
/*     CPU_SET(tid, &set); */
/*     sched_setaffinity(0, sizeof(set), &set); */
/*   } */
/* #endif */
/* #endif */

  nmin = 64*nthreads;
  nmax = 256*1024*nthreads;

  r1 = myalloc(QLA_Real, nmax);
  c1 = myalloc(QLA_Complex, nmax);
  v1 = myalloc(QLA_ColorVector, nmax);
  v2 = myalloc(QLA_ColorVector, nmax);
  vp1 = myalloc(QLA_ColorVector *, nmax);
  d1 = myalloc(QLA_DiracFermion, nmax);
  d2 = myalloc(QLA_DiracFermion, nmax);
  dp1 = myalloc(QLA_DiracFermion *, nmax);
  m1 = myalloc(QLA_ColorMatrix, nmax);
  m2 = myalloc(QLA_ColorMatrix, nmax);
  m3 = myalloc(QLA_ColorMatrix, nmax);
  mp1 = myalloc(QLA_ColorMatrix *, nmax);

  for(int n=nmin; n<=nmax; n*=2) {
    printf("len = %i\n", n);
    printf("len/thread = %i\n", n/nthreads);
    double cf = 9.e6/n;

#include "benchfuncs.c"

  }
  Fini(__FILE__,__LINE__);
  return 0;
}
