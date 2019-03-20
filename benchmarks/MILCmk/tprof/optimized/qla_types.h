#ifndef _QLA_TYPES_H
#define _QLA_TYPES_H

#if defined(__GNUC__) || defined(__xlc__)
#define _ALIGN2(x) __attribute__ ((aligned x))
#else
#define _ALIGN2(x)
#endif
#define _ALIGN(x) _ALIGN2((x))
#define _ALIGNED _ALIGN2()

/* int, real and complex types */
#include <qla_complex.h>

/* Number of spins */
#define QLA_Ns 4

/****************************************************************************/
/* Implementation-specific data layout */
/****************************************************************************/
#define QLA_cvdef(P,C,NC,V) QLA_##P##_Complex V[NC]                     /* ColorVector */
#define QLA_hfdef(P,C,NC,V) QLA_##P##_Complex V[NC][(QLA_Ns)/2]         /* HalfFermion */
#define QLA_dfdef(P,C,NC,V) QLA_##P##_Complex V[NC][QLA_Ns]             /* DiracFermion */
#define QLA_cmdef(P,C,NC,V) QLA_##P##_Complex V[NC][NC]                 /* ColorMatrix */
#define QLA_dpdef(P,C,NC,V) QLA_##P##_Complex V[NC][QLA_Ns][NC][QLA_Ns] /* DiracPropagator */

#define QLA_elem_I(a) (a)
#define QLA_elem_R(a) (a)
#define QLA_elem_C(a) (a)
#define QLA_elem_V(a,ic) ((a)[ic])
#define QLA_elem_H(a,ic,is) ((a)[ic][is])
#define QLA_elem_D(a,ic,is) ((a)[ic][is])
#define QLA_elem_M(a,ic,jc) ((a)[ic][jc])
#define QLA_elem_P(a,ic,is,jc,js) ((a)[ic][is][jc][js])

/* everything below here is determined from the above macros */

/* SU(3) single precision */
typedef QLA_cvdef(F,3,3,QLA_F3_ColorVector);
typedef QLA_hfdef(F,3,3,QLA_F3_HalfFermion);
typedef QLA_dfdef(F,3,3,QLA_F3_DiracFermion);
typedef QLA_cmdef(F,3,3,QLA_F3_ColorMatrix);
typedef QLA_dpdef(F,3,3,QLA_F3_DiracPropagator);

#define QLA_F3_elem_I(a) QLA_elem_I(a)
#define QLA_F3_elem_R(a) QLA_elem_R(a)
#define QLA_F3_elem_C(a) QLA_elem_C(a)
#define QLA_F3_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_F3_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_F3_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_F3_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_F3_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(3) double precision */
typedef QLA_cvdef(D,3,3,QLA_D3_ColorVector);
typedef QLA_hfdef(D,3,3,QLA_D3_HalfFermion);
typedef QLA_dfdef(D,3,3,QLA_D3_DiracFermion);
typedef QLA_cmdef(D,3,3,QLA_D3_ColorMatrix);
typedef QLA_dpdef(D,3,3,QLA_D3_DiracPropagator);

#define QLA_D3_elem_I(a) QLA_elem_I(a)
#define QLA_D3_elem_R(a) QLA_elem_R(a)
#define QLA_D3_elem_C(a) QLA_elem_C(a)
#define QLA_D3_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_D3_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_D3_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_D3_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_D3_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(3) long double precision */
typedef QLA_cvdef(Q,3,3,QLA_Q3_ColorVector);
typedef QLA_hfdef(Q,3,3,QLA_Q3_HalfFermion);
typedef QLA_dfdef(Q,3,3,QLA_Q3_DiracFermion);
typedef QLA_cmdef(Q,3,3,QLA_Q3_ColorMatrix);
typedef QLA_dpdef(Q,3,3,QLA_Q3_DiracPropagator);

#define QLA_Q3_elem_I(a) QLA_elem_I(a)
#define QLA_Q3_elem_R(a) QLA_elem_R(a)
#define QLA_Q3_elem_C(a) QLA_elem_C(a)
#define QLA_Q3_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_Q3_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_Q3_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_Q3_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_Q3_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)


/* SU(2) single precision */
typedef QLA_cvdef(F,2,2,QLA_F2_ColorVector);
typedef QLA_hfdef(F,2,2,QLA_F2_HalfFermion);
typedef QLA_dfdef(F,2,2,QLA_F2_DiracFermion);
typedef QLA_cmdef(F,2,2,QLA_F2_ColorMatrix);
typedef QLA_dpdef(F,2,2,QLA_F2_DiracPropagator);

#define QLA_F2_elem_I(a) QLA_elem_I(a)
#define QLA_F2_elem_R(a) QLA_elem_R(a)
#define QLA_F2_elem_C(a) QLA_elem_C(a)
#define QLA_F2_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_F2_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_F2_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_F2_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_F2_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(2) double precision */
typedef QLA_cvdef(D,2,2,QLA_D2_ColorVector);
typedef QLA_hfdef(D,2,2,QLA_D2_HalfFermion);
typedef QLA_dfdef(D,2,2,QLA_D2_DiracFermion);
typedef QLA_cmdef(D,2,2,QLA_D2_ColorMatrix);
typedef QLA_dpdef(D,2,2,QLA_D2_DiracPropagator);

#define QLA_D2_elem_I(a) QLA_elem_I(a)
#define QLA_D2_elem_R(a) QLA_elem_R(a)
#define QLA_D2_elem_C(a) QLA_elem_C(a)
#define QLA_D2_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_D2_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_D2_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_D2_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_D2_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(2) long double precision */
typedef QLA_cvdef(Q,2,2,QLA_Q2_ColorVector);
typedef QLA_hfdef(Q,2,2,QLA_Q2_HalfFermion);
typedef QLA_dfdef(Q,2,2,QLA_Q2_DiracFermion);
typedef QLA_cmdef(Q,2,2,QLA_Q2_ColorMatrix);
typedef QLA_dpdef(Q,2,2,QLA_Q2_DiracPropagator);

#define QLA_Q2_elem_I(a) QLA_elem_I(a)
#define QLA_Q2_elem_R(a) QLA_elem_R(a)
#define QLA_Q2_elem_C(a) QLA_elem_C(a)
#define QLA_Q2_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_Q2_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_Q2_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_Q2_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_Q2_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)


/* SU(N) single precision */
#define QLA_FN_ColorVector(NC,V)      QLA_cvdef(F,N,NC,V)
#define QLA_FN_HalfFermion(NC,V)      QLA_hfdef(F,N,NC,V)
#define QLA_FN_DiracFermion(NC,V)     QLA_dfdef(F,N,NC,V)
#define QLA_FN_ColorMatrix(NC,V)      QLA_cmdef(F,N,NC,V)
#define QLA_FN_DiracPropagator(NC,V)  QLA_dpdef(F,N,NC,V)

#define QLA_FN_elem_I(a) QLA_elem_I(a)
#define QLA_FN_elem_R(a) QLA_elem_R(a)
#define QLA_FN_elem_C(a) QLA_elem_C(a)
#define QLA_FN_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_FN_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_FN_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_FN_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_FN_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(N) double precision */
#define QLA_DN_ColorVector(NC,V)      QLA_cvdef(D,N,NC,V)
#define QLA_DN_HalfFermion(NC,V)      QLA_hfdef(D,N,NC,V)
#define QLA_DN_DiracFermion(NC,V)     QLA_dfdef(D,N,NC,V)
#define QLA_DN_ColorMatrix(NC,V)      QLA_cmdef(D,N,NC,V)
#define QLA_DN_DiracPropagator(NC,V)  QLA_dpdef(D,N,NC,V)

#define QLA_DN_elem_I(a) QLA_elem_I(a)
#define QLA_DN_elem_R(a) QLA_elem_R(a)
#define QLA_DN_elem_C(a) QLA_elem_C(a)
#define QLA_DN_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_DN_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_DN_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_DN_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_DN_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)

/* SU(N) long double precision */
#define QLA_QN_ColorVector(NC,V)      QLA_cvdef(Q,N,NC,V)
#define QLA_QN_HalfFermion(NC,V)      QLA_hfdef(Q,N,NC,V)
#define QLA_QN_DiracFermion(NC,V)     QLA_dfdef(Q,N,NC,V)
#define QLA_QN_ColorMatrix(NC,V)      QLA_cmdef(Q,N,NC,V)
#define QLA_QN_DiracPropagator(NC,V)  QLA_dpdef(Q,N,NC,V)

#define QLA_QN_elem_I(a) QLA_elem_I(a)
#define QLA_QN_elem_R(a) QLA_elem_R(a)
#define QLA_QN_elem_C(a) QLA_elem_C(a)
#define QLA_QN_elem_V(a,ic) QLA_elem_V(a,ic)
#define QLA_QN_elem_H(a,ic,is) QLA_elem_H(a,ic,is)
#define QLA_QN_elem_D(a,ic,is) QLA_elem_D(a,ic,is)
#define QLA_QN_elem_M(a,ic,jc) QLA_elem_M(a,ic,jc)
#define QLA_QN_elem_P(a,ic,is,jc,js) QLA_elem_P(a,ic,is,jc,js)


/*********************************************************************/
/* Translation of generic to specific datatypes and accessors */
/*********************************************************************/
/* Works only if QLA_Precision and QLA_Colors are defined */

#if ( QLA_Colors == 3 )

/* These types specify precision but are generic with respect to color */

typedef QLA_F3_ColorMatrix         QLA_F_ColorMatrix;
typedef QLA_F3_ColorVector         QLA_F_ColorVector;
typedef QLA_F3_HalfFermion         QLA_F_HalfFermion;
typedef QLA_F3_DiracFermion        QLA_F_DiracFermion;
typedef QLA_F3_DiracPropagator     QLA_F_DiracPropagator;

#define QLA_F_elem_R QLA_F3_elem_R 
#define QLA_F_elem_C QLA_F3_elem_C 
#define QLA_F_elem_I QLA_F3_elem_I 
#define QLA_F_elem_H QLA_F3_elem_H 
#define QLA_F_elem_D QLA_F3_elem_D 
#define QLA_F_elem_V QLA_F3_elem_V 
#define QLA_F_elem_P QLA_F3_elem_P 
#define QLA_F_elem_M QLA_F3_elem_M 

typedef QLA_D3_ColorMatrix         QLA_D_ColorMatrix;
typedef QLA_D3_ColorVector         QLA_D_ColorVector;
typedef QLA_D3_HalfFermion         QLA_D_HalfFermion;
typedef QLA_D3_DiracFermion        QLA_D_DiracFermion;
typedef QLA_D3_DiracPropagator     QLA_D_DiracPropagator;

#define QLA_D_elem_R QLA_D3_elem_R 
#define QLA_D_elem_C QLA_D3_elem_C 
#define QLA_D_elem_I QLA_D3_elem_I 
#define QLA_D_elem_H QLA_D3_elem_H 
#define QLA_D_elem_D QLA_D3_elem_D 
#define QLA_D_elem_V QLA_D3_elem_V 
#define QLA_D_elem_P QLA_D3_elem_P 
#define QLA_D_elem_M QLA_D3_elem_M 

typedef QLA_Q3_ColorMatrix         QLA_Q_ColorMatrix;
typedef QLA_Q3_ColorVector         QLA_Q_ColorVector;
typedef QLA_Q3_HalfFermion         QLA_Q_HalfFermion;
typedef QLA_Q3_DiracFermion        QLA_Q_DiracFermion;
typedef QLA_Q3_DiracPropagator     QLA_Q_DiracPropagator;

#define QLA_Q_elem_R QLA_Q3_elem_R 
#define QLA_Q_elem_C QLA_Q3_elem_C 
#define QLA_Q_elem_I QLA_Q3_elem_I 
#define QLA_Q_elem_H QLA_Q3_elem_H 
#define QLA_Q_elem_D QLA_Q3_elem_D 
#define QLA_Q_elem_V QLA_Q3_elem_V 
#define QLA_Q_elem_P QLA_Q3_elem_P 
#define QLA_Q_elem_M QLA_Q3_elem_M 

#elif ( QLA_Colors == 2 )

/* These types specify precision but are generic with respect to color */

typedef QLA_F2_ColorMatrix         QLA_F_ColorMatrix;
typedef QLA_F2_ColorVector         QLA_F_ColorVector;
typedef QLA_F2_HalfFermion         QLA_F_HalfFermion;
typedef QLA_F2_DiracFermion        QLA_F_DiracFermion;
typedef QLA_F2_DiracPropagator     QLA_F_DiracPropagator;

#define QLA_F_elem_R QLA_F2_elem_R 
#define QLA_F_elem_C QLA_F2_elem_C 
#define QLA_F_elem_I QLA_F2_elem_I 
#define QLA_F_elem_H QLA_F2_elem_H 
#define QLA_F_elem_D QLA_F2_elem_D 
#define QLA_F_elem_V QLA_F2_elem_V 
#define QLA_F_elem_P QLA_F2_elem_P 
#define QLA_F_elem_M QLA_F2_elem_M 

typedef QLA_D2_ColorMatrix         QLA_D_ColorMatrix;
typedef QLA_D2_ColorVector         QLA_D_ColorVector;
typedef QLA_D2_HalfFermion         QLA_D_HalfFermion;
typedef QLA_D2_DiracFermion        QLA_D_DiracFermion;
typedef QLA_D2_DiracPropagator     QLA_D_DiracPropagator;

#define QLA_D_elem_R QLA_D2_elem_R 
#define QLA_D_elem_C QLA_D2_elem_C 
#define QLA_D_elem_I QLA_D2_elem_I 
#define QLA_D_elem_H QLA_D2_elem_H 
#define QLA_D_elem_D QLA_D2_elem_D 
#define QLA_D_elem_V QLA_D2_elem_V 
#define QLA_D_elem_P QLA_D2_elem_P 
#define QLA_D_elem_M QLA_D2_elem_M 

typedef QLA_Q2_ColorMatrix         QLA_Q_ColorMatrix;
typedef QLA_Q2_ColorVector         QLA_Q_ColorVector;
typedef QLA_Q2_HalfFermion         QLA_Q_HalfFermion;
typedef QLA_Q2_DiracFermion        QLA_Q_DiracFermion;
typedef QLA_Q2_DiracPropagator     QLA_Q_DiracPropagator;

#define QLA_Q_elem_R QLA_Q2_elem_R 
#define QLA_Q_elem_C QLA_Q2_elem_C 
#define QLA_Q_elem_I QLA_Q2_elem_I 
#define QLA_Q_elem_H QLA_Q2_elem_H 
#define QLA_Q_elem_D QLA_Q2_elem_D 
#define QLA_Q_elem_V QLA_Q2_elem_V 
#define QLA_Q_elem_P QLA_Q2_elem_P 
#define QLA_Q_elem_M QLA_Q2_elem_M 

#elif ( QLA_Colors == 'N' )
#ifndef QLA_Nc
#define QLA_Nc 5
#endif

/* These types specify precision but are generic with respect to color */

typedef QLA_FN_ColorMatrix(QLA_Nc, QLA_F_ColorMatrix);
typedef QLA_FN_ColorVector(QLA_Nc, QLA_F_ColorVector);
typedef QLA_FN_HalfFermion(QLA_Nc, QLA_F_HalfFermion);
typedef QLA_FN_DiracFermion(QLA_Nc, QLA_F_DiracFermion);
typedef QLA_FN_DiracPropagator(QLA_Nc, QLA_F_DiracPropagator);

#define QLA_F_elem_R QLA_FN_elem_R 
#define QLA_F_elem_C QLA_FN_elem_C 
#define QLA_F_elem_I QLA_FN_elem_I 
#define QLA_F_elem_H QLA_FN_elem_H 
#define QLA_F_elem_D QLA_FN_elem_D 
#define QLA_F_elem_V QLA_FN_elem_V 
#define QLA_F_elem_P QLA_FN_elem_P 
#define QLA_F_elem_M QLA_FN_elem_M 

typedef QLA_DN_ColorMatrix(QLA_Nc, QLA_D_ColorMatrix);
typedef QLA_DN_ColorVector(QLA_Nc, QLA_D_ColorVector);
typedef QLA_DN_HalfFermion(QLA_Nc, QLA_D_HalfFermion);
typedef QLA_DN_DiracFermion(QLA_Nc, QLA_D_DiracFermion);
typedef QLA_DN_DiracPropagator(QLA_Nc, QLA_D_DiracPropagator);

#define QLA_D_elem_R QLA_DN_elem_R 
#define QLA_D_elem_C QLA_DN_elem_C 
#define QLA_D_elem_I QLA_DN_elem_I 
#define QLA_D_elem_H QLA_DN_elem_H 
#define QLA_D_elem_D QLA_DN_elem_D 
#define QLA_D_elem_V QLA_DN_elem_V 
#define QLA_D_elem_P QLA_DN_elem_P 
#define QLA_D_elem_M QLA_DN_elem_M 

typedef QLA_QN_ColorMatrix(QLA_Nc, QLA_Q_ColorMatrix);
typedef QLA_QN_ColorVector(QLA_Nc, QLA_Q_ColorVector);
typedef QLA_QN_HalfFermion(QLA_Nc, QLA_Q_HalfFermion);
typedef QLA_QN_DiracFermion(QLA_Nc, QLA_Q_DiracFermion);
typedef QLA_QN_DiracPropagator(QLA_Nc, QLA_Q_DiracPropagator);

#define QLA_Q_elem_R QLA_QN_elem_R 
#define QLA_Q_elem_C QLA_QN_elem_C 
#define QLA_Q_elem_I QLA_QN_elem_I 
#define QLA_Q_elem_H QLA_QN_elem_H 
#define QLA_Q_elem_D QLA_QN_elem_D 
#define QLA_Q_elem_V QLA_QN_elem_V 
#define QLA_Q_elem_P QLA_QN_elem_P 
#define QLA_Q_elem_M QLA_QN_elem_M 

#endif /* if QLA_Colors == ?? */

/* These types are fully generic with respect to precision and color */

#ifdef QLA_Colors

#if ( QLA_Precision == 'F' )

typedef QLA_F_ColorMatrix         QLA_ColorMatrix;
typedef QLA_F_ColorVector         QLA_ColorVector;
typedef QLA_F_HalfFermion         QLA_HalfFermion;
typedef QLA_F_DiracFermion        QLA_DiracFermion;
typedef QLA_F_DiracPropagator     QLA_DiracPropagator;

#elif ( QLA_Precision == 'D' )

typedef QLA_D_ColorMatrix         QLA_ColorMatrix;
typedef QLA_D_ColorVector         QLA_ColorVector;
typedef QLA_D_HalfFermion         QLA_HalfFermion;
typedef QLA_D_DiracFermion        QLA_DiracFermion;
typedef QLA_D_DiracPropagator     QLA_DiracPropagator;

#elif ( QLA_Precision == 'Q' )

typedef QLA_Q_ColorMatrix         QLA_ColorMatrix;
typedef QLA_Q_ColorVector         QLA_ColorVector;
typedef QLA_Q_HalfFermion         QLA_HalfFermion;
typedef QLA_Q_DiracFermion        QLA_DiracFermion;
typedef QLA_Q_DiracPropagator     QLA_DiracPropagator;

#endif

#endif //QLA_Colors

#endif /* _QLA_TYPES_H */
