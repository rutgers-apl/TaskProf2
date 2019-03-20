#ifndef _QLA_Q2_H
#define _QLA_Q2_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision Q color 2 */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_ColorVector)  */


void QLA_Q2_V_eq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a);
void QLA_Q2_V_veq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int n);
void QLA_Q2_V_xeq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_V_veq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int n);
void QLA_Q2_V_xeq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_HalfFermion)  */


void QLA_Q2_H_eq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a);
void QLA_Q2_H_veq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int n);
void QLA_Q2_H_xeq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_H_veq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_H_xeq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_DiracFermion)  */


void QLA_Q2_D_eq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a);
void QLA_Q2_D_veq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int n);
void QLA_Q2_D_xeq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_D_veq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_D_xeq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_ColorMatrix)  */


void QLA_Q2_M_eq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a);
void QLA_Q2_M_veq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_Q2_M_xeq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_M_veq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_Q2_M_xeq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_DiracPropagator)  */


void QLA_Q2_P_eq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a);
void QLA_Q2_P_veq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_Q2_P_xeq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_P_veq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_Q2_P_xeq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_ColorVector)  */


void QLA_Q2_V_peq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a);
void QLA_Q2_V_vpeq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int n);
void QLA_Q2_V_xpeq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_V_vpeq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int n);
void QLA_Q2_V_xpeq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_HalfFermion)  */


void QLA_Q2_H_peq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a);
void QLA_Q2_H_vpeq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int n);
void QLA_Q2_H_xpeq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_H_vpeq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_H_xpeq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_DiracFermion)  */


void QLA_Q2_D_peq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a);
void QLA_Q2_D_vpeq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int n);
void QLA_Q2_D_xpeq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_D_vpeq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_D_xpeq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_ColorMatrix)  */


void QLA_Q2_M_peq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a);
void QLA_Q2_M_vpeq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_Q2_M_xpeq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_M_vpeq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_Q2_M_xpeq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_DiracPropagator)  */


void QLA_Q2_P_peq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a);
void QLA_Q2_P_vpeq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_Q2_P_xpeq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_P_vpeq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_Q2_P_xpeq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_ColorVector)  */


void QLA_Q2_V_eqm_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a);
void QLA_Q2_V_veqm_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int n);
void QLA_Q2_V_xeqm_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_V_veqm_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int n);
void QLA_Q2_V_xeqm_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_HalfFermion)  */


void QLA_Q2_H_eqm_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a);
void QLA_Q2_H_veqm_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int n);
void QLA_Q2_H_xeqm_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_H_veqm_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_H_xeqm_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_DiracFermion)  */


void QLA_Q2_D_eqm_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a);
void QLA_Q2_D_veqm_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int n);
void QLA_Q2_D_xeqm_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_D_veqm_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_D_xeqm_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_ColorMatrix)  */


void QLA_Q2_M_eqm_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a);
void QLA_Q2_M_veqm_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_Q2_M_xeqm_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_M_veqm_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_Q2_M_xeqm_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_DiracPropagator)  */


void QLA_Q2_P_eqm_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a);
void QLA_Q2_P_veqm_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_Q2_P_xeqm_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_P_veqm_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_Q2_P_xeqm_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_ColorVector)  */


void QLA_Q2_V_meq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a);
void QLA_Q2_V_vmeq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int n);
void QLA_Q2_V_xmeq_V ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_V_vmeq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int n);
void QLA_Q2_V_xmeq_pV ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_Q2_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_HalfFermion)  */


void QLA_Q2_H_meq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a);
void QLA_Q2_H_vmeq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int n);
void QLA_Q2_H_xmeq_H ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_H_vmeq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_H_xmeq_pH ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_Q2_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_DiracFermion)  */


void QLA_Q2_D_meq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a);
void QLA_Q2_D_vmeq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int n);
void QLA_Q2_D_xmeq_D ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_D_vmeq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_Q2_D_xmeq_pD ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_Q2_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_ColorMatrix)  */


void QLA_Q2_M_meq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a);
void QLA_Q2_M_vmeq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_Q2_M_xmeq_M ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_M_vmeq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_Q2_M_xmeq_pM ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_Q2_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_DiracPropagator)  */


void QLA_Q2_P_meq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a);
void QLA_Q2_P_vmeq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_Q2_P_xmeq_P ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_P_vmeq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_Q2_P_xmeq_pP ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_Q2_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = zero) */


void QLA_Q2_V_eq_zero ( QLA_Q2_ColorVector *QLA_RESTRICT r);
void QLA_Q2_V_veq_zero ( QLA_Q2_ColorVector *QLA_RESTRICT r, int n);
void QLA_Q2_V_xeq_zero ( QLA_Q2_ColorVector *QLA_RESTRICT r, int *index, int n);

/*  QLA_HalfFermion (r = zero) */


void QLA_Q2_H_eq_zero ( QLA_Q2_HalfFermion *QLA_RESTRICT r);
void QLA_Q2_H_veq_zero ( QLA_Q2_HalfFermion *QLA_RESTRICT r, int n);
void QLA_Q2_H_xeq_zero ( QLA_Q2_HalfFermion *QLA_RESTRICT r, int *index, int n);

/*  QLA_DiracFermion (r = zero) */


void QLA_Q2_D_eq_zero ( QLA_Q2_DiracFermion *QLA_RESTRICT r);
void QLA_Q2_D_veq_zero ( QLA_Q2_DiracFermion *QLA_RESTRICT r, int n);
void QLA_Q2_D_xeq_zero ( QLA_Q2_DiracFermion *QLA_RESTRICT r, int *index, int n);

/*  QLA_ColorMatrix (r = zero) */


void QLA_Q2_M_eq_zero ( QLA_Q2_ColorMatrix *QLA_RESTRICT r);
void QLA_Q2_M_veq_zero ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, int n);
void QLA_Q2_M_xeq_zero ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, int *index, int n);

/*  QLA_DiracPropagator (r = zero) */


void QLA_Q2_P_eq_zero ( QLA_Q2_DiracPropagator *QLA_RESTRICT r);
void QLA_Q2_P_veq_zero ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, int n);
void QLA_Q2_P_xeq_zero ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, int *index, int n);

/*---------------------------------------------------*/
/* Gaussian random number fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = gaussian random)  */


void QLA_Q2_V_eq_gaussian_S ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q2_V_veq_gaussian_S ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q2_V_xeq_gaussian_S ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_V_veq_gaussian_pS ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q2_V_xeq_gaussian_pS ( QLA_Q2_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = gaussian random)  */


void QLA_Q2_H_eq_gaussian_S ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q2_H_veq_gaussian_S ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q2_H_xeq_gaussian_S ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_H_veq_gaussian_pS ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q2_H_xeq_gaussian_pS ( QLA_Q2_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = gaussian random)  */


void QLA_Q2_D_eq_gaussian_S ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q2_D_veq_gaussian_S ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q2_D_xeq_gaussian_S ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_D_veq_gaussian_pS ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q2_D_xeq_gaussian_pS ( QLA_Q2_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = gaussian random)  */


void QLA_Q2_M_eq_gaussian_S ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q2_M_veq_gaussian_S ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q2_M_xeq_gaussian_S ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_M_veq_gaussian_pS ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q2_M_xeq_gaussian_pS ( QLA_Q2_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = gaussian random)  */


void QLA_Q2_P_eq_gaussian_S ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q2_P_veq_gaussian_S ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q2_P_xeq_gaussian_S ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q2_P_veq_gaussian_pS ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q2_P_xeq_gaussian_pS ( QLA_Q2_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);


/* Translation to precision-generic names */

#if QLA_Precision == 'Q'

#include <qla_q2_precision_generic.h>

#endif


/* Translation to color-generic names */

#if QLA_Colors == 2

#include <qla_q2_color_generic.h>

#endif


/* Translation to fully generic names */

#if QLA_Precision == 'Q' && QLA_Colors == 2

#include <qla_q2_generic.h>

#endif
#endif /* _QLA_Q2_H */
