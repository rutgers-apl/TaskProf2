#ifndef _QLA_QN_H
#define _QLA_QN_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision Q color N */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_ColorVector)  */


void QLA_QN_V_eq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_QN_V_veq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_V_xeq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_V_veq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_V_xeq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r = a (QLA_HalfFermion)  */


void QLA_QN_H_eq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_H_veq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_H_xeq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_H_veq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_H_xeq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r = a (QLA_DiracFermion)  */


void QLA_QN_D_eq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_D_veq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_D_xeq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_D_veq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_D_xeq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r = a (QLA_ColorMatrix)  */


void QLA_QN_M_eq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_QN_M_veq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_M_xeq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_M_veq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_M_xeq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r = a (QLA_DiracPropagator)  */


void QLA_QN_P_eq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_QN_P_veq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_P_xeq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_P_veq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_P_xeq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r += a (QLA_ColorVector)  */


void QLA_QN_V_peq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_QN_V_vpeq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_V_xpeq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_V_vpeq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_V_xpeq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r += a (QLA_HalfFermion)  */


void QLA_QN_H_peq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_H_vpeq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_H_xpeq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_H_vpeq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_H_xpeq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r += a (QLA_DiracFermion)  */


void QLA_QN_D_peq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_D_vpeq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_D_xpeq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_D_vpeq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_D_xpeq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r += a (QLA_ColorMatrix)  */


void QLA_QN_M_peq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_QN_M_vpeq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_M_xpeq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_M_vpeq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_M_xpeq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r += a (QLA_DiracPropagator)  */


void QLA_QN_P_peq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_QN_P_vpeq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_P_xpeq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_P_vpeq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_P_xpeq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r =- a (QLA_ColorVector)  */


void QLA_QN_V_eqm_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_QN_V_veqm_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_V_xeqm_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_V_veqm_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_V_xeqm_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r =- a (QLA_HalfFermion)  */


void QLA_QN_H_eqm_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_H_veqm_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_H_xeqm_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_H_veqm_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_H_xeqm_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r =- a (QLA_DiracFermion)  */


void QLA_QN_D_eqm_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_D_veqm_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_D_xeqm_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_D_veqm_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_D_xeqm_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r =- a (QLA_ColorMatrix)  */


void QLA_QN_M_eqm_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_QN_M_veqm_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_M_xeqm_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_M_veqm_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_M_xeqm_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r =- a (QLA_DiracPropagator)  */


void QLA_QN_P_eqm_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_QN_P_veqm_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_P_xeqm_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_P_veqm_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_P_xeqm_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r -= a (QLA_ColorVector)  */


void QLA_QN_V_meq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)));
void QLA_QN_V_vmeq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_V_xmeq_V ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_V_vmeq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_V_xmeq_pV ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorVector(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r -= a (QLA_HalfFermion)  */


void QLA_QN_H_meq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_H_vmeq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_H_xmeq_H ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_H_vmeq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_H_xmeq_pH ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r -= a (QLA_DiracFermion)  */


void QLA_QN_D_meq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)));
void QLA_QN_D_vmeq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_D_xmeq_D ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_D_vmeq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_D_xmeq_pD ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r -= a (QLA_ColorMatrix)  */


void QLA_QN_M_meq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)));
void QLA_QN_M_vmeq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_M_xmeq_M ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_M_vmeq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_M_xmeq_pM ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*  r -= a (QLA_DiracPropagator)  */


void QLA_QN_P_meq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)));
void QLA_QN_P_vmeq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int n);
void QLA_QN_P_xmeq_P ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT a)), int *index, int n);
void QLA_QN_P_vmeq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int n);
void QLA_QN_P_xmeq_pP ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT *a)), int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = zero) */


void QLA_QN_V_eq_zero ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)));
void QLA_QN_V_veq_zero ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), int n);
void QLA_QN_V_xeq_zero ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), int *index, int n);

/*  QLA_HalfFermion (r = zero) */


void QLA_QN_H_eq_zero ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)));
void QLA_QN_H_veq_zero ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), int n);
void QLA_QN_H_xeq_zero ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), int *index, int n);

/*  QLA_DiracFermion (r = zero) */


void QLA_QN_D_eq_zero ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)));
void QLA_QN_D_veq_zero ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), int n);
void QLA_QN_D_xeq_zero ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), int *index, int n);

/*  QLA_ColorMatrix (r = zero) */


void QLA_QN_M_eq_zero ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)));
void QLA_QN_M_veq_zero ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), int n);
void QLA_QN_M_xeq_zero ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), int *index, int n);

/*  QLA_DiracPropagator (r = zero) */


void QLA_QN_P_eq_zero ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)));
void QLA_QN_P_veq_zero ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), int n);
void QLA_QN_P_xeq_zero ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), int *index, int n);

/*---------------------------------------------------*/
/* Gaussian random number fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = gaussian random)  */


void QLA_QN_V_eq_gaussian_S ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a);
void QLA_QN_V_veq_gaussian_S ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_QN_V_xeq_gaussian_S ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_QN_V_veq_gaussian_pS ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_QN_V_xeq_gaussian_pS ( int nc, QLA_QN_ColorVector(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = gaussian random)  */


void QLA_QN_H_eq_gaussian_S ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a);
void QLA_QN_H_veq_gaussian_S ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_QN_H_xeq_gaussian_S ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_QN_H_veq_gaussian_pS ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_QN_H_xeq_gaussian_pS ( int nc, QLA_QN_HalfFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = gaussian random)  */


void QLA_QN_D_eq_gaussian_S ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a);
void QLA_QN_D_veq_gaussian_S ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_QN_D_xeq_gaussian_S ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_QN_D_veq_gaussian_pS ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_QN_D_xeq_gaussian_pS ( int nc, QLA_QN_DiracFermion(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = gaussian random)  */


void QLA_QN_M_eq_gaussian_S ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a);
void QLA_QN_M_veq_gaussian_S ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_QN_M_xeq_gaussian_S ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_QN_M_veq_gaussian_pS ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_QN_M_xeq_gaussian_pS ( int nc, QLA_QN_ColorMatrix(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = gaussian random)  */


void QLA_QN_P_eq_gaussian_S ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a);
void QLA_QN_P_veq_gaussian_S ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_QN_P_xeq_gaussian_S ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_QN_P_veq_gaussian_pS ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_QN_P_xeq_gaussian_pS ( int nc, QLA_QN_DiracPropagator(nc, ( *QLA_RESTRICT r)), QLA_RandomState *QLA_RESTRICT *a, int *index, int n);


/* Translation to precision-generic names */

#if QLA_Precision == 'Q'

#include <qla_qn_precision_generic.h>

#endif


/* Translation to color-generic names */

#if QLA_Colors == 'N'

#include <qla_qn_color_generic.h>

#endif


/* Translation to fully generic names */

#if QLA_Precision == 'Q' && QLA_Colors == 'N'

#include <qla_qn_generic.h>

#endif
#endif /* _QLA_QN_H */
