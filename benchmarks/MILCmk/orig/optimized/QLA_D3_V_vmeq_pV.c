/**************** QLA_D3_V_vmeq_pV.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_d3.h>
#include <math.h>

#include "tbb/parallel_for.h"

void QLA_D3_V_vmeq_pV ( QLA_D3_ColorVector * r, QLA_D3_ColorVector * *a, int n)
{
  //static tbb::affinity_partitioner ap;
  tbb::parallel_for(tbb::blocked_range<int>(0, n),
		    [=](tbb::blocked_range<int> br)
		    {for( int i=br.begin(); i!=br.end(); ++i ) {
			for(int i_c=0; i_c<3; i_c++) {
			  QLA_c_meq_c(QLA_D3_elem_V(r[i],i_c),QLA_D3_elem_V(*a[i],i_c));
			}
		      }
		    }/*,ap*/);
}
