#ifndef _QLA_F3_H
#define _QLA_F3_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision F color 3 */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_ColorVector)  */


void QLA_F3_V_eq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_HalfFermion)  */


void QLA_F3_H_eq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_DiracFermion)  */


void QLA_F3_D_eq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_ColorMatrix)  */


void QLA_F3_M_eq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_DiracPropagator)  */


void QLA_F3_P_eq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_ColorVector)  */


void QLA_F3_V_peq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vpeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xpeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vpeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xpeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_HalfFermion)  */


void QLA_F3_H_peq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vpeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xpeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vpeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xpeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_DiracFermion)  */


void QLA_F3_D_peq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vpeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xpeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vpeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xpeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_ColorMatrix)  */


void QLA_F3_M_peq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vpeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xpeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vpeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xpeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_DiracPropagator)  */


void QLA_F3_P_peq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vpeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xpeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vpeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xpeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_ColorVector)  */


void QLA_F3_V_eqm_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veqm_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeqm_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veqm_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeqm_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_HalfFermion)  */


void QLA_F3_H_eqm_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veqm_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeqm_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veqm_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeqm_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_DiracFermion)  */


void QLA_F3_D_eqm_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veqm_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeqm_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veqm_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeqm_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_ColorMatrix)  */


void QLA_F3_M_eqm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veqm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeqm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veqm_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeqm_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_DiracPropagator)  */


void QLA_F3_P_eqm_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veqm_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeqm_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veqm_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeqm_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_ColorVector)  */


void QLA_F3_V_meq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vmeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xmeq_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vmeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xmeq_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_HalfFermion)  */


void QLA_F3_H_meq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vmeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xmeq_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vmeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xmeq_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_DiracFermion)  */


void QLA_F3_D_meq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vmeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xmeq_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vmeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xmeq_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_ColorMatrix)  */


void QLA_F3_M_meq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vmeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xmeq_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vmeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xmeq_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_DiracPropagator)  */


void QLA_F3_P_meq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vmeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xmeq_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vmeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xmeq_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Hermitian conjugate */
/*---------------------------------------------------*/


/*  r = hconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_peq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vpeq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xpeq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vpeq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xpeq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_peq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vpeq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xpeq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vpeq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xpeq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eqm_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veqm_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeqm_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veqm_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeqm_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eqm_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veqm_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeqm_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veqm_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeqm_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_meq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vmeq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xmeq_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vmeq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xmeq_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_meq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vmeq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xmeq_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vmeq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xmeq_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Transpose */
/*---------------------------------------------------*/


/*  r = transpose(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = transpose(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r += transpose(a) (QLA_ColorMatrix)  */


void QLA_F3_M_peq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vpeq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xpeq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vpeq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xpeq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r += transpose(a) (QLA_DiracPropagator)  */


void QLA_F3_P_peq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vpeq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xpeq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vpeq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xpeq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r =- transpose(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eqm_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veqm_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeqm_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veqm_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeqm_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r =- transpose(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eqm_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veqm_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeqm_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veqm_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeqm_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r -= transpose(a) (QLA_ColorMatrix)  */


void QLA_F3_M_meq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vmeq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xmeq_transpose_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vmeq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xmeq_transpose_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r -= transpose(a) (QLA_DiracPropagator)  */


void QLA_F3_P_meq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vmeq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xmeq_transpose_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vmeq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xmeq_transpose_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Complex conjugate */
/*---------------------------------------------------*/


/*  r = complconj(a) (QLA_ColorVector)  */


void QLA_F3_V_eq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r = complconj(a) (QLA_HalfFermion)  */


void QLA_F3_H_eq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = complconj(a) (QLA_DiracFermion)  */


void QLA_F3_D_eq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r = complconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r = complconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r += complconj(a) (QLA_ColorVector)  */


void QLA_F3_V_peq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vpeq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xpeq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vpeq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xpeq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r += complconj(a) (QLA_HalfFermion)  */


void QLA_F3_H_peq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vpeq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xpeq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vpeq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xpeq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += complconj(a) (QLA_DiracFermion)  */


void QLA_F3_D_peq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vpeq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xpeq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vpeq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xpeq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r += complconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_peq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vpeq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xpeq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vpeq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xpeq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r += complconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_peq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vpeq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xpeq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vpeq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xpeq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r =- complconj(a) (QLA_ColorVector)  */


void QLA_F3_V_eqm_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veqm_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeqm_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veqm_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeqm_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r =- complconj(a) (QLA_HalfFermion)  */


void QLA_F3_H_eqm_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veqm_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeqm_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veqm_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeqm_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- complconj(a) (QLA_DiracFermion)  */


void QLA_F3_D_eqm_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veqm_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeqm_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veqm_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeqm_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r =- complconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_eqm_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veqm_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeqm_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veqm_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeqm_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r =- complconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_eqm_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veqm_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeqm_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veqm_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeqm_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  r -= complconj(a) (QLA_ColorVector)  */


void QLA_F3_V_meq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vmeq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xmeq_conj_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vmeq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xmeq_conj_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  r -= complconj(a) (QLA_HalfFermion)  */


void QLA_F3_H_meq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vmeq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xmeq_conj_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vmeq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xmeq_conj_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= complconj(a) (QLA_DiracFermion)  */


void QLA_F3_D_meq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vmeq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xmeq_conj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vmeq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xmeq_conj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  r -= complconj(a) (QLA_ColorMatrix)  */


void QLA_F3_M_meq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vmeq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xmeq_conj_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vmeq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xmeq_conj_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  r -= complconj(a) (QLA_DiracPropagator)  */


void QLA_F3_P_meq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vmeq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xmeq_conj_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vmeq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xmeq_conj_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Local squared norm */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = norm2 a) */


void QLA_F3_R_eq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_R_veq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = norm2 a) */


void QLA_F3_R_eq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_R_veq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = norm2 a) */


void QLA_F3_R_eq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_R_veq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = norm2 a) */


void QLA_F3_R_eq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_veq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = norm2 a) */


void QLA_F3_R_eq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_R_veq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector (r = norm2 a) */


void QLA_F3_R_peq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_R_vpeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_R_xpeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vpeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_R_xpeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = norm2 a) */


void QLA_F3_R_peq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_R_vpeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xpeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vpeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xpeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = norm2 a) */


void QLA_F3_R_peq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_R_vpeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xpeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vpeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xpeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = norm2 a) */


void QLA_F3_R_peq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_vpeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xpeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vpeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xpeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = norm2 a) */


void QLA_F3_R_peq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_R_vpeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_R_xpeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vpeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_R_xpeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector (r = norm2 a) */


void QLA_F3_R_eqm_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_R_veqm_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_R_xeqm_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veqm_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeqm_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = norm2 a) */


void QLA_F3_R_eqm_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_R_veqm_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xeqm_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veqm_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeqm_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = norm2 a) */


void QLA_F3_R_eqm_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_R_veqm_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xeqm_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veqm_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeqm_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = norm2 a) */


void QLA_F3_R_eqm_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_veqm_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xeqm_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veqm_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeqm_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = norm2 a) */


void QLA_F3_R_eqm_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_R_veqm_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_R_xeqm_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veqm_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeqm_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector (r = norm2 a) */


void QLA_F3_R_meq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_R_vmeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_R_xmeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vmeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_R_xmeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = norm2 a) */


void QLA_F3_R_meq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_R_vmeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xmeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vmeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xmeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = norm2 a) */


void QLA_F3_R_meq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_R_vmeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_R_xmeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vmeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_R_xmeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = norm2 a) */


void QLA_F3_R_meq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_vmeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xmeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vmeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xmeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = norm2 a) */


void QLA_F3_R_meq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_R_vmeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_R_xmeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_vmeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_R_xmeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Type conversion and component extraction */
/*===================================================*/


/*---------------------------------------------------*/
/* Accessing and inserting array components */
/*---------------------------------------------------*/


/*  Accessor for QLA_ColorMatrix  */


void QLA_F3_C_eq_elem_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int i_c, int j_c);
void QLA_F3_C_veq_elem_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int i_c, int j_c, int n);
void QLA_F3_C_xeq_elem_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int i_c, int j_c, int *index, int n);
void QLA_F3_C_veq_elem_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int i_c, int j_c, int n);
void QLA_F3_C_xeq_elem_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int i_c, int j_c, int *index, int n);

/*  Insertion into  QLA_ColorMatrix  */


void QLA_F3_M_eq_elem_C ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int j_c);
void QLA_F3_M_veq_elem_C ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int j_c, int n);
void QLA_F3_M_xeq_elem_C ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int j_c, int *index, int n);
void QLA_F3_M_veq_elem_pC ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int j_c, int n);
void QLA_F3_M_xeq_elem_pC ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int j_c, int *index, int n);

/*  Accessor for QLA_HalfFermion  */


void QLA_F3_C_eq_elem_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_c, int i_s);
void QLA_F3_C_veq_elem_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_c, int i_s, int n);
void QLA_F3_C_xeq_elem_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_c, int i_s, int *index, int n);
void QLA_F3_C_veq_elem_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int i_c, int i_s, int n);
void QLA_F3_C_xeq_elem_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int i_c, int i_s, int *index, int n);

/*  Insertion into  QLA_HalfFermion  */


void QLA_F3_H_eq_elem_C ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s);
void QLA_F3_H_veq_elem_C ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int n);
void QLA_F3_H_xeq_elem_C ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int *index, int n);
void QLA_F3_H_veq_elem_pC ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int n);
void QLA_F3_H_xeq_elem_pC ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int *index, int n);

/*  Accessor for QLA_DiracFermion  */


void QLA_F3_C_eq_elem_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_c, int i_s);
void QLA_F3_C_veq_elem_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_c, int i_s, int n);
void QLA_F3_C_xeq_elem_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_c, int i_s, int *index, int n);
void QLA_F3_C_veq_elem_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int i_c, int i_s, int n);
void QLA_F3_C_xeq_elem_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int i_c, int i_s, int *index, int n);

/*  Insertion into  QLA_DiracFermion  */


void QLA_F3_D_eq_elem_C ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s);
void QLA_F3_D_veq_elem_C ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int n);
void QLA_F3_D_xeq_elem_C ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int *index, int n);
void QLA_F3_D_veq_elem_pC ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int n);
void QLA_F3_D_xeq_elem_pC ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int *index, int n);

/*  Accessor for QLA_ColorVector  */


void QLA_F3_C_eq_elem_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_c);
void QLA_F3_C_veq_elem_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_c, int n);
void QLA_F3_C_xeq_elem_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_c, int *index, int n);
void QLA_F3_C_veq_elem_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_c, int n);
void QLA_F3_C_xeq_elem_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_c, int *index, int n);

/*  Insertion into  QLA_ColorVector  */


void QLA_F3_V_eq_elem_C ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c);
void QLA_F3_V_veq_elem_C ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int n);
void QLA_F3_V_xeq_elem_C ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int *index, int n);
void QLA_F3_V_veq_elem_pC ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int n);
void QLA_F3_V_xeq_elem_pC ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int *index, int n);

/*  Accessor for QLA_DiracPropagator  */


void QLA_F3_C_eq_elem_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s);
void QLA_F3_C_veq_elem_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s, int n);
void QLA_F3_C_xeq_elem_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s, int *index, int n);
void QLA_F3_C_veq_elem_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int i_c, int i_s, int j_c, int j_s, int n);
void QLA_F3_C_xeq_elem_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int i_c, int i_s, int j_c, int j_s, int *index, int n);

/*  Insertion into  QLA_DiracPropagator  */


void QLA_F3_P_eq_elem_C ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s);
void QLA_F3_P_veq_elem_C ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s, int n);
void QLA_F3_P_xeq_elem_C ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int i_c, int i_s, int j_c, int j_s, int *index, int n);
void QLA_F3_P_veq_elem_pC ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int j_c, int j_s, int n);
void QLA_F3_P_xeq_elem_pC ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, int i_c, int i_s, int j_c, int j_s, int *index, int n);

/*---------------------------------------------------*/
/* Accessing and inserting color column vectors */
/*---------------------------------------------------*/


/*  Extract color vector from QLA_ColorMatrix  */


void QLA_F3_V_eq_colorvec_M ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int j_c);
void QLA_F3_V_veq_colorvec_M ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int j_c, int n);
void QLA_F3_V_xeq_colorvec_M ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int j_c, int *index, int n);
void QLA_F3_V_veq_colorvec_pM ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int j_c, int n);
void QLA_F3_V_xeq_colorvec_pM ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int j_c, int *index, int n);

/*  Insert color vector into  QLA_ColorMatrix  */


void QLA_F3_M_eq_colorvec_V ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int j_c);
void QLA_F3_M_veq_colorvec_V ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int j_c, int n);
void QLA_F3_M_xeq_colorvec_V ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int j_c, int *index, int n);
void QLA_F3_M_veq_colorvec_pV ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int j_c, int n);
void QLA_F3_M_xeq_colorvec_pV ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int j_c, int *index, int n);

/*  Extract color vector from QLA_HalfFermion  */


void QLA_F3_V_eq_colorvec_H ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_s);
void QLA_F3_V_veq_colorvec_H ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_s, int n);
void QLA_F3_V_xeq_colorvec_H ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int i_s, int *index, int n);
void QLA_F3_V_veq_colorvec_pH ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int i_s, int n);
void QLA_F3_V_xeq_colorvec_pH ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int i_s, int *index, int n);

/*  Insert color vector into  QLA_HalfFermion  */


void QLA_F3_H_eq_colorvec_V ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s);
void QLA_F3_H_veq_colorvec_V ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int n);
void QLA_F3_H_xeq_colorvec_V ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int *index, int n);
void QLA_F3_H_veq_colorvec_pV ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int n);
void QLA_F3_H_xeq_colorvec_pV ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int *index, int n);

/*  Extract color vector from QLA_DiracFermion  */


void QLA_F3_V_eq_colorvec_D ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_s);
void QLA_F3_V_veq_colorvec_D ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_s, int n);
void QLA_F3_V_xeq_colorvec_D ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int i_s, int *index, int n);
void QLA_F3_V_veq_colorvec_pD ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int i_s, int n);
void QLA_F3_V_xeq_colorvec_pD ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int i_s, int *index, int n);

/*  Insert color vector into  QLA_DiracFermion  */


void QLA_F3_D_eq_colorvec_V ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s);
void QLA_F3_D_veq_colorvec_V ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int n);
void QLA_F3_D_xeq_colorvec_V ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int *index, int n);
void QLA_F3_D_veq_colorvec_pV ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int n);
void QLA_F3_D_xeq_colorvec_pV ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int *index, int n);

/*  Extract color vector from QLA_DiracPropagator  */


void QLA_F3_V_eq_colorvec_P ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_s, int j_c, int j_s);
void QLA_F3_V_veq_colorvec_P ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_s, int j_c, int j_s, int n);
void QLA_F3_V_xeq_colorvec_P ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int i_s, int j_c, int j_s, int *index, int n);
void QLA_F3_V_veq_colorvec_pP ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int i_s, int j_c, int j_s, int n);
void QLA_F3_V_xeq_colorvec_pP ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int i_s, int j_c, int j_s, int *index, int n);

/*  Insert color vector into  QLA_DiracPropagator  */


void QLA_F3_P_eq_colorvec_V ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int j_c, int j_s);
void QLA_F3_P_veq_colorvec_V ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int j_c, int j_s, int n);
void QLA_F3_P_xeq_colorvec_V ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int i_s, int j_c, int j_s, int *index, int n);
void QLA_F3_P_veq_colorvec_pV ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int j_c, int j_s, int n);
void QLA_F3_P_xeq_colorvec_pV ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int i_s, int j_c, int j_s, int *index, int n);

/*---------------------------------------------------*/
/* Accessing and inserting Dirac vectors */
/*---------------------------------------------------*/


/*  Extract Dirac vector from QLA_DiracPropagator  */


void QLA_F3_D_eq_diracvec_P ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int j_c, int j_s);
void QLA_F3_D_veq_diracvec_P ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int j_c, int j_s, int n);
void QLA_F3_D_xeq_diracvec_P ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int j_c, int j_s, int *index, int n);
void QLA_F3_D_veq_diracvec_pP ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int j_c, int j_s, int n);
void QLA_F3_D_xeq_diracvec_pP ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int j_c, int j_s, int *index, int n);

/*  Insert Dirac vector into  QLA_DiracPropagator  */


void QLA_F3_P_eq_diracvec_D ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int j_c, int j_s);
void QLA_F3_P_veq_diracvec_D ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int j_c, int j_s, int n);
void QLA_F3_P_xeq_diracvec_D ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int j_c, int j_s, int *index, int n);
void QLA_F3_P_veq_diracvec_pD ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int j_c, int j_s, int n);
void QLA_F3_P_xeq_diracvec_pD ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int j_c, int j_s, int *index, int n);

/*---------------------------------------------------*/
/* Trace of color matrix */
/*---------------------------------------------------*/

void QLA_F3_R_eq_re_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_veq_re_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_re_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_re_trace_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_re_trace_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_R_eq_im_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_R_veq_im_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_R_xeq_im_trace_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_R_veq_im_trace_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_R_xeq_im_trace_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_C_eq_trace_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_C_veq_trace_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_C_xeq_trace_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_C_veq_trace_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_C_xeq_trace_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Traceless antihermitian part of colormatrix matrix */
/*---------------------------------------------------*/

void QLA_F3_M_eq_antiherm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_antiherm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_antiherm_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_antiherm_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_antiherm_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Matrix determinant */
/*---------------------------------------------------*/

void QLA_F3_C_eq_det_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_C_veq_det_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_C_xeq_det_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_C_veq_det_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_C_xeq_det_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Matrix functions */
/*---------------------------------------------------*/

void QLA_F3_M_eq_inverse_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_inverse_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_inverse_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_inverse_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_inverse_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_M_eq_sqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_sqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_sqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_sqrt_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_sqrt_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_M_eq_invsqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_invsqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_invsqrt_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_invsqrt_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_invsqrt_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_M_eq_exp_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_exp_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_exp_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_exp_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_exp_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);
void QLA_F3_M_eq_log_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_log_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_log_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_log_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_log_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Spin trace of Dirac propagator */
/*---------------------------------------------------*/

void QLA_F3_M_eq_spintrace_P ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_M_veq_spintrace_P ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_spintrace_P ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_spintrace_pP ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_spintrace_pP ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Dirac spin projection */
/*---------------------------------------------------*/

void QLA_F3_H_eq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_H_veq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_H_xeq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_H_veq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_H_xeq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_H_peq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_H_vpeq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_H_xpeq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_H_vpeq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_H_xpeq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_H_eqm_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_H_veqm_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_H_xeqm_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_H_veqm_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_H_xeqm_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_H_meq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_H_vmeq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_H_xmeq_spproj_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_H_vmeq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_H_xmeq_spproj_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);

/*---------------------------------------------------*/
/* Dirac spin reconstruction */
/*---------------------------------------------------*/

void QLA_F3_D_eq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_veq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xeq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_veq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xeq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_peq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_vpeq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xpeq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_vpeq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xpeq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_eqm_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_veqm_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xeqm_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_veqm_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xeqm_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_meq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_vmeq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xmeq_sprecon_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_vmeq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xmeq_sprecon_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);

/*---------------------------------------------------*/
/* Dirac spin projection with reconstruction */
/*---------------------------------------------------*/

void QLA_F3_D_eq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_veq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_veq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_peq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_vpeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xpeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_vpeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xpeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_eqm_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_veqm_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xeqm_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_veqm_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xeqm_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_meq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign );
void QLA_F3_D_vmeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_xmeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_vmeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int n);
void QLA_F3_D_xmeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int sign , int *index, int n);

/*---------------------------------------------------*/
/* Matrix multiply and Dirac spin projection */
/*---------------------------------------------------*/

void QLA_F3_H_eq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_eq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_veq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_xeq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_veq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_xeq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_peq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_peq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_vpeq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_xpeq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_vpeq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vpeq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_xpeq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xpeq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_eqm_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_eqm_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_veqm_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_xeqm_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_veqm_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_veqm_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_xeqm_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xeqm_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_meq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_meq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_H_vmeq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_xmeq_spproj_M_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_Ma_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_vmeq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_vmeq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_H_xmeq_spproj_pM_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_pMa_times_D ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_M_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_Ma_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_pM_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_H_xmeq_spproj_pMa_times_pD ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);

/*---------------------------------------------------*/
/* Matrix multiply and Dirac spin reconstruction */
/*---------------------------------------------------*/

void QLA_F3_D_eq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_eq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_veq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xeq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_veq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xeq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_peq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_peq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_vpeq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xpeq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_vpeq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xpeq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_eqm_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_eqm_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_veqm_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xeqm_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_veqm_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xeqm_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_meq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_meq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_vmeq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xmeq_sprecon_M_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_Ma_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_vmeq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xmeq_sprecon_pM_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_pMa_times_H ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_M_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_Ma_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_pM_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_sprecon_pMa_times_pH ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);

/*---------------------------------------------------*/
/* Matrix multiply and Dirac spin projection with reconstruction */
/*---------------------------------------------------*/

void QLA_F3_D_eq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_eq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_veq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xeq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_veq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xeq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_peq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_peq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_vpeq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xpeq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_vpeq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vpeq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xpeq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xpeq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_eqm_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_eqm_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_veqm_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xeqm_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_veqm_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_veqm_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xeqm_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xeqm_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_meq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_meq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign );
void QLA_F3_D_vmeq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_xmeq_spproj_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_vmeq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_vmeq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int n);
void QLA_F3_D_xmeq_spproj_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);
void QLA_F3_D_xmeq_spproj_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int mu, int sign , int *index, int n);

/*===================================================*/
/* Binary Operations with Constants  */
/*===================================================*/


/*---------------------------------------------------*/
/* Multiplication by real constant */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = c a (real c)  */


void QLA_F3_V_eq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = c a (real c)  */


void QLA_F3_H_eq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = c a (real c)  */


void QLA_F3_D_eq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r = c a (real c)  */


void QLA_F3_M_eq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r = c a (real c)  */


void QLA_F3_P_eq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += c a (real c)  */


void QLA_F3_V_peq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += c a (real c)  */


void QLA_F3_H_peq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += c a (real c)  */


void QLA_F3_D_peq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r += c a (real c)  */


void QLA_F3_M_peq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r += c a (real c)  */


void QLA_F3_P_peq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- c a (real c)  */


void QLA_F3_V_eqm_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- c a (real c)  */


void QLA_F3_H_eqm_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- c a (real c)  */


void QLA_F3_D_eqm_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r =- c a (real c)  */


void QLA_F3_M_eqm_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r =- c a (real c)  */


void QLA_F3_P_eqm_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= c a (real c)  */


void QLA_F3_V_meq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_r_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_r_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= c a (real c)  */


void QLA_F3_H_meq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_r_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_r_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= c a (real c)  */


void QLA_F3_D_meq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_r_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_r_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r -= c a (real c)  */


void QLA_F3_M_meq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_r_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_r_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r -= c a (real c)  */


void QLA_F3_P_meq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_r_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_r_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by complex constant */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = c a (complex c) */


void QLA_F3_V_eq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = c a (complex c) */


void QLA_F3_H_eq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = c a (complex c) */


void QLA_F3_D_eq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r = c a (complex c) */


void QLA_F3_M_eq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r = c a (complex c) */


void QLA_F3_P_eq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += c a (complex c) */


void QLA_F3_V_peq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += c a (complex c) */


void QLA_F3_H_peq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += c a (complex c) */


void QLA_F3_D_peq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r += c a (complex c) */


void QLA_F3_M_peq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r += c a (complex c) */


void QLA_F3_P_peq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- c a (complex c) */


void QLA_F3_V_eqm_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- c a (complex c) */


void QLA_F3_H_eqm_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- c a (complex c) */


void QLA_F3_D_eqm_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r =- c a (complex c) */


void QLA_F3_M_eqm_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r =- c a (complex c) */


void QLA_F3_P_eqm_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= c a (complex c) */


void QLA_F3_V_meq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_c_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_c_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= c a (complex c) */


void QLA_F3_H_meq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_c_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_c_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= c a (complex c) */


void QLA_F3_D_meq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_c_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_c_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r -= c a (complex c) */


void QLA_F3_M_meq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_c_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_c_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r -= c a (complex c) */


void QLA_F3_P_meq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_c_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_c_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by i */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = i a  */


void QLA_F3_V_eq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion r = i a  */


void QLA_F3_H_eq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion r = i a  */


void QLA_F3_D_eq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix r = i a  */


void QLA_F3_M_eq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator r = i a  */


void QLA_F3_P_eq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector r += i a  */


void QLA_F3_V_peq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vpeq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xpeq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vpeq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xpeq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion r += i a  */


void QLA_F3_H_peq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vpeq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xpeq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vpeq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xpeq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion r += i a  */


void QLA_F3_D_peq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vpeq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xpeq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vpeq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xpeq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix r += i a  */


void QLA_F3_M_peq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vpeq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xpeq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vpeq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xpeq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator r += i a  */


void QLA_F3_P_peq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vpeq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xpeq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vpeq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xpeq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector r =- i a  */


void QLA_F3_V_eqm_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veqm_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeqm_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veqm_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeqm_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion r =- i a  */


void QLA_F3_H_eqm_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veqm_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeqm_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veqm_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeqm_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion r =- i a  */


void QLA_F3_D_eqm_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veqm_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeqm_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veqm_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeqm_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix r =- i a  */


void QLA_F3_M_eqm_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veqm_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeqm_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veqm_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeqm_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator r =- i a  */


void QLA_F3_P_eqm_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veqm_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeqm_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veqm_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeqm_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorVector r -= i a  */


void QLA_F3_V_meq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_vmeq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xmeq_i_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_vmeq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_V_xmeq_i_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion r -= i a  */


void QLA_F3_H_meq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_vmeq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xmeq_i_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_vmeq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_H_xmeq_i_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion r -= i a  */


void QLA_F3_D_meq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_vmeq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xmeq_i_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_vmeq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_D_xmeq_i_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix r -= i a  */


void QLA_F3_M_meq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_vmeq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xmeq_i_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_vmeq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_M_xmeq_i_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator r -= i a  */


void QLA_F3_P_meq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_vmeq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xmeq_i_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_vmeq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_P_xmeq_i_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Left multiplication by gamma matrix */
/*---------------------------------------------------*/


/*  QLA_DiracFermion (r = gamma*a) */


void QLA_F3_D_eq_gamma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu);
void QLA_F3_D_veq_gamma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int n);
void QLA_F3_D_xeq_gamma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int mu, int *index, int n);
void QLA_F3_D_veq_gamma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int n);
void QLA_F3_D_xeq_gamma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int mu, int *index, int n);

/*  QLA_DiracPropagator (r = gamma*a) */


void QLA_F3_P_eq_gamma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu);
void QLA_F3_P_veq_gamma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu, int n);
void QLA_F3_P_xeq_gamma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu, int *index, int n);
void QLA_F3_P_veq_gamma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int mu, int n);
void QLA_F3_P_xeq_gamma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int mu, int *index, int n);

/*---------------------------------------------------*/
/* Right multiplication by gamma matrix */
/*---------------------------------------------------*/


/*  QLA_DiracPropagator (r = a*gamma) */


void QLA_F3_P_eq_P_times_gamma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu);
void QLA_F3_P_veq_P_times_gamma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu, int n);
void QLA_F3_P_xeq_P_times_gamma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int mu, int *index, int n);
void QLA_F3_P_veq_pP_times_gamma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int mu, int n);
void QLA_F3_P_xeq_pP_times_gamma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int mu, int *index, int n);

/*===================================================*/
/* Binary Operations with Fields  */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = a + b)  */


void QLA_F3_V_eq_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (r = a - b) */


void QLA_F3_V_eq_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (r = a + b)  */


void QLA_F3_H_eq_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (r = a - b) */


void QLA_F3_H_eq_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (r = a + b)  */


void QLA_F3_D_eq_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (r = a - b) */


void QLA_F3_D_eq_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a + b)  */


void QLA_F3_M_eq_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a - b) */


void QLA_F3_M_eq_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a + b)  */


void QLA_F3_P_eq_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a - b) */


void QLA_F3_P_eq_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by a real field */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = f a (QLA_Real f) */


void QLA_F3_V_eq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = f a (QLA_Real f) */


void QLA_F3_H_eq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = f a (QLA_Real f) */


void QLA_F3_D_eq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r = f a (QLA_Real f) */


void QLA_F3_M_eq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r = f a (QLA_Real f) */


void QLA_F3_P_eq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += f a (QLA_Real f) */


void QLA_F3_V_peq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vpeq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vpeq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xpeq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xpeq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += f a (QLA_Real f) */


void QLA_F3_H_peq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vpeq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vpeq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xpeq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xpeq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += f a (QLA_Real f) */


void QLA_F3_D_peq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vpeq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vpeq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xpeq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xpeq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r += f a (QLA_Real f) */


void QLA_F3_M_peq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r += f a (QLA_Real f) */


void QLA_F3_P_peq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- f a (QLA_Real f) */


void QLA_F3_V_eqm_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veqm_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veqm_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeqm_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeqm_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- f a (QLA_Real f) */


void QLA_F3_H_eqm_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veqm_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veqm_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeqm_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeqm_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- f a (QLA_Real f) */


void QLA_F3_D_eqm_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veqm_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veqm_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeqm_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeqm_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r =- f a (QLA_Real f) */


void QLA_F3_M_eqm_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r =- f a (QLA_Real f) */


void QLA_F3_P_eqm_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= f a (QLA_Real f) */


void QLA_F3_V_meq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_R_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vmeq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vmeq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_pR_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xmeq_R_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xmeq_pR_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= f a (QLA_Real f) */


void QLA_F3_H_meq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_R_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vmeq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vmeq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_pR_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xmeq_R_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xmeq_pR_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= f a (QLA_Real f) */


void QLA_F3_D_meq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_R_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vmeq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vmeq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_pR_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xmeq_R_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xmeq_pR_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r -= f a (QLA_Real f) */


void QLA_F3_M_meq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_R_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pR_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_R_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pR_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r -= f a (QLA_Real f) */


void QLA_F3_P_meq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_R_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pR_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_R_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pR_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication: uniform complex types */
/*---------------------------------------------------*/


/*  QLA_ColorMatrix (r = a * b) */


void QLA_F3_M_eq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a * b) */


void QLA_F3_M_eq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a * b) */


void QLA_F3_M_eq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a * b) */


void QLA_F3_M_eq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a * b) */


void QLA_F3_P_eq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a * b) */


void QLA_F3_P_eq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a * b) */


void QLA_F3_P_eq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a * b) */


void QLA_F3_P_eq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r += a * b) */


void QLA_F3_M_peq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r += a * b) */


void QLA_F3_M_peq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r += a * b) */


void QLA_F3_M_peq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r += a * b) */


void QLA_F3_M_peq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r += a * b) */


void QLA_F3_P_peq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r += a * b) */


void QLA_F3_P_peq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r += a * b) */


void QLA_F3_P_peq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r += a * b) */


void QLA_F3_P_peq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r =- a * b) */


void QLA_F3_M_eqm_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r =- a * b) */


void QLA_F3_M_eqm_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r =- a * b) */


void QLA_F3_M_eqm_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r =- a * b) */


void QLA_F3_M_eqm_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r =- a * b) */


void QLA_F3_P_eqm_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r =- a * b) */


void QLA_F3_P_eqm_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r =- a * b) */


void QLA_F3_P_eqm_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r =- a * b) */


void QLA_F3_P_eqm_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r -= a * b) */


void QLA_F3_M_meq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_M_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pM_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_M_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pM_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r -= a * b) */


void QLA_F3_M_meq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_M_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pM_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_M_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pM_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r -= a * b) */


void QLA_F3_M_meq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_Ma_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pMa_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_Ma_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pMa_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r -= a * b) */


void QLA_F3_M_meq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_Ma_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pMa_times_Ma ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_Ma_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pMa_times_pMa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r -= a * b) */


void QLA_F3_P_meq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_P_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pP_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_P_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pP_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r -= a * b) */


void QLA_F3_P_meq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_P_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pP_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_P_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pP_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r -= a * b) */


void QLA_F3_P_meq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Pa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pPa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Pa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pPa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r -= a * b) */


void QLA_F3_P_meq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Pa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pPa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Pa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pPa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by a complex field */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = f a (QLA_Complex f) */


void QLA_F3_V_eq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = f a (QLA_Complex f) */


void QLA_F3_H_eq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = f a (QLA_Complex f) */


void QLA_F3_D_eq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r = f a (QLA_Complex f) */


void QLA_F3_M_eq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r = f a (QLA_Complex f) */


void QLA_F3_P_eq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += f a (QLA_Complex f) */


void QLA_F3_V_peq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vpeq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vpeq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xpeq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xpeq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += f a (QLA_Complex f) */


void QLA_F3_H_peq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vpeq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vpeq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xpeq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xpeq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += f a (QLA_Complex f) */


void QLA_F3_D_peq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vpeq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vpeq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xpeq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xpeq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r += f a (QLA_Complex f) */


void QLA_F3_M_peq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vpeq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r += f a (QLA_Complex f) */


void QLA_F3_P_peq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- f a (QLA_Complex f) */


void QLA_F3_V_eqm_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veqm_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veqm_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeqm_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeqm_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- f a (QLA_Complex f) */


void QLA_F3_H_eqm_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veqm_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veqm_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeqm_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeqm_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- f a (QLA_Complex f) */


void QLA_F3_D_eqm_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veqm_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veqm_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeqm_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeqm_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r =- f a (QLA_Complex f) */


void QLA_F3_M_eqm_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_veqm_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r =- f a (QLA_Complex f) */


void QLA_F3_P_eqm_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= f a (QLA_Complex f) */


void QLA_F3_V_meq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_C_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vmeq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vmeq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_pC_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xmeq_C_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xmeq_pC_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= f a (QLA_Complex f) */


void QLA_F3_H_meq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_C_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vmeq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vmeq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_pC_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xmeq_C_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xmeq_pC_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= f a (QLA_Complex f) */


void QLA_F3_D_meq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_C_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vmeq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vmeq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_pC_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xmeq_C_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xmeq_pC_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix r -= f a (QLA_Complex f) */


void QLA_F3_M_meq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_M_vmeq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_C_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pC_times_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_C_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pC_times_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator r -= f a (QLA_Complex f) */


void QLA_F3_P_meq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_C_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pC_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_C_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pC_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Color matrix field times vector field */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_eq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_eq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_eq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_eq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_peq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vpeq_M_times_pV ( QLA_F3_ColorVector * r, QLA_F3_ColorMatrix * a, QLA_F3_ColorVector **b, int n);
void QLA_F3_V_vpeq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xpeq_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xpeq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_peq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vpeq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vpeq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xpeq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xpeq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_peq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vpeq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vpeq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xpeq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xpeq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_peq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vpeq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xpeq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vpeq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vpeq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vpeq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xpeq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xpeq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xpeq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_peq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vpeq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xpeq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vpeq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vpeq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vpeq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xpeq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xpeq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xpeq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_peq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vpeq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xpeq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vpeq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vpeq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vpeq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xpeq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xpeq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xpeq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eqm_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veqm_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veqm_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeqm_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeqm_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_eqm_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veqm_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veqm_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeqm_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeqm_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_eqm_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veqm_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veqm_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeqm_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeqm_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eqm_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_veqm_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xeqm_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veqm_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_veqm_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_veqm_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeqm_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeqm_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeqm_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_eqm_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_veqm_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xeqm_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veqm_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_veqm_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_veqm_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeqm_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeqm_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeqm_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_eqm_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_veqm_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xeqm_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veqm_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_veqm_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_veqm_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeqm_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeqm_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeqm_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_meq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_M_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vmeq_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vmeq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_pM_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xmeq_M_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xmeq_pM_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_meq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_M_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vmeq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vmeq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_pM_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xmeq_M_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xmeq_pM_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_meq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_M_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vmeq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vmeq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_pM_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xmeq_M_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xmeq_pM_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_meq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_V_vmeq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_xmeq_Ma_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_vmeq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_V_vmeq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_vmeq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_V_xmeq_pMa_times_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xmeq_Ma_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xmeq_pMa_times_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_H_meq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_H_vmeq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_xmeq_Ma_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_vmeq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_H_vmeq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_vmeq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_H_xmeq_pMa_times_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xmeq_Ma_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xmeq_pMa_times_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_D_meq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_D_vmeq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_xmeq_Ma_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_vmeq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_D_vmeq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_vmeq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_D_xmeq_pMa_times_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xmeq_Ma_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xmeq_pMa_times_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* multiple color matrix fields times vector fields */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_veq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xeq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_veq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_veq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_veq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xeq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xeq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xeq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r = (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_veq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xeq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_veq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_veq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_veq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xeq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xeq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xeq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_peq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_vpeq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xpeq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_vpeq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_vpeq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_vpeq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xpeq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xpeq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xpeq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r += (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_peq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_vpeq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xpeq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_vpeq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_vpeq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_vpeq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xpeq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xpeq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xpeq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eqm_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_veqm_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xeqm_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_veqm_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_veqm_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_veqm_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xeqm_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xeqm_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xeqm_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r =- (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_eqm_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_veqm_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xeqm_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_veqm_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_veqm_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_veqm_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xeqm_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xeqm_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xeqm_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_meq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_vmeq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xmeq_nM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_vmeq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_vmeq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_vmeq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xmeq_npM_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xmeq_nM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xmeq_npM_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*  QLA_ColorVector r -= (adj) f a (QLA_ColorMatrix f) */


void QLA_F3_V_meq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int nd);
void QLA_F3_V_vmeq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_xmeq_nMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_vmeq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n, int nd);
void QLA_F3_V_vmeq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_vmeq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int n, int nd);
void QLA_F3_V_xmeq_npMa_times_nV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n, int nd);
void QLA_F3_V_xmeq_nMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);
void QLA_F3_V_xmeq_npMa_times_npV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT **a, QLA_F3_ColorVector *QLA_RESTRICT **b, int *index, int n, int nd);

/*---------------------------------------------------*/
/* Multiplication of color matrix field and propagator field */
/*---------------------------------------------------*/


/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_veqm_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_M_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pM_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_M_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pM_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_M_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pM_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_M_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pM_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Ma_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pMa_times_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Ma_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pMa_times_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Ma_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pMa_times_Pa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Ma_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pMa_times_pPa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r = f a (ColorMatrix f or a) */


void QLA_F3_P_eq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vpeq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vpeq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r += f a (ColorMatrix f or a) */


void QLA_F3_P_peq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vpeq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xpeq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vpeq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vpeq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vpeq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xpeq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xpeq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xpeq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veqm_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veqm_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veqm_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r =- f a (ColorMatrix f or a) */


void QLA_F3_P_eqm_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_veqm_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xeqm_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veqm_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_veqm_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_veqm_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeqm_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeqm_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeqm_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vmeq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_P_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pP_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_P_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pP_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vmeq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_P_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pP_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_P_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pP_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Pa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pPa_times_M ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Pa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pPa_times_pM ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  DiracPropagator r -= f a (ColorMatrix f or a) */


void QLA_F3_P_meq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_P_vmeq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_xmeq_Pa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_vmeq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_P_vmeq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_vmeq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_P_xmeq_pPa_times_Ma ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xmeq_Pa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xmeq_pPa_times_pMa ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Color matrix from outer product */
/*---------------------------------------------------*/


/*  QLA_Real (r = a * b) */


void QLA_F3_M_eq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_M_veq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r += a * b) */


void QLA_F3_M_peq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_M_vpeq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_xpeq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vpeq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_vpeq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_vpeq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_xpeq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xpeq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xpeq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r =- a * b) */


void QLA_F3_M_eqm_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_M_veqm_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_xeqm_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veqm_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_veqm_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_veqm_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeqm_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeqm_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeqm_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r -= a * b) */


void QLA_F3_M_meq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_M_vmeq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_xmeq_V_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_vmeq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_M_vmeq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_vmeq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_M_xmeq_pV_times_Va ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xmeq_V_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xmeq_pV_times_pVa ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Local inner product */
/*---------------------------------------------------*/


/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_F3_C_eq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_C_veq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_xeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_veq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_veq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_F3_C_eq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_C_veq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_veq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_veq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_F3_C_eq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_C_veq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_veq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_veq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_F3_C_eq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_C_veq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_xeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_veq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_veq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_F3_C_eq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_C_veq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_xeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_veq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_veq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_F3_C_peq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_C_vpeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_xpeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vpeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_vpeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_vpeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_xpeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xpeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xpeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_F3_C_peq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_C_vpeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xpeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vpeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_vpeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_vpeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xpeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xpeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xpeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_F3_C_peq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_C_vpeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xpeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vpeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_vpeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_vpeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xpeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xpeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xpeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_F3_C_peq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_C_vpeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_xpeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vpeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_vpeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_vpeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_xpeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xpeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xpeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_F3_C_peq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_C_vpeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_xpeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vpeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_vpeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_vpeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_xpeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xpeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xpeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_F3_C_eqm_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_C_veqm_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_xeqm_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veqm_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_veqm_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_veqm_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeqm_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeqm_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeqm_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_F3_C_eqm_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_C_veqm_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xeqm_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veqm_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_veqm_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_veqm_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeqm_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeqm_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeqm_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_F3_C_eqm_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_C_veqm_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xeqm_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veqm_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_veqm_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_veqm_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeqm_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeqm_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeqm_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_F3_C_eqm_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_C_veqm_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_xeqm_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veqm_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_veqm_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_veqm_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeqm_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeqm_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeqm_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_F3_C_eqm_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_C_veqm_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_xeqm_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_veqm_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_veqm_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_veqm_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_xeqm_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xeqm_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xeqm_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_F3_C_meq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_C_vmeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_xmeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vmeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_C_vmeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_vmeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_C_xmeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xmeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xmeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_F3_C_meq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_C_vmeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xmeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vmeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_vmeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_vmeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xmeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xmeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xmeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_F3_C_meq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_C_vmeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_xmeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vmeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_C_vmeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_vmeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_C_xmeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xmeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xmeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_F3_C_meq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_C_vmeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_xmeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vmeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_C_vmeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_vmeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_C_xmeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xmeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xmeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_F3_C_meq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_C_vmeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_xmeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_vmeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_C_vmeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_vmeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_C_xmeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_C_xmeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_C_xmeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_F3_R_eq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_R_veq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_xeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_veq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_veq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_eq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_R_veq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_veq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_veq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_eq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_R_veq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_veq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_veq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_F3_R_eq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_R_veq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_xeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_veq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_veq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_F3_R_eq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_R_veq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_xeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_veq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_veq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_F3_R_peq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_R_vpeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_xpeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vpeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_vpeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_vpeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_xpeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xpeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xpeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_peq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_R_vpeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xpeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vpeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_vpeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_vpeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xpeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xpeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xpeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_peq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_R_vpeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xpeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vpeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_vpeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_vpeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xpeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xpeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xpeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_F3_R_peq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_R_vpeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_xpeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vpeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_vpeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_vpeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_xpeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xpeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xpeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_F3_R_peq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_R_vpeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_xpeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vpeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_vpeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_vpeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_xpeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xpeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xpeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_F3_R_eqm_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_R_veqm_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_xeqm_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veqm_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_veqm_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_veqm_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeqm_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeqm_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeqm_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_eqm_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_R_veqm_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xeqm_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veqm_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_veqm_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_veqm_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeqm_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeqm_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeqm_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_eqm_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_R_veqm_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xeqm_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veqm_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_veqm_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_veqm_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeqm_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeqm_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeqm_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_F3_R_eqm_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_R_veqm_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_xeqm_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veqm_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_veqm_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_veqm_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeqm_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeqm_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeqm_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_F3_R_eqm_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_R_veqm_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_xeqm_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_veqm_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_veqm_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_veqm_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_xeqm_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xeqm_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xeqm_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_F3_R_meq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_R_vmeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_xmeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vmeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_R_vmeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_vmeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_R_xmeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xmeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xmeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_meq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_R_vmeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xmeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vmeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_vmeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_vmeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xmeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xmeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xmeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_F3_R_meq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_R_vmeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_xmeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vmeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_R_vmeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_vmeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_R_xmeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xmeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xmeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_F3_R_meq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_R_vmeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_xmeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vmeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_R_vmeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_vmeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_R_xmeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xmeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xmeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_F3_R_meq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_R_vmeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_xmeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_vmeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_R_vmeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_vmeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_R_xmeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_R_xmeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_R_xmeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Ternary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction with Real Scalar Multiplication */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = (a*b + c) (real a)  */


void QLA_F3_V_eq_r_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c);
void QLA_F3_V_veq_r_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_xeq_r_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_veq_r_times_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_veq_r_times_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_veq_r_times_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_xeq_r_times_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_xeq_r_times_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_V_xeq_r_times_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorVector r = (a*b - c) (real a)  */


void QLA_F3_V_eq_r_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c);
void QLA_F3_V_veq_r_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_xeq_r_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_veq_r_times_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_veq_r_times_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_veq_r_times_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_xeq_r_times_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_xeq_r_times_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_V_xeq_r_times_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);

/*  QLA_HalfFermion r = (a*b + c) (real a)  */


void QLA_F3_H_eq_r_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c);
void QLA_F3_H_veq_r_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_xeq_r_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_veq_r_times_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_veq_r_times_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_veq_r_times_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_xeq_r_times_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_xeq_r_times_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_H_xeq_r_times_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_HalfFermion r = (a*b - c) (real a)  */


void QLA_F3_H_eq_r_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c);
void QLA_F3_H_veq_r_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_xeq_r_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_veq_r_times_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_veq_r_times_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_veq_r_times_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_xeq_r_times_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_xeq_r_times_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_H_xeq_r_times_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracFermion r = (a*b + c) (real a)  */


void QLA_F3_D_eq_r_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c);
void QLA_F3_D_veq_r_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_xeq_r_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_veq_r_times_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_veq_r_times_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_veq_r_times_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_xeq_r_times_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_xeq_r_times_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_D_xeq_r_times_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracFermion r = (a*b - c) (real a)  */


void QLA_F3_D_eq_r_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c);
void QLA_F3_D_veq_r_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_xeq_r_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_veq_r_times_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_veq_r_times_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_veq_r_times_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_xeq_r_times_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_xeq_r_times_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_D_xeq_r_times_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorMatrix r = (a*b + c) (real a)  */


void QLA_F3_M_eq_r_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c);
void QLA_F3_M_veq_r_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_xeq_r_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_veq_r_times_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_veq_r_times_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_veq_r_times_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_xeq_r_times_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_xeq_r_times_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_M_xeq_r_times_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorMatrix r = (a*b - c) (real a)  */


void QLA_F3_M_eq_r_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c);
void QLA_F3_M_veq_r_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_xeq_r_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_veq_r_times_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_veq_r_times_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_veq_r_times_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_xeq_r_times_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_xeq_r_times_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_M_xeq_r_times_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracPropagator r = (a*b + c) (real a)  */


void QLA_F3_P_eq_r_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c);
void QLA_F3_P_veq_r_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_xeq_r_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_veq_r_times_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_veq_r_times_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_veq_r_times_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_xeq_r_times_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_xeq_r_times_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_P_xeq_r_times_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracPropagator r = (a*b - c) (real a)  */


void QLA_F3_P_eq_r_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c);
void QLA_F3_P_veq_r_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_xeq_r_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_veq_r_times_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_veq_r_times_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_veq_r_times_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_xeq_r_times_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_xeq_r_times_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_P_xeq_r_times_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Real *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);

/*---------------------------------------------------*/
/* Addition and Subtraction with Complex Scalar Multiplication */
/*---------------------------------------------------*/


/*  QLA_ColorVector r = (a*b + c) (complex a)  */


void QLA_F3_V_eq_c_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c);
void QLA_F3_V_veq_c_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_xeq_c_times_V_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_veq_c_times_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_veq_c_times_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_veq_c_times_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_xeq_c_times_pV_plus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_xeq_c_times_V_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_V_xeq_c_times_pV_plus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorVector r = (a*b - c) (complex a)  */


void QLA_F3_V_eq_c_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c);
void QLA_F3_V_veq_c_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_xeq_c_times_V_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_veq_c_times_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int n);
void QLA_F3_V_veq_c_times_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_veq_c_times_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int n);
void QLA_F3_V_xeq_c_times_pV_minus_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT c, int *index, int n);
void QLA_F3_V_xeq_c_times_V_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_V_xeq_c_times_pV_minus_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, QLA_F3_ColorVector *QLA_RESTRICT *c, int *index, int n);

/*  QLA_HalfFermion r = (a*b + c) (complex a)  */


void QLA_F3_H_eq_c_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c);
void QLA_F3_H_veq_c_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_xeq_c_times_H_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_veq_c_times_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_veq_c_times_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_veq_c_times_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_xeq_c_times_pH_plus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_xeq_c_times_H_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_H_xeq_c_times_pH_plus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_HalfFermion r = (a*b - c) (complex a)  */


void QLA_F3_H_eq_c_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c);
void QLA_F3_H_veq_c_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_xeq_c_times_H_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_veq_c_times_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int n);
void QLA_F3_H_veq_c_times_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_veq_c_times_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int n);
void QLA_F3_H_xeq_c_times_pH_minus_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_H_xeq_c_times_H_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_H_xeq_c_times_pH_minus_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, QLA_F3_HalfFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracFermion r = (a*b + c) (complex a)  */


void QLA_F3_D_eq_c_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c);
void QLA_F3_D_veq_c_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_xeq_c_times_D_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_veq_c_times_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_veq_c_times_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_veq_c_times_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_xeq_c_times_pD_plus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_xeq_c_times_D_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_D_xeq_c_times_pD_plus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracFermion r = (a*b - c) (complex a)  */


void QLA_F3_D_eq_c_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c);
void QLA_F3_D_veq_c_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_xeq_c_times_D_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_veq_c_times_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int n);
void QLA_F3_D_veq_c_times_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_veq_c_times_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int n);
void QLA_F3_D_xeq_c_times_pD_minus_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT c, int *index, int n);
void QLA_F3_D_xeq_c_times_D_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_D_xeq_c_times_pD_minus_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, QLA_F3_DiracFermion *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorMatrix r = (a*b + c) (complex a)  */


void QLA_F3_M_eq_c_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c);
void QLA_F3_M_veq_c_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_xeq_c_times_M_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_veq_c_times_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_veq_c_times_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_veq_c_times_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_xeq_c_times_pM_plus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_xeq_c_times_M_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_M_xeq_c_times_pM_plus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);

/*  QLA_ColorMatrix r = (a*b - c) (complex a)  */


void QLA_F3_M_eq_c_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c);
void QLA_F3_M_veq_c_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_xeq_c_times_M_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_veq_c_times_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int n);
void QLA_F3_M_veq_c_times_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_veq_c_times_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int n);
void QLA_F3_M_xeq_c_times_pM_minus_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT c, int *index, int n);
void QLA_F3_M_xeq_c_times_M_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_M_xeq_c_times_pM_minus_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, QLA_F3_ColorMatrix *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracPropagator r = (a*b + c) (complex a)  */


void QLA_F3_P_eq_c_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c);
void QLA_F3_P_veq_c_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_xeq_c_times_P_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_veq_c_times_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_veq_c_times_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_veq_c_times_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_xeq_c_times_pP_plus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_xeq_c_times_P_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_P_xeq_c_times_pP_plus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);

/*  QLA_DiracPropagator r = (a*b - c) (complex a)  */


void QLA_F3_P_eq_c_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c);
void QLA_F3_P_veq_c_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_xeq_c_times_P_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_veq_c_times_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int n);
void QLA_F3_P_veq_c_times_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_veq_c_times_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int n);
void QLA_F3_P_xeq_c_times_pP_minus_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT c, int *index, int n);
void QLA_F3_P_xeq_c_times_P_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);
void QLA_F3_P_xeq_c_times_pP_minus_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, QLA_F3_DiracPropagator *QLA_RESTRICT *c, int *index, int n);

/*===================================================*/
/* Boolean and Bit Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copymask */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = a mask b) */


void QLA_F3_V_eq_V_mask_I ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_F3_V_veq_V_mask_I ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_V_xeq_V_mask_I ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_veq_pV_mask_I ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_V_veq_V_mask_pI ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_V_veq_pV_mask_pI ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_V_xeq_pV_mask_I ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_V_xeq_V_mask_pI ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_V_xeq_pV_mask_pI ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (r = a mask b) */


void QLA_F3_H_eq_H_mask_I ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_F3_H_veq_H_mask_I ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_H_xeq_H_mask_I ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_veq_pH_mask_I ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_H_veq_H_mask_pI ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_H_veq_pH_mask_pI ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_H_xeq_pH_mask_I ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_H_xeq_H_mask_pI ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_H_xeq_pH_mask_pI ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (r = a mask b) */


void QLA_F3_D_eq_D_mask_I ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_F3_D_veq_D_mask_I ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_D_xeq_D_mask_I ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_veq_pD_mask_I ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_D_veq_D_mask_pI ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_D_veq_pD_mask_pI ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_D_xeq_pD_mask_I ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_D_xeq_D_mask_pI ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_D_xeq_pD_mask_pI ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (r = a mask b) */


void QLA_F3_M_eq_M_mask_I ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_F3_M_veq_M_mask_I ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_M_xeq_M_mask_I ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_veq_pM_mask_I ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_M_veq_M_mask_pI ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_M_veq_pM_mask_pI ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_M_xeq_pM_mask_I ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_M_xeq_M_mask_pI ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_M_xeq_pM_mask_pI ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (r = a mask b) */


void QLA_F3_P_eq_P_mask_I ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_F3_P_veq_P_mask_I ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_P_xeq_P_mask_I ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_veq_pP_mask_I ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_F3_P_veq_P_mask_pI ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_P_veq_pP_mask_pI ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_F3_P_xeq_pP_mask_I ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_F3_P_xeq_P_mask_pI ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_P_xeq_pP_mask_pI ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Reductions               */
/*===================================================*/


/*---------------------------------------------------*/
/* Global squared norm uniform precision */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum norm2 a) */


void QLA_F3_r_eq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_r_veq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_r_xeq_norm2_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_r_veq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_r_xeq_norm2_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = sum norm2 a) */


void QLA_F3_r_eq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_r_veq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_r_xeq_norm2_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_r_veq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_r_xeq_norm2_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = sum norm2 a) */


void QLA_F3_r_eq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_r_veq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_r_xeq_norm2_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_r_veq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_r_xeq_norm2_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = sum norm2 a) */


void QLA_F3_r_eq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_r_veq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_r_xeq_norm2_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_r_veq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_r_xeq_norm2_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = sum norm2 a) */


void QLA_F3_r_eq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_r_veq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_r_xeq_norm2_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_r_veq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_r_xeq_norm2_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Global inner product uniform precision */
/*---------------------------------------------------*/


/*  QLA_ColorVector (c = trace adj(a) dot b) */


void QLA_F3_c_eq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_c_veq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_c_xeq_V_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_veq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_c_veq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_c_veq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_c_xeq_pV_dot_V ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_xeq_V_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_c_xeq_pV_dot_pV ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = trace adj(a) dot b) */


void QLA_F3_c_eq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_c_veq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_c_xeq_H_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_veq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_c_veq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_c_veq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_c_xeq_pH_dot_H ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_xeq_H_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_c_xeq_pH_dot_pH ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = trace adj(a) dot b) */


void QLA_F3_c_eq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_c_veq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_c_xeq_D_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_veq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_c_veq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_c_veq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_c_xeq_pD_dot_D ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_xeq_D_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_c_xeq_pD_dot_pD ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = trace adj(a) dot b) */


void QLA_F3_c_eq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_c_veq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_c_xeq_M_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_veq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_c_veq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_c_veq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_c_xeq_pM_dot_M ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_xeq_M_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_c_xeq_pM_dot_pM ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = trace adj(a) dot b) */


void QLA_F3_c_eq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_c_veq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_c_xeq_P_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_veq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_c_veq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_c_veq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_c_xeq_pP_dot_P ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_c_xeq_P_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_c_xeq_pP_dot_pP ( QLA_F_Complex *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorVector (c = Re trace adj(a) dot b) */


void QLA_F3_r_eq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b);
void QLA_F3_r_veq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_r_xeq_re_V_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_veq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int n);
void QLA_F3_r_veq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_r_veq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int n);
void QLA_F3_r_xeq_re_pV_dot_V ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_xeq_re_V_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_r_xeq_re_pV_dot_pV ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, QLA_F3_ColorVector *QLA_RESTRICT *b, int *index, int n);

/*  QLA_HalfFermion (c = Re trace adj(a) dot b) */


void QLA_F3_r_eq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b);
void QLA_F3_r_veq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_r_xeq_re_H_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_veq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int n);
void QLA_F3_r_veq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_r_veq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int n);
void QLA_F3_r_xeq_re_pH_dot_H ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_xeq_re_H_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_r_xeq_re_pH_dot_pH ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, QLA_F3_HalfFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracFermion (c = Re trace adj(a) dot b) */


void QLA_F3_r_eq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b);
void QLA_F3_r_veq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_r_xeq_re_D_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_veq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int n);
void QLA_F3_r_veq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_r_veq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int n);
void QLA_F3_r_xeq_re_pD_dot_D ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_xeq_re_D_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_r_xeq_re_pD_dot_pD ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, QLA_F3_DiracFermion *QLA_RESTRICT *b, int *index, int n);

/*  QLA_ColorMatrix (c = Re trace adj(a) dot b) */


void QLA_F3_r_eq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b);
void QLA_F3_r_veq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_r_xeq_re_M_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_veq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int n);
void QLA_F3_r_veq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_r_veq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int n);
void QLA_F3_r_xeq_re_pM_dot_M ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_xeq_re_M_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_r_xeq_re_pM_dot_pM ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, QLA_F3_ColorMatrix *QLA_RESTRICT *b, int *index, int n);

/*  QLA_DiracPropagator (c = Re trace adj(a) dot b) */


void QLA_F3_r_eq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b);
void QLA_F3_r_veq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_r_xeq_re_P_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_veq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int n);
void QLA_F3_r_veq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_r_veq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int n);
void QLA_F3_r_xeq_re_pP_dot_P ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT b, int *index, int n);
void QLA_F3_r_xeq_re_P_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);
void QLA_F3_r_xeq_re_pP_dot_pP ( QLA_F_Real *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, QLA_F3_DiracPropagator *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Global sum uniform precision */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = sum a) */


void QLA_F3_v_eq_sum_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_v_veq_sum_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_v_xeq_sum_V ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);
void QLA_F3_v_veq_sum_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int n);
void QLA_F3_v_xeq_sum_pV ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = sum a) */


void QLA_F3_h_eq_sum_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_h_veq_sum_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_h_xeq_sum_H ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_h_veq_sum_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int n);
void QLA_F3_h_xeq_sum_pH ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = sum a) */


void QLA_F3_d_eq_sum_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_d_veq_sum_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_d_xeq_sum_D ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);
void QLA_F3_d_veq_sum_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int n);
void QLA_F3_d_xeq_sum_pD ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = sum a) */


void QLA_F3_m_eq_sum_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_m_veq_sum_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_m_xeq_sum_M ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);
void QLA_F3_m_veq_sum_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int n);
void QLA_F3_m_xeq_sum_pM ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = sum a) */


void QLA_F3_p_eq_sum_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_p_veq_sum_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_p_xeq_sum_P ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);
void QLA_F3_p_veq_sum_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int n);
void QLA_F3_p_xeq_sum_pP ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = zero) */


void QLA_F3_V_eq_zero ( QLA_F3_ColorVector *QLA_RESTRICT r);
void QLA_F3_V_veq_zero ( QLA_F3_ColorVector *QLA_RESTRICT r, int n);
void QLA_F3_V_xeq_zero ( QLA_F3_ColorVector *QLA_RESTRICT r, int *index, int n);

/*  QLA_HalfFermion (r = zero) */


void QLA_F3_H_eq_zero ( QLA_F3_HalfFermion *QLA_RESTRICT r);
void QLA_F3_H_veq_zero ( QLA_F3_HalfFermion *QLA_RESTRICT r, int n);
void QLA_F3_H_xeq_zero ( QLA_F3_HalfFermion *QLA_RESTRICT r, int *index, int n);

/*  QLA_DiracFermion (r = zero) */


void QLA_F3_D_eq_zero ( QLA_F3_DiracFermion *QLA_RESTRICT r);
void QLA_F3_D_veq_zero ( QLA_F3_DiracFermion *QLA_RESTRICT r, int n);
void QLA_F3_D_xeq_zero ( QLA_F3_DiracFermion *QLA_RESTRICT r, int *index, int n);

/*  QLA_ColorMatrix (r = zero) */


void QLA_F3_M_eq_zero ( QLA_F3_ColorMatrix *QLA_RESTRICT r);
void QLA_F3_M_veq_zero ( QLA_F3_ColorMatrix *QLA_RESTRICT r, int n);
void QLA_F3_M_xeq_zero ( QLA_F3_ColorMatrix *QLA_RESTRICT r, int *index, int n);

/*  QLA_DiracPropagator (r = zero) */


void QLA_F3_P_eq_zero ( QLA_F3_DiracPropagator *QLA_RESTRICT r);
void QLA_F3_P_veq_zero ( QLA_F3_DiracPropagator *QLA_RESTRICT r, int n);
void QLA_F3_P_xeq_zero ( QLA_F3_DiracPropagator *QLA_RESTRICT r, int *index, int n);

/*---------------------------------------------------*/
/* Constant fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = const) */


void QLA_F3_V_eq_v ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a);
void QLA_F3_V_veq_v ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int n);
void QLA_F3_V_xeq_v ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_F3_ColorVector *QLA_RESTRICT a, int *index, int n);

/*  QLA_HalfFermion (r = const) */


void QLA_F3_H_eq_h ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a);
void QLA_F3_H_veq_h ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int n);
void QLA_F3_H_xeq_h ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_F3_HalfFermion *QLA_RESTRICT a, int *index, int n);

/*  QLA_DiracFermion (r = const) */


void QLA_F3_D_eq_d ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a);
void QLA_F3_D_veq_d ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int n);
void QLA_F3_D_xeq_d ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_F3_DiracFermion *QLA_RESTRICT a, int *index, int n);

/*  QLA_ColorMatrix (r = const) */


void QLA_F3_M_eq_m ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a);
void QLA_F3_M_veq_m ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_m ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F3_ColorMatrix *QLA_RESTRICT a, int *index, int n);

/*  QLA_DiracPropagator (r = const) */


void QLA_F3_P_eq_p ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a);
void QLA_F3_P_veq_p ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_p ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_F3_DiracPropagator *QLA_RESTRICT a, int *index, int n);

/*  diag(QLA_ColorMatrix) = const */


void QLA_F3_M_eq_c ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a);
void QLA_F3_M_veq_c ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_c ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_F_Complex *QLA_RESTRICT a, int *index, int n);

/*---------------------------------------------------*/
/* Gaussian random number fills */
/*---------------------------------------------------*/


/*  QLA_ColorVector (r = gaussian random)  */


void QLA_F3_V_eq_gaussian_S ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_F3_V_veq_gaussian_S ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_F3_V_xeq_gaussian_S ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_F3_V_veq_gaussian_pS ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_F3_V_xeq_gaussian_pS ( QLA_F3_ColorVector *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_HalfFermion (r = gaussian random)  */


void QLA_F3_H_eq_gaussian_S ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_F3_H_veq_gaussian_S ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_F3_H_xeq_gaussian_S ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_F3_H_veq_gaussian_pS ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_F3_H_xeq_gaussian_pS ( QLA_F3_HalfFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracFermion (r = gaussian random)  */


void QLA_F3_D_eq_gaussian_S ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_F3_D_veq_gaussian_S ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_F3_D_xeq_gaussian_S ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_F3_D_veq_gaussian_pS ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_F3_D_xeq_gaussian_pS ( QLA_F3_DiracFermion *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_ColorMatrix (r = gaussian random)  */


void QLA_F3_M_eq_gaussian_S ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_F3_M_veq_gaussian_S ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_F3_M_xeq_gaussian_S ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_F3_M_veq_gaussian_pS ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_F3_M_xeq_gaussian_pS ( QLA_F3_ColorMatrix *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_DiracPropagator (r = gaussian random)  */


void QLA_F3_P_eq_gaussian_S ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_F3_P_veq_gaussian_S ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_F3_P_xeq_gaussian_S ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_F3_P_veq_gaussian_pS ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_F3_P_xeq_gaussian_pS ( QLA_F3_DiracPropagator *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);


/* Translation to precision-generic names */

#if QLA_Precision == 'F'

#include <qla_f3_precision_generic.h>

#endif


/* Translation to color-generic names */

#if QLA_Colors == 3

#include <qla_f3_color_generic.h>

#endif


/* Translation to fully generic names */

#if QLA_Precision == 'F' && QLA_Colors == 3

#include <qla_f3_generic.h>

#endif
#endif /* _QLA_F3_H */
