#ifndef _QLA_COMPLEX_H
#define _QLA_COMPLEX_H

//#include <complex.h>
//#include <tgmath.h>

#if 1
typedef float _Complex QLA_F_Complex _ALIGN(8);
typedef double _Complex QLA_D_Complex _ALIGN(16);
typedef long double _Complex QLA_Q_Complex _ALIGNED;
#else
typedef union {
  QLA_F_Real r,i;
  float _Complex c;
} QLA_F_Complex;

typedef union {
  QLA_D_Real r,i;
  double _Complex c;
} QLA_D_Complex;

typedef union {
  QLA_Q_Real r,i;
  long double _Complex c;
} QLA_Q_Complex;
#endif

#define QLA_F_c_eq_c99(x,y) x = y
#define QLA_D_c_eq_c99(x,y) x = y
#define QLA_F_c99_eq_c(x,y) x = y
#define QLA_D_c99_eq_c(x,y) x = y

#if 0
#define QLA_real(a) ((a).r)
#define QLA_imag(a) ((a).i)
#define QLA_cmplx(a) ((a).c)
#endif
#if 0
#define QLA_real(a) (a)
#define QLA_imag(a) (a)
#endif

#ifdef HAVE_440D
#define QLA_tcmplx(a) ((QLA_D_Complex)QLA_cmplx(a))
#define QLA_treal(a) ((QLA_D_Real)(a))
#else
#define QLA_tcmplx(a) QLA_cmplx(a)
#define QLA_treal(a) (a)
#endif


#define QLA_cmplx(a) (a)

//#define QLA_I I
//#define QLA_I ((_Imaginary double)(1.0))
//#define QLA_I ((_Complex double){{0.0,1.0}})
#define QLA_timesI(a) (QLA_I*QLA_cmplx(a))
//#define QLA_timesI(a) (__cmplx(-QLA_imag(a),QLA_real(a)))


/* the following line is used by the test suite */
/* BEGIN_MACROS */

/* Accessors for real and imaginary parts */

#if defined(__xlC__)
# define QLA_real(a) (__creal(a))
# define QLA_imag(a) (__cimag(a))
# define QLA_conj(a) (__cmplx(QLA_real(a),-QLA_imag(a)))
# define QLA_I (__cmplx(0.0,1.0))
#elif defined(__GNUC__)
# define QLA_real(a) (__real__(a))
# define QLA_imag(a) (__imag__(a))
# define QLA_conj(a) (~QLA_cmplx(a))
# define QLA_I (1.0i)
#else
# define QLA_real(a) creal(a)
# define QLA_imag(a) cimag(a)
# define QLA_conj(a) conj(QLA_cmplx(a))
# define QLA_I ((_Imaginary double)(1.0))
#endif


/* Precision conversion */

#ifdef HAVE_440D
#ifdef HAVE_XLC
//#define QLA_DF_c(a)  __lfps((float *)&(a))
#define QLA_DF_c(a)  ((QLA_D_Complex)(a))
//#define QLA_DF_c_eq_c(c,a)  (c) = __lfps((float *)&(a))
#define QLA_DF_c_eq_c(c,a)  (c) = ((QLA_D_Complex)(a))
//#define QLA_FD_c_eq_c(c,a)  __stfps((float *)&(c),a)
#define QLA_FD_c_eq_c(c,a)  __stfps((float *)&(c),__fprsp(a))
#endif
#endif
#ifndef QLA_DF_c_eq_c
#define QLA_DF_c(a)  ((QLA_D_Complex)(a))
#define QLA_DF_c_eq_c(c,a)  (c) = ((QLA_D_Complex)(a))
#define QLA_FD_c_eq_c(c,a)  (c) = ((QLA_F_Complex)(a))
#endif

#define QLA_DF_r(a)  ((QLA_D_Real)(a))
#define QLA_FD_r(a)  ((QLA_F_Real)(a))
#define QLA_DQ_r(a)  ((QLA_D_Real)(a))
#define QLA_QD_r(a)  ((QLA_Q_Real)(a))
#define QLA_FD_c(a)  ((QLA_F_Complex)(a))
#define QLA_DQ_c(a)  ((QLA_D_Complex)(a))
#define QLA_QD_c(a)  ((QLA_Q_Complex)(a))

#define QLA_FD_c_eq_r(c,a) (c) = (a)

#define QLA_FD_c_eqm_c(c,a) QLA_FD_c_eq_c(c,-(a))
#define QLA_FD_c_peq_c(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)+(a))
#define QLA_FD_c_meq_c(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)-(a))

#define QLA_FD_c_eq_ca(c,a) QLA_FD_c_eq_c(c,QLA_conj(a))
#define QLA_FD_c_eqm_ca(c,a) QLA_FD_c_eq_c(c,-QLA_conj(a))
#define QLA_FD_c_peq_ca(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)+QLA_conj(a))
#define QLA_FD_c_meq_ca(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)-QLA_conj(a))

#define QLA_FD_c_eq_ic(c,a) QLA_FD_c_eq_c(c,QLA_timesI(a))
#define QLA_FD_c_eqm_ic(c,a) QLA_FD_c_eq_c(c,-QLA_timesI(a))
#define QLA_FD_c_peq_ic(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)+QLA_timesI(a))
#define QLA_FD_c_meq_ic(c,a) QLA_FD_c_eq_c(c,QLA_DF_c(c)-QLA_timesI(a))

#define QLA_DF_c_peq_c(c,a) QLA_c_peq_c(c,QLA_DF_c(a))

#define QLA_QD_c_eq_r QLA_c_eq_r

#define QLA_QD_c_eq_c QLA_c_eq_c
#define QLA_QD_c_eqm_c QLA_c_eqm_c
#define QLA_QD_c_peq_c QLA_c_peq_c
#define QLA_QD_c_meq_c QLA_c_meq_c

#define QLA_DQ_c_eq_c QLA_c_eq_c
#define QLA_DQ_c_eqm_c QLA_c_eqm_c
#define QLA_DQ_c_peq_c QLA_c_peq_c
#define QLA_DQ_c_meq_c QLA_c_meq_c


/* Macros for complex arithmetic */

#define QLA_norm2_c(a) (QLA_real(a)*QLA_real(a) + QLA_imag(a)*QLA_imag(a))
#define QLA_norm_c(a)  sqrt(QLA_norm2_c(a))
#define QLA_arg_c(a)   atan2((double)QLA_imag(a), (double)QLA_real(a))


/* Unary operations */

#define QLA_r_eq_Re_c(c,a)  c  =  QLA_real(a);
#define QLA_r_eqm_Re_c(c,a) c  = -QLA_real(a);
#define QLA_r_peq_Re_c(c,a) c +=  QLA_real(a);
#define QLA_r_meq_Re_c(c,a) c -=  QLA_real(a);

#define QLA_r_eq_Im_c(c,a)  c  =  QLA_imag(a);
#define QLA_r_eqm_Im_c(c,a) c  = -QLA_imag(a);
#define QLA_r_peq_Im_c(c,a) c +=  QLA_imag(a);
#define QLA_r_meq_Im_c(c,a) c -=  QLA_imag(a);

#define QLA_c_eq_r(c,a)  QLA_cmplx(c)  =  (a)
#define QLA_c_eqm_r(c,a) QLA_cmplx(c)  = -(a)
#define QLA_c_peq_r(c,a) QLA_cmplx(c) +=  (a)
#define QLA_c_meq_r(c,a) QLA_cmplx(c) -=  (a)

#define QLA_c_eq_c(c,a)  QLA_cmplx(c) =                 QLA_tcmplx(a)
#define QLA_c_eqm_c(c,a) QLA_cmplx(c) =               - QLA_tcmplx(a)
#define QLA_c_peq_c(c,a) QLA_cmplx(c) = QLA_tcmplx(c) + QLA_tcmplx(a)
#define QLA_c_meq_c(c,a) QLA_cmplx(c) = QLA_tcmplx(c) - QLA_tcmplx(a)

#define QLA_c_eq_ca(c,a)  QLA_cmplx(c) =                 QLA_conj(QLA_tcmplx(a))
#define QLA_c_eqm_ca(c,a) QLA_cmplx(c) =               - QLA_conj(QLA_tcmplx(a))
#define QLA_c_peq_ca(c,a) QLA_cmplx(c) = QLA_tcmplx(c) + QLA_conj(QLA_tcmplx(a))
#define QLA_c_meq_ca(c,a) QLA_cmplx(c) = QLA_tcmplx(c) - QLA_conj(QLA_tcmplx(a))

#define QLA_c_eq_ic(c,a)  QLA_cmplx(c) =                 QLA_I*QLA_tcmplx(a)
#define QLA_c_eqm_ic(c,a) QLA_cmplx(c) =               - QLA_I*QLA_tcmplx(a)
#define QLA_c_peq_ic(c,a) QLA_cmplx(c) = QLA_tcmplx(c) + QLA_I*QLA_tcmplx(a)
#define QLA_c_meq_ic(c,a) QLA_cmplx(c) = QLA_tcmplx(c) - QLA_I*QLA_tcmplx(a)


/* Binary operations */

#define QLA_c_eq_r_plus_ir(c,a,b)  QLA_cmplx(c)  =   (a) + QLA_I*(b)
#define QLA_c_eqm_r_plus_ir(c,a,b) QLA_cmplx(c)  = -((a) + QLA_I*(b))
#define QLA_c_peq_r_plus_ir(c,a,b) QLA_cmplx(c) +=   (a) + QLA_I*(b)
#define QLA_c_meq_r_plus_ir(c,a,b) QLA_cmplx(c) -=   (a) + QLA_I*(b)

#define QLA_c_eq_c_plus_c(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) + QLA_tcmplx(b)
#define QLA_c_eqm_c_plus_c(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) + QLA_tcmplx(b))
#define QLA_c_peq_c_plus_c(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) + QLA_tcmplx(b)
#define QLA_c_meq_c_plus_c(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) + QLA_tcmplx(b)

#define QLA_c_eq_c_minus_c(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) - QLA_tcmplx(b)
#define QLA_c_eqm_c_minus_c(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) - QLA_tcmplx(b))
#define QLA_c_peq_c_minus_c(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) - QLA_tcmplx(b)
#define QLA_c_meq_c_minus_c(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) - QLA_tcmplx(b)

#define QLA_c_eq_c_plus_ca(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) + QLA_conj(QLA_tcmplx(b))
#define QLA_c_eqm_c_plus_ca(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) + QLA_conj(QLA_tcmplx(b)))
#define QLA_c_peq_c_plus_ca(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) + QLA_conj(QLA_tcmplx(b))
#define QLA_c_meq_c_plus_ca(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) + QLA_conj(QLA_tcmplx(b))

#define QLA_c_eq_c_minus_ca(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) - QLA_conj(QLA_tcmplx(b))
#define QLA_c_eqm_c_minus_ca(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) - QLA_conj(QLA_tcmplx(b)))
#define QLA_c_peq_c_minus_ca(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) - QLA_conj(QLA_tcmplx(b))
#define QLA_c_meq_c_minus_ca(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) - QLA_conj(QLA_tcmplx(b))

#define QLA_c_eq_c_plus_ic(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) + QLA_I*QLA_tcmplx(b)
#define QLA_c_eqm_c_plus_ic(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) + QLA_I*QLA_tcmplx(b))
#define QLA_c_peq_c_plus_ic(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) + QLA_I*QLA_tcmplx(b)
#define QLA_c_meq_c_plus_ic(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) + QLA_I*QLA_tcmplx(b)

#define QLA_c_eq_c_minus_ic(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) - QLA_I*QLA_tcmplx(b)
#define QLA_c_eqm_c_minus_ic(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) - QLA_I*QLA_tcmplx(b))
#define QLA_c_peq_c_minus_ic(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) - QLA_I*QLA_tcmplx(b)
#define QLA_c_meq_c_minus_ic(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) - QLA_I*QLA_tcmplx(b)

#define QLA_c_eq_r_times_c(c,a,b)  QLA_cmplx(c)  =  QLA_treal(a) * QLA_cmplx(b)
#define QLA_c_eqm_r_times_c(c,a,b) QLA_cmplx(c)  = -QLA_treal(a) * QLA_cmplx(b)
#define QLA_c_peq_r_times_c(c,a,b) QLA_cmplx(c) +=  QLA_treal(a) * QLA_cmplx(b)
#define QLA_c_meq_r_times_c(c,a,b) QLA_cmplx(c) -=  QLA_treal(a) * QLA_cmplx(b)

#define QLA_c_eq_c_times_r(c,a,b)  QLA_c_eq_r_times_c(c,b,a)
#define QLA_c_eqm_c_times_r(c,a,b) QLA_c_eqm_r_times_c(c,b,a)
#define QLA_c_peq_c_times_r(c,a,b) QLA_c_peq_r_times_c(c,b,a)
#define QLA_c_meq_c_times_r(c,a,b) QLA_c_meq_r_times_c(c,b,a)

#define QLA_c_eq_r_times_ca(c,a,b)  QLA_cmplx(c)  =  QLA_treal(a) * QLA_conj(QLA_cmplx(b))
#define QLA_c_eqm_r_times_ca(c,a,b) QLA_cmplx(c)  = -QLA_treal(a) * QLA_conj(QLA_cmplx(b))
#define QLA_c_peq_r_times_ca(c,a,b) QLA_cmplx(c) +=  QLA_treal(a) * QLA_conj(QLA_cmplx(b))
#define QLA_c_meq_r_times_ca(c,a,b) QLA_cmplx(c) -=  QLA_treal(a) * QLA_conj(QLA_cmplx(b))

#define QLA_c_eq_ca_times_r(c,a,b)  QLA_c_eq_r_times_ca(c,b,a)
#define QLA_c_eqm_ca_times_r(c,a,b) QLA_c_eqm_r_times_ca(c,b,a)
#define QLA_c_peq_ca_times_r(c,a,b) QLA_c_peq_r_times_ca(c,b,a)
#define QLA_c_meq_ca_times_r(c,a,b) QLA_c_meq_r_times_ca(c,b,a)

#define QLA_c_eq_c_times_c(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) * QLA_tcmplx(b)
#define QLA_c_eqm_c_times_c(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) * QLA_tcmplx(b))
#define QLA_c_peq_c_times_c(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) * QLA_tcmplx(b)
#define QLA_c_meq_c_times_c(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) * QLA_tcmplx(b)

#define QLA_c_eq_c_times_ca(c,a,b)  QLA_cmplx(c)  =   QLA_tcmplx(a) * QLA_conj(QLA_tcmplx(b))
#define QLA_c_eqm_c_times_ca(c,a,b) QLA_cmplx(c)  = -(QLA_tcmplx(a) * QLA_conj(QLA_tcmplx(b)))
#define QLA_c_peq_c_times_ca(c,a,b) QLA_cmplx(c) +=   QLA_tcmplx(a) * QLA_conj(QLA_tcmplx(b))
#define QLA_c_meq_c_times_ca(c,a,b) QLA_cmplx(c) -=   QLA_tcmplx(a) * QLA_conj(QLA_tcmplx(b))

#if 0

#define QLA_c_eq_c_times_ca(c,a,b) { \
QLA_cmplx(c) = __fxpmul(QLA_tcmplx(a),QLA_real(QLA_tcmplx(b))); \
QLA_cmplx(c) = __fxcxnsma(QLA_cmplx(c),QLA_tcmplx(a),QLA_imag(QLA_tcmplx(b))); \
}

#define QLA_c_peq_c_times_ca(c,a,b) { \
QLA_cmplx(c) = __fxcpmadd(QLA_cmplx(c),QLA_tcmplx(a),QLA_real(QLA_tcmplx(b))); \
QLA_cmplx(c) = __fxcxnsma(QLA_cmplx(c),QLA_tcmplx(a),QLA_imag(QLA_tcmplx(b))); \
}

#endif

#define QLA_c_eq_ca_times_c(c,a,b)  QLA_c_eq_c_times_ca(c,b,a)
#define QLA_c_eqm_ca_times_c(c,a,b) QLA_c_eqm_c_times_ca(c,b,a)
#define QLA_c_peq_ca_times_c(c,a,b) QLA_c_peq_c_times_ca(c,b,a)
#define QLA_c_meq_ca_times_c(c,a,b) QLA_c_meq_c_times_ca(c,b,a)

#define QLA_c_eq_ca_times_ca(c,a,b)  QLA_cmplx(c)  =   QLA_conj(QLA_tcmplx(a)) * QLA_conj(QLA_tcmplx(b))
#define QLA_c_eqm_ca_times_ca(c,a,b) QLA_cmplx(c)  = -(QLA_conj(QLA_tcmplx(a)) * QLA_conj(QLA_tcmplx(b)))
#define QLA_c_peq_ca_times_ca(c,a,b) QLA_cmplx(c) +=   QLA_conj(QLA_tcmplx(a)) * QLA_conj(QLA_tcmplx(b))
#define QLA_c_meq_ca_times_ca(c,a,b) QLA_cmplx(c) -=   QLA_conj(QLA_tcmplx(a)) * QLA_conj(QLA_tcmplx(b))

#define QLA_r_eq_Re_c_times_c(c,a,b)  (c) =  QLA_real(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_eqm_Re_c_times_c(c,a,b) (c) = -QLA_real(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_peq_Re_c_times_c(c,a,b) (c) += QLA_real(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_meq_Re_c_times_c(c,a,b) (c) -= QLA_real(QLA_tcmplx(a)*QLA_tcmplx(b))

#define QLA_r_eq_Re_c_times_ca(c,a,b)  (c) =  QLA_real(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_eqm_Re_c_times_ca(c,a,b) (c) = -QLA_real(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_peq_Re_c_times_ca(c,a,b) (c) += QLA_real(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_meq_Re_c_times_ca(c,a,b) (c) -= QLA_real(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))

#define QLA_r_eq_Re_ca_times_c(c,a,b)  (c) =  QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_eqm_Re_ca_times_c(c,a,b) (c) = -QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_peq_Re_ca_times_c(c,a,b) (c) += QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_meq_Re_ca_times_c(c,a,b) (c) -= QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))

#define QLA_r_eq_Re_ca_times_ca(c,a,b)  (c) =  QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_eqm_Re_ca_times_ca(c,a,b) (c) = -QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_peq_Re_ca_times_ca(c,a,b) (c) += QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_meq_Re_ca_times_ca(c,a,b) (c) -= QLA_real(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))

#define QLA_r_eq_Im_c_times_c(c,a,b)  (c) =  QLA_imag(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_eqm_Im_c_times_c(c,a,b) (c) = -QLA_imag(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_peq_Im_c_times_c(c,a,b) (c) += QLA_imag(QLA_tcmplx(a)*QLA_tcmplx(b))
#define QLA_r_meq_Im_c_times_c(c,a,b) (c) -= QLA_imag(QLA_tcmplx(a)*QLA_tcmplx(b))

#define QLA_r_eq_Im_c_times_ca(c,a,b)  (c) =  QLA_imag(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_eqm_Im_c_times_ca(c,a,b) (c) = -QLA_imag(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_peq_Im_c_times_ca(c,a,b) (c) += QLA_imag(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_meq_Im_c_times_ca(c,a,b) (c) -= QLA_imag(QLA_tcmplx(a)*QLA_conj(QLA_tcmplx(b)))

#define QLA_r_eq_Im_ca_times_c(c,a,b)  (c) =  QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_eqm_Im_ca_times_c(c,a,b) (c) = -QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_peq_Im_ca_times_c(c,a,b) (c) += QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))
#define QLA_r_meq_Im_ca_times_c(c,a,b) (c) -= QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_tcmplx(b))

#define QLA_r_eq_Im_ca_times_ca(c,a,b)  (c) =  QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_eqm_Im_ca_times_ca(c,a,b) (c) = -QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_peq_Im_ca_times_ca(c,a,b) (c) += QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))
#define QLA_r_meq_Im_ca_times_ca(c,a,b) (c) -= QLA_imag(QLA_conj(QLA_tcmplx(a))*QLA_conj(QLA_tcmplx(b)))

#define QLA_c_eq_c_div_r(c,a,b) QLA_cmplx(c) = QLA_tcmplx(a)/QLA_treal(b)
#define QLA_c_eq_r_div_c(c,a,b) QLA_cmplx(c) = QLA_treal(a)/QLA_tcmplx(b)
#define QLA_c_eq_c_div_c(c,a,b) QLA_cmplx(c) = QLA_tcmplx(a)/QLA_tcmplx(b)


/* Ternary operations */

#define QLA_c_eq_c_times_r_plus_r(c,a,x,b)  QLA_cmplx(c) = QLA_cmplx(a) * (x) + (b)
#define QLA_c_eq_c_times_r_minus_r(c,a,x,b) QLA_cmplx(c) = QLA_cmplx(a) * (x) - (b)

#define QLA_c_eq_r_times_c_plus_c(c,a,x,b)  QLA_cmplx(c) = (a) * QLA_cmplx(x) + QLA_cmplx(b)
#define QLA_c_eq_r_times_c_minus_c(c,a,x,b) QLA_cmplx(c) = (a) * QLA_cmplx(x) - QLA_cmplx(b)

#define QLA_c_eq_c_times_c_plus_c(c,a,x,b)  QLA_cmplx(c) = QLA_cmplx(a) * QLA_cmplx(x) + QLA_cmplx(b)
#define QLA_c_eq_c_times_c_minus_c(c,a,x,b) QLA_cmplx(c) = QLA_cmplx(a) * QLA_cmplx(x) - QLA_cmplx(b)


#endif	/* _QLA_COMPLEX_H */
