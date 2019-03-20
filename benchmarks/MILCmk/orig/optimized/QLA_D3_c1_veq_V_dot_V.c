/**************** QLA_D3_c_veq_V_dot_V.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_d3.h>
#include <math.h>

#include "tbb/task.h"
#include "tbb/mutex.h"

#define NUM_THREADS 16

class Task1: public tbb::task {
 private:
  QLA_D_Complex* _sum;
  int _beg;
  int _end;
  QLA_D3_ColorVector * _a;
  QLA_D3_ColorVector * _b;
  tbb::mutex* _x_mutex;
  
 public:
 Task1(QLA_D_Complex* sum,int beg,int end,
       QLA_D3_ColorVector * a,QLA_D3_ColorVector * b,tbb::mutex* x_mutex)
   :_sum(sum),_beg(beg),_end(end),_a(a),_b(b),_x_mutex(x_mutex) { }
  
  tbb::task* execute() {
    QLA_D_Complex sum_local;
    QLA_c_eq_r(sum_local,0.);
    for(int i=_beg; i<_end; i++) {
      for(int i_c=0; i_c<3; i_c++) {
	QLA_c_peq_ca_times_c(sum_local, QLA_D3_elem_V(_a[i],i_c), QLA_D3_elem_V(_b[i],i_c));
      }
    }
    _x_mutex->lock();
    {
      QLA_c_peq_c(*_sum,sum_local);
    }
    _x_mutex->unlock();
    return NULL;
  }
};

class Driver1: public tbb::task {
 private:
  QLA_D_Complex* _sum;
  int _n;
  QLA_D3_ColorVector * _a;
  QLA_D3_ColorVector * _b;
  tbb::mutex x_mutex;
  
 public:
 Driver1(QLA_D_Complex* sum,int n,
	 QLA_D3_ColorVector * a,QLA_D3_ColorVector * b)
   :_sum(sum),_n(n),_a(a),_b(b) { }
  
  tbb::task* execute() {
    //assert(_n % NUM_THREADS == 0);
    set_ref_count(NUM_THREADS + 1);
    for (int i = 0; i < NUM_THREADS; i++) {
      int chunksize = _n/NUM_THREADS;
      int beg = i*chunksize;
      int end = beg + chunksize;
      tbb::task& a = *new(tbb::task::allocate_child()) Task1(_sum,beg,end,_a,_b,&x_mutex);
      tbb::task::spawn(a);
    }
    tbb::task::wait_for_all();
    return NULL;
  }
};    

void QLA_D3_c_veq_V_dot_V ( QLA_D_Complex * r, QLA_D3_ColorVector * a, QLA_D3_ColorVector * b, int n)
{
  QLA_D_Complex sum;
  QLA_c_eq_r(sum,0.);
  
  tbb::task& v = *new(tbb::task::allocate_root()) Driver1(&sum,n,a,b);
  tbb::task::spawn_root_and_wait(v);
  QLA_c_eq_c(*r,sum);
}

/* void QLA_D3_c_veq_V_dot_V ( QLA_D_Complex * r, QLA_D3_ColorVector * a, QLA_D3_ColorVector * b, int n) */
/* { */
/*   QLA_D_Complex sum; */
/*   QLA_c_eq_r(sum,0.); */
/* #pragma omp parallel */
/*   { */
/*     QLA_D_Complex sum_local; */
/*     QLA_c_eq_r(sum_local,0.); */
/* #pragma omp for */
/*     for(int i=0; i<n; i++) { */
/*       for(int i_c=0; i_c<3; i_c++) { */
/*         QLA_c_peq_ca_times_c(sum_local, QLA_D3_elem_V(a[i],i_c), QLA_D3_elem_V(b[i],i_c)); */
/*       } */
/*     } */
/* #pragma omp critical */
/*     { */
/*       QLA_c_peq_c(sum,sum_local); */
/*     } */
/*   } */
/*   QLA_c_eq_c(*r,sum); */
/* } */
