/**************** QLA_F3_D_vpeq_spproj_M_times_pD.c ********************/

#include <stdio.h>
#include <qla_config.h>
#include <qla_types.h>
#include <qla_random.h>
#include <qla_cmath.h>
#include <qla_f3.h>
#include <math.h>

#include "tbb/parallel_for.h"

void QLA_F3_D_vpeq_spproj_M_times_pD ( QLA_F3_DiracFermion * r, QLA_F3_ColorMatrix * a, QLA_F3_DiracFermion * *b, int mu, int sign , int n)
{
  if(sign==1) {
    switch(mu) {
    case 0: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_plus_ic(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,3));
				QLA_c_eq_c_plus_ic(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,2));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_ic(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_ic(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,0));
			      }
			    }
			  }
			});
    } break;
    case 1: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_minus_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,3));
				QLA_c_eq_c_plus_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,2));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_c(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,0));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 2: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_plus_ic(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,2));
				QLA_c_eq_c_minus_ic(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,3));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_ic(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_ic(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 3: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_plus_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,2));
				QLA_c_eq_c_plus_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,3));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 4: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0));
				QLA_c_eq_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    }
  }
  else {
    switch(mu) {
    case 0: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_minus_ic(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,3));
				QLA_c_eq_c_minus_ic(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,2));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_ic(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_ic(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,0));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 1: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_plus_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,3));
				QLA_c_eq_c_minus_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,2));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_c(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,0));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 2: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_minus_ic(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,2));
				QLA_c_eq_c_plus_ic(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,3));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_peq_ic(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_meq_ic(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 3: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c_minus_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,0), QLA_F3_elem_D(*b[i],i_c,2));
				QLA_c_eq_c_minus_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,1), QLA_F3_elem_D(*b[i],i_c,3));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,0), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,1), QLA_F3_elem_H(t2,i_c,1));
				QLA_c_meq_c(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_meq_c(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    case 4: {
      tbb::parallel_for(tbb::blocked_range<int>(0, n),
			[=](tbb::blocked_range<int> br)
			{for( int i=br.begin(); i!=br.end(); ++i ) {
			    QLA_F3_HalfFermion t1;
			    QLA_F3_HalfFermion t2;
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_eq_c(QLA_F3_elem_H(t1,i_c,0), QLA_F3_elem_D(*b[i],i_c,2));
				QLA_c_eq_c(QLA_F3_elem_H(t1,i_c,1), QLA_F3_elem_D(*b[i],i_c,3));
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				for(int i_s=0; i_s<2; i_s++) {
				  QLA_F_Complex x;
				  QLA_c_eq_r(x,0.);
				  for(int k_c=0; k_c<3; k_c++) {
				    QLA_c_peq_c_times_c(x, QLA_F3_elem_M(a[i],i_c,k_c), QLA_F3_elem_H(t1,k_c,i_s));
				  }
				  QLA_c_eq_c(QLA_F3_elem_H(t2,i_c,i_s),x);
				}
			      }
			    }
			    {
			      for(int i_c=0; i_c<3; i_c++) {
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,2), QLA_F3_elem_H(t2,i_c,0));
				QLA_c_peq_c(QLA_F3_elem_D(r[i],i_c,3), QLA_F3_elem_H(t2,i_c,1));
			      }
			    }
			  }
			}/*,ap*/);
    } break;
    }
  }
}
