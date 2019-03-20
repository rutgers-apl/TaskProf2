#ifndef _QLA_COMPLEX_H
#define _QLA_COMPLEX_H

#include <float.h>

typedef int QLA_Int;
#define QLA_INT_MAX INT_MAX
#define QLA_INT_MIN INT_MIN

typedef float QLA_F_Real;
#define QLA_F_REAL_MAX FLT_MAX
#define QLA_F_REAL_MIN FLT_MIN

typedef double QLA_D_Real;
#define QLA_D_REAL_MAX DBL_MAX
#define QLA_D_REAL_MIN DBL_MIN

typedef long double QLA_Q_Real;
#define QLA_Q_REAL_MAX LDBL_MAX
#define QLA_Q_REAL_MIN LDBL_MIN

#ifdef USE_C99_COMPLEX
#undef _QLA_COMPLEX_H
#include <qla_complex_c99.h>
#else

typedef struct {
   QLA_F_Real real;	
   QLA_F_Real imag;
} QLA_F_Complex _ALIGN(8);

typedef struct {
   QLA_D_Real real;	
   QLA_D_Real imag;
} QLA_D_Complex _ALIGN(16);

typedef struct {
   QLA_Q_Real real;	
   QLA_Q_Real imag;
} QLA_Q_Complex _ALIGNED;

#if (__STDC_VERSION__ >= 199901L) && !defined(__STDC_NO_COMPLEX__)
# define QLA_F_c99_eq_c(x,y) do { QLA_F_Complex _t=(y); (x)=(union{float f[2]; float _Complex z;}){.f={QLA_real(_t),QLA_imag(_t)}}.z; } while(0)
# define QLA_D_c99_eq_c(x,y) do { QLA_D_Complex _t=(y); (x)=(union{double f[2]; double _Complex z;}){.f={QLA_real(_t),QLA_imag(_t)}}.z; } while(0)
# if defined(__xlC__)
#  define QLA_F_c_eq_c99(x,y) do { float _Complex _t=(y); QLA_c_eq_r_plus_ir(x, __crealf(_t), __cimagf(_t)); } while(0)
#  define QLA_D_c_eq_c99(x,y) do { double _Complex _t=(y); QLA_c_eq_r_plus_ir(x, __creal(_t), __cimag(_t)); } while(0)
# else
#  define QLA_F_c_eq_c99(x,y) do { float _Complex _t=(y); QLA_c_eq_r_plus_ir(x, crealf(_t), cimagf(_t)); } while(0)
#  define QLA_D_c_eq_c99(x,y) do { double _Complex _t=(y); QLA_c_eq_r_plus_ir(x, creal(_t), cimag(_t)); } while(0)
# endif
#endif

/* the following line is used by the test suite */
/* BEGIN_MACROS */

/* Accessors for real and imaginary parts */

#define QLA_real(a) (a).real
#define QLA_imag(a) (a).imag


/* Precision conversion */

#define QLA_FD_r(r) ((QLA_F_Real)(r))
#define QLA_DF_r(r) ((QLA_D_Real)(r))
#define QLA_DQ_r(r) ((QLA_D_Real)(r))
#define QLA_QD_r(r) ((QLA_Q_Real)(r))

#define QLA_FD_c(c) ((QLA_F_Complex){QLA_FD_r(QLA_real(c)),QLA_FD_r(QLA_imag(c))})
#define QLA_DF_c(c) ((QLA_D_Complex){QLA_DF_r(QLA_real(c)),QLA_DF_r(QLA_imag(c))})
#define QLA_DQ_c(c) ((QLA_D_Complex){QLA_DQ_r(QLA_real(c)),QLA_DQ_r(QLA_imag(c))})
#define QLA_QD_c(c) ((QLA_Q_Complex){QLA_QD_r(QLA_real(c)),QLA_QD_r(QLA_imag(c))})

#define QLA_FD_c_eq_c(c,a) { QLA_real(c) = QLA_FD_r(QLA_real(a)); \
                             QLA_imag(c) = QLA_FD_r(QLA_imag(a)); }
#define QLA_DF_c_eq_c(c,a) { QLA_real(c) = QLA_DF_r(QLA_real(a)); \
                             QLA_imag(c) = QLA_DF_r(QLA_imag(a)); }
#define QLA_DQ_c_eq_c(c,a) { QLA_real(c) = QLA_DQ_r(QLA_real(a)); \
                             QLA_imag(c) = QLA_DQ_r(QLA_imag(a)); }
#define QLA_QD_c_eq_c(c,a) { QLA_real(c) = QLA_QD_r(QLA_real(a)); \
                             QLA_imag(c) = QLA_QD_r(QLA_imag(a)); }


//#define QLA_FD_c_eq_c(c,a)   QLA_c_eq_c(c,a)
//#define QLA_FD_c_eqm_c(c,a)  QLA_c_eqm_c(c,a)
//#define QLA_FD_c_peq_c(c,a)  QLA_c_peq_c(c,a)
//#define QLA_FD_c_meq_c(c,a)  QLA_c_meq_c(c,a)

//#define QLA_DF_c_eq_c(c,a)   QLA_c_eq_c(c,a)
//#define QLA_DF_c_eqm_c(c,a)  QLA_c_eqm_c(c,a)
//#define QLA_DF_c_peq_c(c,a)  QLA_c_peq_c(c,a)
//#define QLA_DF_c_meq_c(c,a)  QLA_c_meq_c(c,a)

//#define QLA_DQ_c_eq_c(c,a)   QLA_c_eq_c(c,a)
//#define QLA_DQ_c_eqm_c(c,a)  QLA_c_eqm_c(c,a)
//#define QLA_DQ_c_peq_c(c,a)  QLA_c_peq_c(c,a)
//#define QLA_DQ_c_meq_c(c,a)  QLA_c_meq_c(c,a)

//#define QLA_QD_c_eq_c(c,a)   QLA_c_eq_c(c,a)
//#define QLA_QD_c_eqm_c(c,a)  QLA_c_eqm_c(c,a)
//#define QLA_QD_c_peq_c(c,a)  QLA_c_peq_c(c,a)
//#define QLA_QD_c_meq_c(c,a)  QLA_c_meq_c(c,a)


/* Macros for complex arithmetic */

#define QLA_norm2_c(a) (QLA_real(a)*QLA_real(a) + QLA_imag(a)*QLA_imag(a))
#define QLA_norm_c(a)  sqrt(QLA_norm2_c(a))
#define QLA_arg_c(a)   atan2((double)QLA_imag(a), (double)QLA_real(a))


/* Unary operations */

/******* redefine Re->re, Im->im *****************************/

#define QLA_r_eq_Re_c(c,a)  c =  QLA_real(a);
#define QLA_r_eqm_Re_c(c,a) c = -QLA_real(a);
#define QLA_r_peq_Re_c(c,a) c += QLA_real(a);
#define QLA_r_meq_Re_c(c,a) c -= QLA_real(a);

#define QLA_r_eq_Im_c(c,a)  c =  QLA_imag(a);
#define QLA_r_eqm_Im_c(c,a) c = -QLA_imag(a);
#define QLA_r_peq_Im_c(c,a) c += QLA_imag(a);
#define QLA_r_meq_Im_c(c,a) c -= QLA_imag(a);

#define QLA_c_eq_r(c,a)    {QLA_real(c) = a;\
                            QLA_imag(c) = 0.;}
#define QLA_c_eqm_r(c,a)   {QLA_real(c) = -(a);\
                            QLA_imag(c) = 0.;}
#define QLA_c_peq_r(c,a)    QLA_real(c) += (a);
#define QLA_c_meq_r(c,a)    QLA_real(c) -= (a);

#define QLA_c_eq_c(c,a)    {QLA_real(c) =  QLA_real(a);\
                            QLA_imag(c) =  QLA_imag(a);}
#define QLA_c_eqm_c(c,a)   {QLA_real(c) = -QLA_real(a);\
                            QLA_imag(c) = -QLA_imag(a);}
#define QLA_c_peq_c(c,a)   {QLA_real(c) += QLA_real(a);\
                            QLA_imag(c) += QLA_imag(a);}
#define QLA_c_meq_c(c,a)   {QLA_real(c) -= QLA_real(a);\
                            QLA_imag(c) -= QLA_imag(a);}

#define QLA_c_eq_ca(c,a)   {QLA_real(c) =  QLA_real(a);\
                            QLA_imag(c) = -QLA_imag(a);}
#define QLA_c_eqm_ca(c,a)  {QLA_real(c) = -QLA_real(a);\
                            QLA_imag(c) =  QLA_imag(a);}
#define QLA_c_peq_ca(c,a)  {QLA_real(c) += QLA_real(a);\
                            QLA_imag(c) -= QLA_imag(a);}
#define QLA_c_meq_ca(c,a)  {QLA_real(c) -= QLA_real(a);\
                            QLA_imag(c) += QLA_imag(a);}

#define QLA_c_eq_ic(c,a)   {QLA_real(c) = -QLA_imag(a);\
                            QLA_imag(c) =  QLA_real(a);}
#define QLA_c_eqm_ic(c,a)  {QLA_real(c) =  QLA_imag(a);\
                            QLA_imag(c) = -QLA_real(a);}
#define QLA_c_peq_ic(c,a)  {QLA_real(c) -= QLA_imag(a);\
                            QLA_imag(c) += QLA_real(a);}
#define QLA_c_meq_ic(c,a)  {QLA_real(c) += QLA_imag(a);\
                            QLA_imag(c) -= QLA_real(a);}
/**************************** add ica ******************************/

/* Binary operations */

#define QLA_Re_c_times_c(a,b) (QLA_real(a)*QLA_real(b)-QLA_imag(a)*QLA_imag(b))

#define QLA_r_eq_Re_c_times_c(c,a,b)  { c = QLA_real(a)*QLA_real(b)\
                                          - QLA_imag(a)*QLA_imag(b);}
#define QLA_r_eqm_Re_c_times_c(c,a,b) { c = -QLA_real(a)*QLA_real(b)\
                                          + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_peq_Re_c_times_c(c,a,b) { c += (QLA_real(a)*QLA_real(b)\
                                          - QLA_imag(a)*QLA_imag(b));}
#define QLA_r_meq_Re_c_times_c(c,a,b) { c -= (QLA_real(a)*QLA_real(b)\
                                          - QLA_imag(a)*QLA_imag(b));}

#define QLA_r_eq_Im_c_times_c(c,a,b)  { c = QLA_real(a)*QLA_imag(b)\
                                          + QLA_imag(a)*QLA_real(b);}
#define QLA_r_eqm_Im_c_times_c(c,a,b) { c = -QLA_real(a)*QLA_imag(b)\
                                          - QLA_imag(a)*QLA_real(b);}
#define QLA_r_peq_Im_c_times_c(c,a,b) { c += (QLA_real(a)*QLA_imag(b)\
                                          + QLA_imag(a)*QLA_real(b));}
#define QLA_r_meq_Im_c_times_c(c,a,b) { c -= (QLA_real(a)*QLA_imag(b)\
                                          + QLA_imag(a)*QLA_real(b));}

#define QLA_r_eq_Re_c_times_ca(c,a,b) {c = QLA_real(a)*QLA_real(b)\
                                         + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_eqm_Re_c_times_ca(c,a,b) {c = -QLA_real(a)*QLA_real(b)\
                                          - QLA_imag(a)*QLA_imag(b);}
#define QLA_r_peq_Re_c_times_ca(c,a,b) {c += QLA_real(a)*QLA_real(b)\
                                           + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_meq_Re_c_times_ca(c,a,b) {c -= QLA_real(a)*QLA_real(b)\
                                           + QLA_imag(a)*QLA_imag(b);}

#define QLA_r_eq_Im_c_times_ca(c,a,b) {c = QLA_imag(a)*QLA_real(b)\
                                         - QLA_real(a)*QLA_imag(b);}
#define QLA_r_eqm_Im_c_times_ca(c,a,b) {c = -QLA_imag(a)*QLA_real(b)\
                                          + QLA_real(a)*QLA_imag(b);}
#define QLA_r_peq_Im_c_times_ca(c,a,b) {c += QLA_imag(a)*QLA_real(b)\
                                           - QLA_real(a)*QLA_imag(b);}
#define QLA_r_meq_Im_c_times_ca(c,a,b) {c -= QLA_imag(a)*QLA_real(b)\
                                           - QLA_real(a)*QLA_imag(b);}

#define QLA_r_eq_Re_ca_times_c(c,a,b) { c = QLA_real(a)*QLA_real(b)\
                                          + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_eqm_Re_ca_times_c(c,a,b) {c = -QLA_real(a)*QLA_real(b)\
                                           - QLA_imag(a)*QLA_imag(b);}
#define QLA_r_peq_Re_ca_times_c(c,a,b) { c += QLA_real(a)*QLA_real(b)\
                                            + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_meq_Re_ca_times_c(c,a,b) {c -= QLA_real(a)*QLA_real(b)\
                                           + QLA_imag(a)*QLA_imag(b);}

#define QLA_r_eq_Im_ca_times_c(c,a,b) {c = QLA_real(a)*QLA_imag(b)\
                                         - QLA_imag(a)*QLA_real(b);}
#define QLA_r_eqm_Im_ca_times_c(c,a,b) {c = -QLA_real(a)*QLA_imag(b)\
                                          + QLA_imag(a)*QLA_real(b);}
#define QLA_r_peq_Im_ca_times_c(c,a,b) {c += QLA_real(a)*QLA_imag(b)\
                                          - QLA_imag(a)*QLA_real(b);}
#define QLA_r_meq_Im_ca_times_c(c,a,b) {c -= QLA_real(a)*QLA_imag(b)\
                                           - QLA_imag(a)*QLA_real(b);}

#define QLA_r_eq_Re_ca_times_ca(c,a,b) {c = QLA_real(a)*QLA_real(b)\
                                          - QLA_imag(a)*QLA_imag(b);}
#define QLA_r_eqm_Re_ca_times_ca(c,a,b) {c = -QLA_real(a)*QLA_real(b)\
                                           + QLA_imag(a)*QLA_imag(b);}
#define QLA_r_peq_Re_ca_times_ca(c,a,b) {c += QLA_real(a)*QLA_real(b)\
                                            - QLA_imag(a)*QLA_imag(b);}
#define QLA_r_meq_Re_ca_times_ca(c,a,b) {c -= QLA_real(a)*QLA_real(b)\
                                            - QLA_imag(a)*QLA_imag(b);}

#define QLA_r_eq_Im_ca_times_ca(c,a,b) {c = -QLA_real(a)*QLA_imag(b)\
                                          - QLA_imag(a)*QLA_real(b);}
#define QLA_r_eqm_Im_ca_times_ca(c,a,b) {c = QLA_real(a)*QLA_imag(b)\
                                           + QLA_imag(a)*QLA_real(b);}
#define QLA_r_peq_Im_ca_times_ca(c,a,b) {c += -QLA_real(a)*QLA_imag(b)\
                                            - QLA_imag(a)*QLA_real(b);}
#define QLA_r_meq_Im_ca_times_ca(c,a,b) {c -= -QLA_real(a)*QLA_imag(b)\
                                            - QLA_imag(a)*QLA_real(b);}


#define QLA_c_eq_r_plus_ir(c,a,b) {QLA_real(c) = (a); QLA_imag(c) = (b);}
#define QLA_c_eqm_r_plus_ir(c,a,b) {QLA_real(c) = -(a); QLA_imag(c) = -(b);}
#define QLA_c_peq_r_plus_ir(c,a,b) {QLA_real(c) += (a); QLA_imag(c) += (b);}
#define QLA_c_meq_r_plus_ir(c,a,b) {QLA_real(c) -= (a); QLA_imag(c) -= (b);}


#define QLA_c_eq_c_times_r(c,a,b)    {QLA_real(c) = (b) * QLA_real(a);\
                                      QLA_imag(c) = (b) * QLA_imag(a); }
#define QLA_c_eqm_c_times_r(c,a,b)   {QLA_real(c) = -((b) * QLA_real(a));\
                                      QLA_imag(c) = -((b) * QLA_imag(a)); }
#define QLA_c_peq_c_times_r(c,a,b)   {QLA_real(c) += (b) * QLA_real(a);\
                                      QLA_imag(c) += (b) * QLA_imag(a); }
#define QLA_c_meq_c_times_r(c,a,b)   {QLA_real(c) -= (b) * QLA_real(a);\
                                      QLA_imag(c) -= (b) * QLA_imag(a); }

#define QLA_c_eq_r_times_c(c,a,b)    QLA_c_eq_c_times_r(c,b,a)
#define QLA_c_eqm_r_times_c(c,a,b)   QLA_c_eqm_c_times_r(c,b,a)
#define QLA_c_peq_r_times_c(c,a,b)   QLA_c_peq_c_times_r(c,b,a)
#define QLA_c_meq_r_times_c(c,a,b)   QLA_c_meq_c_times_r(c,b,a)

#define QLA_c_eq_ca_times_r(c,a,b)    {QLA_real(c) = (b) * QLA_real(a);\
                                       QLA_imag(c) = -((b) * QLA_imag(a)); }
#define QLA_c_eqm_ca_times_r(c,a,b)   {QLA_real(c) = -((b) * QLA_real(a));\
                                       QLA_imag(c) = (b) * QLA_imag(a); }
#define QLA_c_peq_ca_times_r(c,a,b)   {QLA_real(c) += (b) * QLA_real(a);\
                                       QLA_imag(c) -= (b) * QLA_imag(a); }
#define QLA_c_meq_ca_times_r(c,a,b)   {QLA_real(c) -= (b) * QLA_real(a);\
                                       QLA_imag(c) += (b) * QLA_imag(a); }

#define QLA_c_eq_r_times_ca(c,a,b)    QLA_c_eq_ca_times_r(c,b,a)
#define QLA_c_eqm_r_times_ca(c,a,b)   QLA_c_eqm_ca_times_r(c,b,a)
#define QLA_c_peq_r_times_ca(c,a,b)   QLA_c_peq_ca_times_r(c,b,a)
#define QLA_c_meq_r_times_ca(c,a,b)   QLA_c_meq_ca_times_r(c,b,a)


#define QLA_c_eq_c_plus_c(c,a,b)  {QLA_real(c) = QLA_real(a) + QLA_real(b);\
                                   QLA_imag(c) = QLA_imag(a) + QLA_imag(b);}
#define QLA_c_eqm_c_plus_c(c,a,b)  {QLA_real(c) = -QLA_real(a) - QLA_real(b);\
                                    QLA_imag(c) = -QLA_imag(a) - QLA_imag(b);}
#define QLA_c_peq_c_plus_c(c,a,b)  {QLA_real(c) += QLA_real(a) + QLA_real(b);\
                                    QLA_imag(c) += QLA_imag(a) + QLA_imag(b);}
#define QLA_c_meq_c_plus_c(c,a,b)  {QLA_real(c) -= QLA_real(a) + QLA_real(b);\
                                    QLA_imag(c) -= QLA_imag(a) + QLA_imag(b);}

#define QLA_c_eq_c_plus_ic(c,a,b) {QLA_real(c) = QLA_real(a) - QLA_imag(b);\
                                   QLA_imag(c) = QLA_imag(a) + QLA_real(b);}
#define QLA_c_eqm_c_plus_ic(c,a,b) {QLA_real(c) = -QLA_real(a) + QLA_imag(b);\
                                    QLA_imag(c) = -QLA_imag(a) - QLA_real(b);}
#define QLA_c_peq_c_plus_ic(c,a,b) {QLA_real(c) += QLA_real(a) - QLA_imag(b);\
                                    QLA_imag(c) += QLA_imag(a) + QLA_real(b);}
#define QLA_c_meq_c_plus_ic(c,a,b) {QLA_real(c) -= QLA_real(a) - QLA_imag(b);\
                                    QLA_imag(c) -= QLA_imag(a) + QLA_real(b);}

#define QLA_c_eq_c_minus_c(c,a,b) {QLA_real(c) = QLA_real(a) - QLA_real(b);\
                                   QLA_imag(c) = QLA_imag(a) - QLA_imag(b);}
#define QLA_c_eqm_c_minus_c(c,a,b) {QLA_real(c) = -QLA_real(a) + QLA_real(b);\
                                    QLA_imag(c) = -QLA_imag(a) + QLA_imag(b);}
#define QLA_c_peq_c_minus_c(c,a,b) {QLA_real(c) += QLA_real(a) - QLA_real(b);\
                                    QLA_imag(c) += QLA_imag(a) - QLA_imag(b);}
#define QLA_c_meq_c_minus_c(c,a,b) {QLA_real(c) -= QLA_real(a) - QLA_real(b);\
                                    QLA_imag(c) -= QLA_imag(a) - QLA_imag(b);}

#define QLA_c_eq_c_minus_ca(c,a,b) {QLA_real(c) = QLA_real(a) - QLA_real(b);\
                                   QLA_imag(c) = QLA_imag(a) + QLA_imag(b);}

#define QLA_c_eq_c_minus_ic(c,a,b){QLA_real(c) = QLA_real(a) + QLA_imag(b);\
                                   QLA_imag(c) = QLA_imag(a) - QLA_real(b);}
#define QLA_c_eqm_c_minus_ic(c,a,b){QLA_real(c) = -QLA_real(a) - QLA_imag(b);\
                                    QLA_imag(c) = -QLA_imag(a) + QLA_real(b);}
#define QLA_c_peq_c_minus_ic(c,a,b){QLA_real(c) += QLA_real(a) + QLA_imag(b);\
                                    QLA_imag(c) += QLA_imag(a) - QLA_real(b);}
#define QLA_c_meq_c_minus_ic(c,a,b){QLA_real(c) -= QLA_real(a) + QLA_imag(b);\
                                    QLA_imag(c) -= QLA_imag(a) - QLA_real(b);}

#define QLA_c_eq_c_times_c(c,a,b)  {QLA_real(c) = QLA_real(a)*QLA_real(b)\
                                                 - QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) = QLA_real(a)*QLA_imag(b)\
                                                 + QLA_imag(a)*QLA_real(b);}
#define QLA_c_peq_c_times_c(c,a,b) {QLA_real(c) += (QLA_real(a)*QLA_real(b)\
                                                 - QLA_imag(a)*QLA_imag(b)); \
		                    QLA_imag(c) += (QLA_real(a)*QLA_imag(b)\
                                                 + QLA_imag(a)*QLA_real(b));}
#define QLA_c_eqm_c_times_c(c,a,b) {QLA_real(c) = -QLA_real(a)*QLA_real(b)\
                                                 + QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) = -QLA_real(a)*QLA_imag(b)\
                                                 - QLA_imag(a)*QLA_real(b);}
#define QLA_c_meq_c_times_c(c,a,b) {QLA_real(c) -= (QLA_real(a)*QLA_real(b)\
                                                 - QLA_imag(a)*QLA_imag(b)); \
		                    QLA_imag(c) -= (QLA_real(a)*QLA_imag(b)\
                                                 + QLA_imag(a)*QLA_real(b));}

#define QLA_c_eq_ca_times_ca(c,a,b) {QLA_real(c) = QLA_real(a)*QLA_real(b)\
                                                  - QLA_imag(a)*QLA_imag(b); \
		                     QLA_imag(c) = -QLA_real(a)*QLA_imag(b)\
                                                   - QLA_imag(a)*QLA_real(b);}
#define QLA_c_peq_ca_times_ca(c,a,b) {QLA_real(c) += QLA_real(a)*QLA_real(b)\
                                                  - QLA_imag(a)*QLA_imag(b); \
		                     QLA_imag(c) += -QLA_real(a)*QLA_imag(b)\
                                                   - QLA_imag(a)*QLA_real(b);}
#define QLA_c_eqm_ca_times_ca(c,a,b) {QLA_real(c) = -QLA_real(a)*QLA_real(b)\
                                                  + QLA_imag(a)*QLA_imag(b); \
		                     QLA_imag(c) = QLA_real(a)*QLA_imag(b)\
                                                   + QLA_imag(a)*QLA_real(b);}
#define QLA_c_meq_ca_times_ca(c,a,b) {QLA_real(c) -= QLA_real(a)*QLA_real(b)\
                                                  - QLA_imag(a)*QLA_imag(b); \
		                     QLA_imag(c) -= -QLA_real(a)*QLA_imag(b)\
                                                   - QLA_imag(a)*QLA_real(b);}


#define QLA_c_eq_c_times_ca(c,a,b) {QLA_real(c) = QLA_real(a)*QLA_real(b)\
                                                  + QLA_imag(a)*QLA_imag(b); \
	  	                    QLA_imag(c) = QLA_imag(a)*QLA_real(b)\
                                                 - QLA_real(a)*QLA_imag(b);}

#define QLA_c_peq_c_times_ca(c,a,b) {QLA_real(c) += QLA_real(a)*QLA_real(b)\
                                                  + QLA_imag(a)*QLA_imag(b); \
	  	                    QLA_imag(c) += QLA_imag(a)*QLA_real(b)\
                                                 - QLA_real(a)*QLA_imag(b);}

#define QLA_c_eqm_c_times_ca(c,a,b) {QLA_real(c) = -QLA_real(a)*QLA_real(b)\
                                                  - QLA_imag(a)*QLA_imag(b); \
	  	                    QLA_imag(c) = -QLA_imag(a)*QLA_real(b)\
                                                 + QLA_real(a)*QLA_imag(b);}

#define QLA_c_meq_c_times_ca(c,a,b) {QLA_real(c) -= QLA_real(a)*QLA_real(b)\
                                                  + QLA_imag(a)*QLA_imag(b); \
	  	                    QLA_imag(c) -= QLA_imag(a)*QLA_real(b)\
                                                 - QLA_real(a)*QLA_imag(b);}

#define QLA_c_eq_ca_times_c(c,a,b) {QLA_real(c) = QLA_real(a)*QLA_real(b)\
                                                 + QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) = QLA_real(a)*QLA_imag(b)\
                                                  - QLA_imag(a)*QLA_real(b);}

#define QLA_c_peq_ca_times_c(c,a,b) {QLA_real(c) += QLA_real(a)*QLA_real(b)\
                                                 + QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) += QLA_real(a)*QLA_imag(b)\
                                                  - QLA_imag(a)*QLA_real(b);}

#define QLA_c_eqm_ca_times_c(c,a,b) {QLA_real(c) = -QLA_real(a)*QLA_real(b)\
                                                 - QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) = -QLA_real(a)*QLA_imag(b)\
                                                  + QLA_imag(a)*QLA_real(b);}

#define QLA_c_meq_ca_times_c(c,a,b) {QLA_real(c) -= QLA_real(a)*QLA_real(b)\
                                                 + QLA_imag(a)*QLA_imag(b); \
		                    QLA_imag(c) -= QLA_real(a)*QLA_imag(b)\
                                                  - QLA_imag(a)*QLA_real(b);}

#define QLA_c_eq_c_div_r(c,a,b)     {QLA_real(c) = QLA_real(a)/(b);\
                                     QLA_imag(c) = QLA_imag(a)/(b);}


#define QLA_c_eq_r_div_c(c,a,b) { QLA_D_Real QLAt_ = (a)/(QLA_real(b)*QLA_real(b) \
							  + QLA_imag(b)*QLA_imag(b)); \
                                  QLA_real(c) = QLAt_*QLA_real(b); \
                                  QLA_imag(c) = -QLAt_*QLA_imag(b); }

#define QLA_c_eq_c_div_c(c,a,b) { QLA_D_Real QLAt_ = 1.0/(QLA_real(b)*QLA_real(b) \
							  + QLA_imag(b)*QLA_imag(b)); \
		                  QLA_real(c) = (QLA_real(a)*QLA_real(b) \
						 + QLA_imag(a)*QLA_imag(b))*QLAt_; \
		                  QLA_imag(c) = (QLA_imag(a)*QLA_real(b) \
						 - QLA_real(a)*QLA_imag(b))*QLAt_; }

/* Ternary operations */

#define QLA_c_eq_c_times_c_plus_c(c,a,x,b) \
                      {QLA_real(c) = QLA_real(a)*QLA_real(x)\
                                   - QLA_imag(a)*QLA_imag(x) + QLA_real(b); \
		       QLA_imag(c) = QLA_real(a)*QLA_imag(x)\
                                   + QLA_imag(a)*QLA_real(x) + QLA_imag(b);}

#define QLA_c_eq_c_times_c_minus_c(c,a,x,b) \
                      {QLA_real(c) = QLA_real(a)*QLA_real(x)\
                                   - QLA_imag(a)*QLA_imag(x) - QLA_real(b); \
		       QLA_imag(c) = QLA_real(a)*QLA_imag(x)\
                                   + QLA_imag(a)*QLA_real(x) - QLA_imag(b);}

#define QLA_c_eq_c_times_r_plus_r(c,a,x,b) \
                      {QLA_real(c) = QLA_real(a)*(x) + (b); \
		       QLA_imag(c) = QLA_imag(a)*(x);}

#define QLA_c_eq_c_times_r_minus_r(c,a,x,b) \
                      {QLA_real(c) = QLA_real(a)*(x) - (b); \
		       QLA_imag(c) = QLA_imag(a)*(x);}

#define QLA_c_eq_r_times_c_plus_c(c,a,x,b) \
                      {QLA_real(c) = (a)*QLA_real(x) + QLA_real(b); \
		       QLA_imag(c) = (a)*QLA_imag(x) + QLA_imag(b);}

#define QLA_c_eq_r_times_c_minus_c(c,a,x,b) \
                      {QLA_real(c) = (a)*QLA_real(x) - QLA_real(b); \
		       QLA_imag(c) = (a)*QLA_imag(x) - QLA_imag(b);}

#endif /* USE_C99_COMPLEX */

/* the following line is used by the test suite */
/* END_MACROS */

/* Translation of generic to specific types */
/* Works only if QLA_Precision is defined */

#if ( QLA_Precision == 'F' )

typedef QLA_F_Real QLA_Real;
typedef QLA_F_Complex QLA_Complex;

#elif ( QLA_Precision == 'D' )

typedef QLA_D_Real QLA_Real;
typedef QLA_D_Complex QLA_Complex;

#elif ( QLA_Precision == 'Q' )

typedef QLA_Q_Real QLA_Real;
typedef QLA_Q_Complex QLA_Complex;

#endif

#endif	/* _QLA_COMPLEX_H */
