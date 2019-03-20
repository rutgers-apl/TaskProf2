/**************** QLA_F3_V_veq_Ma_times_V.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_f3.h>
#include <math.h>

#include "tbb/parallel_for.h"

void QLA_F3_V_veq_Ma_times_V ( QLA_F3_ColorVector * r, QLA_F3_ColorMatrix * a, QLA_F3_ColorVector * b, int n)
{
  tbb::parallel_for(tbb::blocked_range<int>(0, n),
		    [=](tbb::blocked_range<int> br,size_t thdId)
		    {for( int i=br.begin(); i!=br.end(); ++i ) {
			for(int i_c=0; i_c<3; i_c++) {
			  QLA_F_Complex x;
			  QLA_c_eq_r(x,0.);
			  for(int k_c=0; k_c<3; k_c++) {
			    QLA_c_peq_ca_times_c(x, QLA_F3_elem_M(a[i],k_c,i_c), QLA_F3_elem_V(b[i],k_c));
			  }
			  QLA_c_eq_c(QLA_F3_elem_V(r[i],i_c),x);
			}
		      }
		    }, __FILE__, __LINE__);
}
