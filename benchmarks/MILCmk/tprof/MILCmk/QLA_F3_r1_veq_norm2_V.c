/**************** QLA_F3_r_veq_norm2_V.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_f3.h>
#include <math.h>

#include "tbb/parallel_for.h"
#include "tbb/parallel_reduce.h"
//#include "tbb/mutex.h"

class maxRC {
 private:
  const QLA_F3_ColorVector *const _a;
  int _n;

 public:
  int sum;

 maxRC(QLA_F3_ColorVector* a,int n):_a(a),_n(n) {}

 maxRC(maxRC& x, tbb::split):_a(x._a),_n(x._n) {}

  void operator()(const tbb::blocked_range<int>& r,size_t thdId) {
    const QLA_F3_ColorVector *a = _a;
    for( int i=r.begin(); i!=r.end(); ++i ) {
      for(int i_c=0; i_c<3; i_c++) {
	QLA_F_Complex at;
	QLA_c_eq_c(at,QLA_F3_elem_V(a[i],i_c));
	sum += QLA_norm2_c(at);
      }
    }
  }

  void join( const maxRC& y ) {
    sum+=y.sum;
  }
};

void QLA_F3_r_veq_norm2_V ( QLA_F_Real * r, QLA_F3_ColorVector * a, int n)
{
  /* tbb::mutex _x_mutex; */
  /* tbb::parallel_for(tbb::blocked_range<int>(0, n), */
  /* 		    [&](tbb::blocked_range<int> br) */
  /* 		    {for( int i=br.begin(); i!=br.end(); ++i ) { */
  /* 			for(int i_c=0; i_c<3; i_c++) { */
  /* 			  QLA_F_Complex at; */
  /* 			  QLA_c_eq_c(at,QLA_F3_elem_V(a[i],i_c)); */
  /* 			  _x_mutex.lock(); */
  /* 			  sum += QLA_norm2_c(at); */
  /* 			  _x_mutex.unlock(); */
  /* 			} */
  /* 		      } */
  /* 		    }); */

  /* maxRC mrc(a,n); */
  /* tbb::parallel_reduce(tbb::blocked_range<int>(0,n),mrc, __FILE__, __LINE__); */
  /* *r = mrc.sum; */

  QLA_D_Real sum;
  sum = 0.;

#pragma omp parallel for reduction(+:sum)
  for(int i=0; i<n; i++) {
    for(int i_c=0; i_c<3; i_c++) {
      QLA_F_Complex at;
      QLA_c_eq_c(at,QLA_F3_elem_V(a[i],i_c));
      sum += QLA_norm2_c(at);
    }
  }
  
  *r = sum;
}
