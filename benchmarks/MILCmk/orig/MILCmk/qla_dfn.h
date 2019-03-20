#ifndef _QLA_DFN_H
#define _QLA_DFN_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision DF color N */
/***************************************************************/


/*===================================================*/
/* Type conversion and component extraction */
/*===================================================*/


/*---------------------------------------------------*/
/* Convert float to double */
/*---------------------------------------------------*/

void QLA_DFN_V_eq_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_V_veq_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_V_xeq_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_V_veq_pV ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_V_xeq_pV ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_DFN_H_eq_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_H_veq_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_H_xeq_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_H_veq_pH ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_H_xeq_pH ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_DFN_D_eq_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_D_veq_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_D_xeq_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_D_veq_pD ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_D_xeq_pD ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_DFN_M_eq_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_M_veq_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_M_xeq_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_M_veq_pM ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_M_xeq_pM ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_DFN_P_eq_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_P_veq_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_P_xeq_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_P_veq_pP ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_P_xeq_pP ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*---------------------------------------------------*/
/* Convert double to float */
/*---------------------------------------------------*/

void QLA_FDN_V_eq_V ( int nc, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_FDN_V_veq_V ( int nc, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_FDN_V_xeq_V ( int nc, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_FDN_V_veq_pV ( int nc, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_FDN_V_xeq_pV ( int nc, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_FDN_H_eq_H ( int nc, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_FDN_H_veq_H ( int nc, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_FDN_H_xeq_H ( int nc, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_FDN_H_veq_pH ( int nc, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_FDN_H_xeq_pH ( int nc, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_FDN_D_eq_D ( int nc, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_FDN_D_veq_D ( int nc, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_FDN_D_xeq_D ( int nc, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_FDN_D_veq_pD ( int nc, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_FDN_D_xeq_pD ( int nc, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_FDN_M_eq_M ( int nc, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_FDN_M_veq_M ( int nc, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_FDN_M_xeq_M ( int nc, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_FDN_M_veq_pM ( int nc, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_FDN_M_xeq_pM ( int nc, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);
void QLA_FDN_P_eq_P ( int nc, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_FDN_P_veq_P ( int nc, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_FDN_P_xeq_P ( int nc, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_FDN_P_veq_pP ( int nc, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_FDN_P_xeq_pP ( int nc, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*===================================================*/
/* Reductions               */
/*===================================================*/


/*---------------------------------------------------*/
/* Global squared norm float to double precision */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum norm2 a) */


void QLA_DFN_r_eq_norm2_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_r_veq_norm2_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_r_xeq_norm2_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_r_veq_norm2_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_r_xeq_norm2_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_HalfFermion (r = sum norm2 a) */


void QLA_DFN_r_eq_norm2_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_r_veq_norm2_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_r_xeq_norm2_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_r_veq_norm2_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_r_xeq_norm2_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_DiracFermion (r = sum norm2 a) */


void QLA_DFN_r_eq_norm2_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_r_veq_norm2_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_r_xeq_norm2_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_r_veq_norm2_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_r_xeq_norm2_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_ColorMatrix (r = sum norm2 a) */


void QLA_DFN_r_eq_norm2_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_r_veq_norm2_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_r_xeq_norm2_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_r_veq_norm2_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_r_xeq_norm2_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_DiracPropagator (r = sum norm2 a) */


void QLA_DFN_r_eq_norm2_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_r_veq_norm2_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_r_xeq_norm2_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_r_veq_norm2_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_r_xeq_norm2_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*---------------------------------------------------*/
/* Global inner product float to double */
/*---------------------------------------------------*/


/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_DFN_c_eq_V_dot_V ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_c_veq_V_dot_V ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_xeq_V_dot_V ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_veq_pV_dot_V ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_veq_V_dot_pV ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_veq_pV_dot_pV ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_xeq_pV_dot_V ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_xeq_V_dot_pV ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_c_xeq_pV_dot_pV ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_DFN_c_eq_H_dot_H ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_c_veq_H_dot_H ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_xeq_H_dot_H ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_veq_pH_dot_H ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_veq_H_dot_pH ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_veq_pH_dot_pH ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_xeq_pH_dot_H ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_xeq_H_dot_pH ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_c_xeq_pH_dot_pH ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_DFN_c_eq_D_dot_D ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_c_veq_D_dot_D ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_xeq_D_dot_D ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_veq_pD_dot_D ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_veq_D_dot_pD ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_veq_pD_dot_pD ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_xeq_pD_dot_D ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_xeq_D_dot_pD ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_c_xeq_pD_dot_pD ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_DFN_c_eq_M_dot_M ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_c_veq_M_dot_M ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_xeq_M_dot_M ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_veq_pM_dot_M ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_veq_M_dot_pM ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_veq_pM_dot_pM ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_xeq_pM_dot_M ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_xeq_M_dot_pM ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_c_xeq_pM_dot_pM ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_DFN_c_eq_P_dot_P ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_c_veq_P_dot_P ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_xeq_P_dot_P ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_veq_pP_dot_P ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_c_veq_P_dot_pP ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_veq_pP_dot_pP ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_c_xeq_pP_dot_P ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_c_xeq_P_dot_pP ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_c_xeq_pP_dot_pP ( int nc, QLA_D_Complex *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_DFN_r_eq_re_V_dot_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_r_veq_re_V_dot_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_xeq_re_V_dot_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_veq_re_pV_dot_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_veq_re_V_dot_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_veq_re_pV_dot_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_xeq_re_pV_dot_V ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_xeq_re_V_dot_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_r_xeq_re_pV_dot_pV ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_DFN_r_eq_re_H_dot_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_r_veq_re_H_dot_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_xeq_re_H_dot_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_veq_re_pH_dot_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_veq_re_H_dot_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_veq_re_pH_dot_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_xeq_re_pH_dot_H ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_xeq_re_H_dot_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_r_xeq_re_pH_dot_pH ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_DFN_r_eq_re_D_dot_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_r_veq_re_D_dot_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_xeq_re_D_dot_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_veq_re_pD_dot_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_veq_re_D_dot_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_veq_re_pD_dot_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_xeq_re_pD_dot_D ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_xeq_re_D_dot_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_r_xeq_re_pD_dot_pD ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_DFN_r_eq_re_M_dot_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_r_veq_re_M_dot_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_xeq_re_M_dot_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_veq_re_pM_dot_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_veq_re_M_dot_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_veq_re_pM_dot_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_xeq_re_pM_dot_M ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_xeq_re_M_dot_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_r_xeq_re_pM_dot_pM ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_DFN_r_eq_re_P_dot_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)));
void QLA_DFN_r_veq_re_P_dot_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_xeq_re_P_dot_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_veq_re_pP_dot_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int n);
void QLA_DFN_r_veq_re_P_dot_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_veq_re_pP_dot_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int n);
void QLA_DFN_r_xeq_re_pP_dot_P ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT b)), int *index, int n);
void QLA_DFN_r_xeq_re_P_dot_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int *index, int n);
void QLA_DFN_r_xeq_re_pP_dot_pP ( int nc, QLA_D_Real *QLA_RESTRICT r, QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *b)), int *index, int n);

/*---------------------------------------------------*/
/* Global sum float to double */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum a) */


void QLA_DFN_v_eq_sum_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_v_veq_sum_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_v_xeq_sum_V ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_v_veq_sum_pV ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_v_xeq_sum_pV ( int nc, QLA_DN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_HalfFermion (r = sum a) */


void QLA_DFN_h_eq_sum_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_h_veq_sum_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_h_xeq_sum_H ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_h_veq_sum_pH ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_h_xeq_sum_pH ( int nc, QLA_DN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_DiracFermion (r = sum a) */


void QLA_DFN_d_eq_sum_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_d_veq_sum_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_d_xeq_sum_D ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_d_veq_sum_pD ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_d_xeq_sum_pD ( int nc, QLA_DN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_ColorMatrix (r = sum a) */


void QLA_DFN_m_eq_sum_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_m_veq_sum_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_m_xeq_sum_M ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_m_veq_sum_pM ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_m_xeq_sum_pM ( int nc, QLA_DN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_FN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  QLA_DiracPropagator (r = sum a) */


void QLA_DFN_p_eq_sum_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_DFN_p_veq_sum_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_DFN_p_xeq_sum_P ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_DFN_p_veq_sum_pP ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_DFN_p_xeq_sum_pP ( int nc, QLA_DN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_FN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);


/* Translation to color-generic names */

#if QLA_Colors == 'N'

#include <qla_dfn_color_generic.h>

#endif
#endif /* _QLA_DFN_H */
