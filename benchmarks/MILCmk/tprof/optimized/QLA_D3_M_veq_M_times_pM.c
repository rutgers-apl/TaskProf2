/**************** QLA_D3_M_veq_M_times_pM.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_d3.h>
#include <math.h>

#include "tbb/parallel_for.h"

void QLA_D3_M_veq_M_times_pM ( QLA_D3_ColorMatrix * r, QLA_D3_ColorMatrix * a, QLA_D3_ColorMatrix * *b, int n)
{
  tbb::parallel_for(tbb::blocked_range<int>(0, n),
		    [=](tbb::blocked_range<int> br,size_t thdId)
		    {for( int i=br.begin(); i!=br.end(); ++i ) {
			for(int i_c=0; i_c<3; i_c++) {
			  for(int j_c=0; j_c<3; j_c++) {
			    QLA_D_Complex x;
			    QLA_c_eq_r(x,0.);
			    for(int k_c=0; k_c<3; k_c++) {
			      QLA_c_peq_c_times_c(x, QLA_D3_elem_M(a[i],i_c,k_c), QLA_D3_elem_M(*b[i],k_c,j_c));
			    }
			    QLA_c_eq_c(QLA_D3_elem_M(r[i],i_c,j_c),x);
			  }
			}
		      }
		    }, __FILE__, __LINE__);
}
