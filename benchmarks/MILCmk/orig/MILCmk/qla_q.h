#ifndef _QLA_Q_H
#define _QLA_Q_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision Q color  */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_Real)  */


void QLA_Q_R_eq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a);
void QLA_Q_R_veq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int n);
void QLA_Q_R_xeq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int *index, int n);
void QLA_Q_R_veq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int n);
void QLA_Q_R_xeq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_Complex)  */


void QLA_Q_C_eq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a);
void QLA_Q_C_veq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int n);
void QLA_Q_C_xeq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_Q_C_veq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int n);
void QLA_Q_C_xeq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_Real)  */


void QLA_Q_R_peq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a);
void QLA_Q_R_vpeq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int n);
void QLA_Q_R_xpeq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int *index, int n);
void QLA_Q_R_vpeq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int n);
void QLA_Q_R_xpeq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_Complex)  */


void QLA_Q_C_peq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a);
void QLA_Q_C_vpeq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int n);
void QLA_Q_C_xpeq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_Q_C_vpeq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int n);
void QLA_Q_C_xpeq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_Real)  */


void QLA_Q_R_eqm_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a);
void QLA_Q_R_veqm_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int n);
void QLA_Q_R_xeqm_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int *index, int n);
void QLA_Q_R_veqm_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int n);
void QLA_Q_R_xeqm_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_Complex)  */


void QLA_Q_C_eqm_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a);
void QLA_Q_C_veqm_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int n);
void QLA_Q_C_xeqm_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_Q_C_veqm_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int n);
void QLA_Q_C_xeqm_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_Real)  */


void QLA_Q_R_meq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a);
void QLA_Q_R_vmeq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int n);
void QLA_Q_R_xmeq_R ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT a, int *index, int n);
void QLA_Q_R_vmeq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int n);
void QLA_Q_R_xmeq_pR ( QLA_Q_Real *QLA_RESTRICT r, QLA_Q_Real *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_Complex)  */


void QLA_Q_C_meq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a);
void QLA_Q_C_vmeq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int n);
void QLA_Q_C_xmeq_C ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_Q_C_vmeq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int n);
void QLA_Q_C_xmeq_pC ( QLA_Q_Complex *QLA_RESTRICT r, QLA_Q_Complex *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_Real (r = zero) */


void QLA_Q_R_eq_zero ( QLA_Q_Real *QLA_RESTRICT r);
void QLA_Q_R_veq_zero ( QLA_Q_Real *QLA_RESTRICT r, int n);
void QLA_Q_R_xeq_zero ( QLA_Q_Real *QLA_RESTRICT r, int *index, int n);

/*  QLA_Complex (r = zero) */


void QLA_Q_C_eq_zero ( QLA_Q_Complex *QLA_RESTRICT r);
void QLA_Q_C_veq_zero ( QLA_Q_Complex *QLA_RESTRICT r, int n);
void QLA_Q_C_xeq_zero ( QLA_Q_Complex *QLA_RESTRICT r, int *index, int n);

/*---------------------------------------------------*/
/* Gaussian random number fills */
/*---------------------------------------------------*/


/*  QLA_Real (r = gaussian random)  */


void QLA_Q_R_eq_gaussian_S ( QLA_Q_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q_R_veq_gaussian_S ( QLA_Q_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q_R_xeq_gaussian_S ( QLA_Q_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q_R_veq_gaussian_pS ( QLA_Q_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q_R_xeq_gaussian_pS ( QLA_Q_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = gaussian random)  */


void QLA_Q_C_eq_gaussian_S ( QLA_Q_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_Q_C_veq_gaussian_S ( QLA_Q_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_Q_C_xeq_gaussian_S ( QLA_Q_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_Q_C_veq_gaussian_pS ( QLA_Q_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_Q_C_xeq_gaussian_pS ( QLA_Q_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);


/* Translation to fully generic names */

#if QLA_Precision == 'Q'

#include <qla_q_generic.h>

#endif
#endif /* _QLA_Q_H */
