#ifndef _QLA_INT_H
#define _QLA_INT_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision  color  */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_RandomState)  */


void QLA_S_eq_S ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_S_veq_S ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_S_xeq_S ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_S_veq_pS ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_S_xeq_pS ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_Int)  */


void QLA_I_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_veq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xeq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_I_veq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_I_xeq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_Int)  */


void QLA_I_peq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_vpeq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xpeq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_I_vpeq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_I_xpeq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_Int)  */


void QLA_I_eqm_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_veqm_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xeqm_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_I_veqm_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_I_xeqm_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_Int)  */


void QLA_I_meq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_vmeq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xmeq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_I_vmeq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_I_xmeq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Binary Operations with Constants  */
/*===================================================*/


/*---------------------------------------------------*/
/* Multiplication by real constant */
/*---------------------------------------------------*/


/*  QLA_Int r = c a (real c)  */


void QLA_I_eq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r += c a (real c)  */


void QLA_I_peq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_vpeq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xpeq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_vpeq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xpeq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r =- c a (real c)  */


void QLA_I_eqm_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veqm_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeqm_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veqm_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeqm_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r -= c a (real c)  */


void QLA_I_meq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_vmeq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xmeq_i_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_vmeq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xmeq_i_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Binary Operations with Fields  */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction */
/*---------------------------------------------------*/


/*  QLA_Int (r = a + b)  */


void QLA_I_eq_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a - b) */


void QLA_I_eq_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Division of scalar fields */
/*---------------------------------------------------*/

void QLA_I_eq_I_divide_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_divide_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_divide_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_divide_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_divide_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_divide_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_divide_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_divide_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_divide_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by an integer field */
/*---------------------------------------------------*/


/*  QLA_Int r = f a (QLA_Int f) */


void QLA_I_eq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r += f a (QLA_Int f) */


void QLA_I_peq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_vpeq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xpeq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_vpeq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_vpeq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_vpeq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xpeq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xpeq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xpeq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r =- f a (QLA_Int f) */


void QLA_I_eqm_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veqm_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeqm_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veqm_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veqm_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veqm_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeqm_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeqm_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeqm_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int r -= f a (QLA_Int f) */


void QLA_I_meq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_vmeq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xmeq_I_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_vmeq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_vmeq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_vmeq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xmeq_pI_times_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xmeq_I_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xmeq_pI_times_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Ternary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction with Real Scalar Multiplication */
/*---------------------------------------------------*/


/*  QLA_Int r = (a*b + c) (real a)  */


void QLA_I_eq_i_times_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c);
void QLA_I_veq_i_times_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c, int n);
void QLA_I_xeq_i_times_I_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c, int *index, int n);
void QLA_I_veq_i_times_pI_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT c, int n);
void QLA_I_veq_i_times_I_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT *c, int n);
void QLA_I_veq_i_times_pI_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT *c, int n);
void QLA_I_xeq_i_times_pI_plus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT c, int *index, int n);
void QLA_I_xeq_i_times_I_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT *c, int *index, int n);
void QLA_I_xeq_i_times_pI_plus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT *c, int *index, int n);

/*  QLA_Int r = (a*b - c) (real a)  */


void QLA_I_eq_i_times_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c);
void QLA_I_veq_i_times_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c, int n);
void QLA_I_xeq_i_times_I_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT c, int *index, int n);
void QLA_I_veq_i_times_pI_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT c, int n);
void QLA_I_veq_i_times_I_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT *c, int n);
void QLA_I_veq_i_times_pI_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT *c, int n);
void QLA_I_xeq_i_times_pI_minus_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT c, int *index, int n);
void QLA_I_xeq_i_times_I_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, QLA_Int *QLA_RESTRICT *c, int *index, int n);
void QLA_I_xeq_i_times_pI_minus_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, QLA_Int *QLA_RESTRICT *c, int *index, int n);

/*===================================================*/
/* Boolean and Bit Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Elementary binary operations on integers */
/*---------------------------------------------------*/


/*  QLA_Int (r = a lshift b) */


void QLA_I_eq_I_lshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_lshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_lshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_lshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_lshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_lshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_lshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_lshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_lshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a rshift b) */


void QLA_I_eq_I_rshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_rshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_rshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_rshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_rshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_rshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_rshift_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_rshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_rshift_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a mod b) */


void QLA_I_eq_I_mod_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_mod_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_mod_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_mod_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_mod_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_mod_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_mod_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_mod_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_mod_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a max b) */


void QLA_I_eq_I_max_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_max_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_max_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_max_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_max_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_max_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_max_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_max_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_max_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a min b) */


void QLA_I_eq_I_min_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_min_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_min_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_min_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_min_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_min_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_min_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_min_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_min_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Comparisons of integers and reals */
/*---------------------------------------------------*/


/*  QLA_Int (r = a eq b) */


void QLA_I_eq_I_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_eq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_eq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_eq_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_eq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_eq_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a ne b) */


void QLA_I_eq_I_ne_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_ne_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_ne_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_ne_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_ne_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_ne_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_ne_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_ne_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_ne_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a gt b) */


void QLA_I_eq_I_gt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_gt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_gt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_gt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_gt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_gt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_gt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_gt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_gt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a lt b) */


void QLA_I_eq_I_lt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_lt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_lt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_lt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_lt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_lt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_lt_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_lt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_lt_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a ge b) */


void QLA_I_eq_I_ge_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_ge_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_ge_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_ge_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_ge_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_ge_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_ge_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_ge_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_ge_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a le b) */


void QLA_I_eq_I_le_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_le_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_le_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_le_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_le_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_le_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_le_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_le_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_le_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Boolean Operations */
/*---------------------------------------------------*/


/*  QLA_Int (r = a or b) */


void QLA_I_eq_I_or_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_or_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_or_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_or_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_or_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_or_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_or_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_or_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_or_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a and b) */


void QLA_I_eq_I_and_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_and_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_and_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_and_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_and_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_and_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_and_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_and_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_and_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Int (r = a xor b) */


void QLA_I_eq_I_xor_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_xor_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_xor_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_xor_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_xor_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_xor_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_xor_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_xor_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_xor_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_eq_not_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_veq_not_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xeq_not_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_I_veq_not_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_I_xeq_not_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Copymask */
/*---------------------------------------------------*/


/*  QLA_Int (r = a mask b) */


void QLA_I_eq_I_mask_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_I_veq_I_mask_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_xeq_I_mask_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_veq_pI_mask_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_I_veq_I_mask_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_veq_pI_mask_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_I_xeq_pI_mask_I ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_I_xeq_I_mask_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_I_xeq_pI_mask_pI ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_RandomState (r = a mask b) */


void QLA_S_eq_S_mask_I ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_S_veq_S_mask_I ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_S_xeq_S_mask_I ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_S_veq_pS_mask_I ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_S_veq_S_mask_pI ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_S_veq_pS_mask_pI ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_S_xeq_pS_mask_I ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_S_xeq_S_mask_pI ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_S_xeq_pS_mask_pI ( QLA_RandomState *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_Int (r = zero) */


void QLA_I_eq_zero ( QLA_Int *QLA_RESTRICT r);
void QLA_I_veq_zero ( QLA_Int *QLA_RESTRICT r, int n);
void QLA_I_xeq_zero ( QLA_Int *QLA_RESTRICT r, int *index, int n);

/*---------------------------------------------------*/
/* Constant fills */
/*---------------------------------------------------*/


/*  QLA_Int (r = const) */


void QLA_I_eq_i ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_I_veq_i ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_I_xeq_i ( QLA_Int *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);

/*---------------------------------------------------*/
/* Seeding the random number generator from an integer array */
/*---------------------------------------------------*/


/*  QLA_Int (r = seed generator from a)  */


void QLA_S_eq_seed_i_I ( QLA_RandomState *QLA_RESTRICT r, int seed, QLA_Int *QLA_RESTRICT a);
void QLA_S_veq_seed_i_I ( QLA_RandomState *QLA_RESTRICT r, int seed, QLA_Int *QLA_RESTRICT a, int n);
void QLA_S_xeq_seed_i_I ( QLA_RandomState *QLA_RESTRICT r, int seed, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_S_veq_seed_i_pI ( QLA_RandomState *QLA_RESTRICT r, int seed, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_S_xeq_seed_i_pI ( QLA_RandomState *QLA_RESTRICT r, int seed, QLA_Int *QLA_RESTRICT *a, int *index, int n);
#endif /* _QLA_INT_H */
