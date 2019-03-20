/**************** QLA_F3_M_veq_M_times_pM.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_f3.h>
#include <math.h>

#include "grainsize.h"
#include "tbb/parallel_for.h"

void QLA_F3_M_veq_M_times_pM ( QLA_F3_ColorMatrix * r, QLA_F3_ColorMatrix * a, QLA_F3_ColorMatrix * *b, int n)
{
  static tbb::affinity_partitioner ap;
  tbb::parallel_for(tbb::blocked_range<int>(0, n,GRAINSIZE),
		    [=](tbb::blocked_range<int> br,size_t thdId)
		    {for( int i=br.begin(); i!=br.end(); ++i ) {
			for(int i_c=0; i_c<3; i_c++) {
			  for(int j_c=0; j_c<3; j_c++) {
			    QLA_F_Complex x;
			    QLA_c_eq_r(x,0.);
			    for(int k_c=0; k_c<3; k_c++) {
			      QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_M(*b[i],k_c,j_c));
			    }
			    QLA_c_eq_c(QLA_F3_elem_M(r[i],i_c,j_c),x);
			  }
			}
		      }
		    },ap, __FILE__, __LINE__);
}
