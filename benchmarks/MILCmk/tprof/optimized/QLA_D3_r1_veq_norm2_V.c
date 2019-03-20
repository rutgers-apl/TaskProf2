/**************** QLA_D3_r_veq_norm2_V.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_d3.h>
#include <math.h>

#include "tbb/parallel_for.h"
#include "tbb/mutex.h"

void QLA_D3_r_veq_norm2_V ( QLA_D_Real * r, QLA_D3_ColorVector * a, int n)
{
  QLA_D_Real sum;
  sum = 0.;
  /* tbb::mutex _x_mutex; */
  /* tbb::parallel_for(tbb::blocked_range<int>(0, n), */
  /* 		    [&](tbb::blocked_range<int> br) */
  /* 		    {for( int i=br.begin(); i!=br.end(); ++i ) { */
  /* 			for(int i_c=0; i_c<3; i_c++) { */
  /* 			  QLA_D_Complex at; */
  /* 			  QLA_c_eq_c(at,QLA_D3_elem_V(a[i],i_c)); */
  /* 			  _x_mutex.lock(); */
  /* 			  sum += QLA_norm2_c(at); */
  /* 			  _x_mutex.unlock(); */
  /* 			} */
  /* 		      } */
  /* 		    }); */
  
#pragma omp parallel for reduction(+:sum)
  for(int i=0; i<n; i++) {
    for(int i_c=0; i_c<3; i_c++) {
      QLA_D_Complex at;
      QLA_c_eq_c(at,QLA_D3_elem_V(a[i],i_c));
      sum += QLA_norm2_c(at);
    }
  }
  *r = sum;
}
