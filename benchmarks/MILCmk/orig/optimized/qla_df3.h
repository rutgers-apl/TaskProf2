#ifndef _QLA_DF3_H
#define _QLA_DF3_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision DF color 3 */
/***************************************************************/


/*===================================================*/
/* Type conversion and component extraction */
/*===================================================*/


/*---------------------------------------------------*/
/* Convert float to double */
/*---------------------------------------------------*/

void QLA_DF3_V_eq_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_DF3_V_veq_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_DF3_V_xeq_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_V_veq_pV ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_DF3_V_xeq_pV ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);
void QLA_DF3_H_eq_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_DF3_H_veq_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_DF3_H_xeq_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_H_veq_pH ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_H_xeq_pH ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);
void QLA_DF3_D_eq_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_DF3_D_veq_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_DF3_D_xeq_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_D_veq_pD ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_D_xeq_pD ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);
void QLA_DF3_M_eq_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_DF3_M_veq_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_DF3_M_xeq_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_M_veq_pM ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_DF3_M_xeq_pM ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_DF3_P_eq_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_DF3_P_veq_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_DF3_P_xeq_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_P_veq_pP ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_DF3_P_xeq_pP ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Convert double to float */
/*---------------------------------------------------*/

void QLA_FD3_V_eq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_D3_ColorVector *QLA_RESTRICT a);
void QLA_FD3_V_veq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_D3_ColorVector *QLA_RESTRICT a, int n);
void QLA_FD3_V_xeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_D3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_FD3_V_veq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_D3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_FD3_V_xeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_D3_ColorVector *QLA_RESTRICT *a, int *index, int n);
void QLA_FD3_H_eq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_D3_HalfFermion *QLA_RESTRICT a);
void QLA_FD3_H_veq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_D3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_FD3_H_xeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_D3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_FD3_H_veq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_D3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_FD3_H_xeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_D3_HalfFermion *QLA_RESTRICT *a, int *index, int n);
void QLA_FD3_D_eq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_D3_DiracFermion *QLA_RESTRICT a);
void QLA_FD3_D_veq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_D3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_FD3_D_xeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_D3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_FD3_D_veq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_D3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_FD3_D_xeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_D3_DiracFermion *QLA_RESTRICT *a, int *index, int n);
void QLA_FD3_M_eq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_D3_ColorMatrix *QLA_RESTRICT a);
void QLA_FD3_M_veq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_D3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_FD3_M_xeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_D3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_FD3_M_veq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_D3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_FD3_M_xeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_D3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_FD3_P_eq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_D3_DiracPropagator *QLA_RESTRICT a);
void QLA_FD3_P_veq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_D3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_FD3_P_xeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_D3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_FD3_P_veq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_D3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_FD3_P_xeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_D3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Reductions               */
/*===================================================*/


/*---------------------------------------------------*/
/* Global squared norm float to double precision */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum norm2 a) */


void QLA_DF3_r_eq_norm2_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_DF3_r_veq_norm2_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_DF3_r_xeq_norm2_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_r_veq_norm2_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_DF3_r_xeq_norm2_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = sum norm2 a) */


void QLA_DF3_r_eq_norm2_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_DF3_r_veq_norm2_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_DF3_r_xeq_norm2_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_r_veq_norm2_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_r_xeq_norm2_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = sum norm2 a) */


void QLA_DF3_r_eq_norm2_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_DF3_r_veq_norm2_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_DF3_r_xeq_norm2_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_r_veq_norm2_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_r_xeq_norm2_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = sum norm2 a) */


void QLA_DF3_r_eq_norm2_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_DF3_r_veq_norm2_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_DF3_r_xeq_norm2_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_r_veq_norm2_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_DF3_r_xeq_norm2_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = sum norm2 a) */


void QLA_DF3_r_eq_norm2_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_DF3_r_veq_norm2_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_DF3_r_xeq_norm2_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_r_veq_norm2_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_DF3_r_xeq_norm2_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Global inner product float to double */
/*---------------------------------------------------*/


/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_DF3_c_eq_V_dot_V ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_DF3_c_veq_V_dot_V ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_DF3_c_xeq_V_dot_V ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_veq_pV_dot_V ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_DF3_c_veq_V_dot_pV ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_DF3_c_veq_pV_dot_pV ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_DF3_c_xeq_pV_dot_V ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_xeq_V_dot_pV ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_c_xeq_pV_dot_pV ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_DF3_c_eq_H_dot_H ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_DF3_c_veq_H_dot_H ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_DF3_c_xeq_H_dot_H ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_veq_pH_dot_H ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_DF3_c_veq_H_dot_pH ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_c_veq_pH_dot_pH ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_c_xeq_pH_dot_H ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_xeq_H_dot_pH ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_c_xeq_pH_dot_pH ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_DF3_c_eq_D_dot_D ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_DF3_c_veq_D_dot_D ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_DF3_c_xeq_D_dot_D ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_veq_pD_dot_D ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_DF3_c_veq_D_dot_pD ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_c_veq_pD_dot_pD ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_c_xeq_pD_dot_D ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_xeq_D_dot_pD ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_c_xeq_pD_dot_pD ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_DF3_c_eq_M_dot_M ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_DF3_c_veq_M_dot_M ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_DF3_c_xeq_M_dot_M ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_veq_pM_dot_M ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_DF3_c_veq_M_dot_pM ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_DF3_c_veq_pM_dot_pM ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_DF3_c_xeq_pM_dot_M ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_xeq_M_dot_pM ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_c_xeq_pM_dot_pM ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_DF3_c_eq_P_dot_P ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_DF3_c_veq_P_dot_P ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_DF3_c_xeq_P_dot_P ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_veq_pP_dot_P ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_DF3_c_veq_P_dot_pP ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_DF3_c_veq_pP_dot_pP ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_DF3_c_xeq_pP_dot_P ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_c_xeq_P_dot_pP ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_c_xeq_pP_dot_pP ( QLA_D_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_DF3_r_eq_re_V_dot_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_DF3_r_veq_re_V_dot_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_DF3_r_xeq_re_V_dot_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_veq_re_pV_dot_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_DF3_r_veq_re_V_dot_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_DF3_r_veq_re_pV_dot_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_DF3_r_xeq_re_pV_dot_V ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_xeq_re_V_dot_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_r_xeq_re_pV_dot_pV ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_DF3_r_eq_re_H_dot_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_DF3_r_veq_re_H_dot_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_DF3_r_xeq_re_H_dot_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_veq_re_pH_dot_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_DF3_r_veq_re_H_dot_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_r_veq_re_pH_dot_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_r_xeq_re_pH_dot_H ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_xeq_re_H_dot_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_r_xeq_re_pH_dot_pH ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_DF3_r_eq_re_D_dot_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_DF3_r_veq_re_D_dot_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_DF3_r_xeq_re_D_dot_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_veq_re_pD_dot_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_DF3_r_veq_re_D_dot_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_r_veq_re_pD_dot_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_DF3_r_xeq_re_pD_dot_D ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_xeq_re_D_dot_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_r_xeq_re_pD_dot_pD ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_DF3_r_eq_re_M_dot_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_DF3_r_veq_re_M_dot_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_DF3_r_xeq_re_M_dot_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_veq_re_pM_dot_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_DF3_r_veq_re_M_dot_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_DF3_r_veq_re_pM_dot_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_DF3_r_xeq_re_pM_dot_M ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_xeq_re_M_dot_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_r_xeq_re_pM_dot_pM ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_DF3_r_eq_re_P_dot_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_DF3_r_veq_re_P_dot_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_DF3_r_xeq_re_P_dot_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_veq_re_pP_dot_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_DF3_r_veq_re_P_dot_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_DF3_r_veq_re_pP_dot_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_DF3_r_xeq_re_pP_dot_P ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_DF3_r_xeq_re_P_dot_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_DF3_r_xeq_re_pP_dot_pP ( QLA_D_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Global sum float to double */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum a) */


void QLA_DF3_v_eq_sum_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_DF3_v_veq_sum_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_DF3_v_xeq_sum_V ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_v_veq_sum_pV ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_DF3_v_xeq_sum_pV ( QLA_D3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = sum a) */


void QLA_DF3_h_eq_sum_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_DF3_h_veq_sum_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_DF3_h_xeq_sum_H ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_h_veq_sum_pH ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_h_xeq_sum_pH ( QLA_D3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = sum a) */


void QLA_DF3_d_eq_sum_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_DF3_d_veq_sum_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_DF3_d_xeq_sum_D ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_d_veq_sum_pD ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_DF3_d_xeq_sum_pD ( QLA_D3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = sum a) */


void QLA_DF3_m_eq_sum_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_DF3_m_veq_sum_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_DF3_m_xeq_sum_M ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_m_veq_sum_pM ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_DF3_m_xeq_sum_pM ( QLA_D3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = sum a) */


void QLA_DF3_p_eq_sum_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_DF3_p_veq_sum_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_DF3_p_xeq_sum_P ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_DF3_p_veq_sum_pP ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_DF3_p_xeq_sum_pP ( QLA_D3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);


/* Translation to color-generic names */

#if QLA_Colors == 3

#include <qla_df3_color_generic.h>

#endif
#endif /* _QLA_DF3_H */
