#ifndef _QLA_D_H
#define _QLA_D_H

/***************************************************************/
/* Level 1 Linear Algebra API QLA precision D color  */
/***************************************************************/


/*===================================================*/
/* Unary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Elementary unary functions real to real */
/*---------------------------------------------------*/


/* cos */


void QLA_D_R_eq_cos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_cos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_cos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_cos_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_cos_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* sin */


void QLA_D_R_eq_sin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_sin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_sin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_sin_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_sin_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* tan */


void QLA_D_R_eq_tan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_tan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_tan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_tan_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_tan_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* acos */


void QLA_D_R_eq_acos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_acos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_acos_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_acos_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_acos_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* asin */


void QLA_D_R_eq_asin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_asin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_asin_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_asin_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_asin_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* atan */


void QLA_D_R_eq_atan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_atan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_atan_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_atan_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_atan_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* sqrt */


void QLA_D_R_eq_sqrt_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_sqrt_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_sqrt_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_sqrt_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_sqrt_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* fabs */


void QLA_D_R_eq_fabs_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_fabs_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_fabs_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_fabs_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_fabs_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* exp */


void QLA_D_R_eq_exp_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_exp_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_exp_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_exp_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_exp_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* log */


void QLA_D_R_eq_log_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_log_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_log_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_log_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_log_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* sign */


void QLA_D_R_eq_sign_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_sign_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_sign_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_sign_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_sign_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* cosh */


void QLA_D_R_eq_cosh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_cosh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_cosh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_cosh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_cosh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* sinh */


void QLA_D_R_eq_sinh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_sinh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_sinh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_sinh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_sinh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* tanh */


void QLA_D_R_eq_tanh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_tanh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_tanh_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_tanh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_tanh_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* log10 */


void QLA_D_R_eq_log10_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_log10_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_log10_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_log10_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_log10_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* floor */


void QLA_D_R_eq_floor_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_floor_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_floor_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_floor_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_floor_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/* ceil */


void QLA_D_R_eq_ceil_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_ceil_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_ceil_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_ceil_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_ceil_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Elementary binary functions reals to real */
/*---------------------------------------------------*/


/*  QLA_Real (r = a mod b) */


void QLA_D_R_eq_R_mod_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_mod_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_mod_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_mod_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_mod_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_mod_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_mod_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_mod_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_mod_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a max b) */


void QLA_D_R_eq_R_max_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_max_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_max_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_max_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_max_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_max_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_max_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_max_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_max_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a min b) */


void QLA_D_R_eq_R_min_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_min_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_min_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_min_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_min_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_min_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_min_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_min_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_min_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a pow b) */


void QLA_D_R_eq_R_pow_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_pow_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_pow_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_pow_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_pow_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_pow_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_pow_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_pow_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_pow_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a atan2 b) */


void QLA_D_R_eq_R_atan2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_atan2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_atan2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_atan2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_atan2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_atan2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_atan2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_atan2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_atan2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real [r = a ldexp b (int)] */


void QLA_D_R_eq_R_ldexp_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_D_R_veq_R_ldexp_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_ldexp_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_ldexp_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_ldexp_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_ldexp_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_ldexp_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_ldexp_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_ldexp_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Elementary unary functions real to complex */
/*---------------------------------------------------*/


/*  cexpi  */


void QLA_D_C_eq_cexpi_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_C_veq_cexpi_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_cexpi_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_cexpi_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_cexpi_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Elementary unary functions complex to real */
/*---------------------------------------------------*/


/*  norm  */


void QLA_D_R_eq_norm_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veq_norm_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_norm_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_norm_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_norm_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  arg  */


void QLA_D_R_eq_arg_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veq_arg_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_arg_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_arg_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_arg_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Elementary unary functions complex to complex */
/*---------------------------------------------------*/


/*  cexp  */


void QLA_D_C_eq_cexp_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_cexp_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_cexp_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_cexp_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_cexp_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  csqrt  */


void QLA_D_C_eq_csqrt_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_csqrt_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_csqrt_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_csqrt_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_csqrt_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  clog  */


void QLA_D_C_eq_clog_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_clog_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_clog_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_clog_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_clog_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Copying and incrementing */
/*---------------------------------------------------*/


/*  r = a (QLA_Real)  */


void QLA_D_R_eq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  r = a (QLA_Complex)  */


void QLA_D_C_eq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_Real)  */


void QLA_D_R_peq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_vpeq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xpeq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_vpeq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xpeq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  r += a (QLA_Complex)  */


void QLA_D_C_peq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vpeq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xpeq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vpeq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xpeq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_Real)  */


void QLA_D_R_eqm_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veqm_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeqm_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veqm_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xeqm_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  r =- a (QLA_Complex)  */


void QLA_D_C_eqm_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veqm_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeqm_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veqm_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeqm_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_Real)  */


void QLA_D_R_meq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_vmeq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xmeq_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_vmeq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_R_xmeq_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  r -= a (QLA_Complex)  */


void QLA_D_C_meq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vmeq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xmeq_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vmeq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xmeq_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Hermitian conjugate */
/*---------------------------------------------------*/


/*  r = hconj(a) (QLA_Complex)  */


void QLA_D_C_eq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_Complex)  */


void QLA_D_C_peq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vpeq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xpeq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vpeq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xpeq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_Complex)  */


void QLA_D_C_eqm_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veqm_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeqm_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veqm_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeqm_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  r = hconj(a) (QLA_Complex)  */


void QLA_D_C_meq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vmeq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xmeq_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vmeq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xmeq_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Local squared norm */
/*---------------------------------------------------*/


/*  QLA_Complex (r = norm2 a) */


void QLA_D_R_eq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = norm2 a) */


void QLA_D_R_peq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_vpeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xpeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_vpeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xpeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = norm2 a) */


void QLA_D_R_eqm_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veqm_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeqm_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veqm_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeqm_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = norm2 a) */


void QLA_D_R_meq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_vmeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xmeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_vmeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xmeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Type conversion and component extraction */
/*===================================================*/


/*---------------------------------------------------*/
/* Convert real to complex (zero imaginary part) */
/*---------------------------------------------------*/

void QLA_D_C_eq_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_C_veq_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Convert real and imaginary to complex */
/*---------------------------------------------------*/

void QLA_D_C_eq_R_plus_i_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_C_veq_R_plus_i_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_R_plus_i_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pR_plus_i_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_C_veq_R_plus_i_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pR_plus_i_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pR_plus_i_R ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_R_plus_i_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pR_plus_i_pR ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Real part of complex */
/*---------------------------------------------------*/

void QLA_D_R_eq_re_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veq_re_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_re_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_re_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_re_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Imaginary part of complex */
/*---------------------------------------------------*/

void QLA_D_R_eq_im_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_R_veq_im_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_im_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_im_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_im_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Integer to real */
/*---------------------------------------------------*/

void QLA_D_R_eq_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_D_R_veq_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Real to integer */
/*---------------------------------------------------*/

void QLA_D_I_eq_trunc_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_I_veq_trunc_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_I_xeq_trunc_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_I_veq_trunc_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_I_xeq_trunc_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);
void QLA_D_I_eq_round_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_I_veq_round_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_I_xeq_round_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_I_veq_round_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_I_xeq_round_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Binary Operations with Constants  */
/*===================================================*/


/*---------------------------------------------------*/
/* Multiplication by real constant */
/*---------------------------------------------------*/


/*  QLA_Real r = c a (real c)  */


void QLA_D_R_eq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r = c a (real c)  */


void QLA_D_C_eq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r += c a (real c)  */


void QLA_D_R_peq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_vpeq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xpeq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vpeq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xpeq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r += c a (real c)  */


void QLA_D_C_peq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r =- c a (real c)  */


void QLA_D_R_eqm_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veqm_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeqm_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veqm_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeqm_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r =- c a (real c)  */


void QLA_D_C_eqm_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r -= c a (real c)  */


void QLA_D_R_meq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_vmeq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xmeq_r_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vmeq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xmeq_r_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r -= c a (real c)  */


void QLA_D_C_meq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_r_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_r_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by complex constant */
/*---------------------------------------------------*/


/*  QLA_Complex r = c a (complex c) */


void QLA_D_C_eq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r += c a (complex c) */


void QLA_D_C_peq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r =- c a (complex c) */


void QLA_D_C_eqm_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r -= c a (complex c) */


void QLA_D_C_meq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_c_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_c_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by i */
/*---------------------------------------------------*/


/*  QLA_Complex r = i a  */


void QLA_D_C_eq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex r += i a  */


void QLA_D_C_peq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vpeq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xpeq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vpeq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xpeq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex r =- i a  */


void QLA_D_C_eqm_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veqm_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeqm_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veqm_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xeqm_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex r -= i a  */


void QLA_D_C_meq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_vmeq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xmeq_i_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_vmeq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_C_xmeq_i_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Binary Operations with Fields  */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction */
/*---------------------------------------------------*/


/*  QLA_Real (r = a + b)  */


void QLA_D_R_eq_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a - b) */


void QLA_D_R_eq_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a + b)  */


void QLA_D_C_eq_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a - b) */


void QLA_D_C_eq_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Division of scalar fields */
/*---------------------------------------------------*/

void QLA_D_R_eq_R_divide_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_divide_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_divide_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_divide_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_divide_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_divide_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_divide_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_divide_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_divide_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_eq_C_divide_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_divide_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_divide_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_divide_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_divide_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_divide_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_divide_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_divide_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_divide_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication by a real field */
/*---------------------------------------------------*/


/*  QLA_Real r = f a (QLA_Real f) */


void QLA_D_R_eq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r = f a (QLA_Real f) */


void QLA_D_C_eq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r += f a (QLA_Real f) */


void QLA_D_R_peq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_vpeq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xpeq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vpeq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_vpeq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_vpeq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xpeq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xpeq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xpeq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r += f a (QLA_Real f) */


void QLA_D_C_peq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r =- f a (QLA_Real f) */


void QLA_D_R_eqm_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_veqm_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xeqm_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veqm_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_veqm_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_veqm_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xeqm_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeqm_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeqm_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r =- f a (QLA_Real f) */


void QLA_D_C_eqm_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real r -= f a (QLA_Real f) */


void QLA_D_R_meq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_R_vmeq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_xmeq_R_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vmeq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_R_vmeq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_vmeq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_R_xmeq_pR_times_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xmeq_R_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xmeq_pR_times_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex r -= f a (QLA_Real f) */


void QLA_D_C_meq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_R_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pR_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_R_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pR_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Multiplication: uniform complex types */
/*---------------------------------------------------*/


/*  QLA_Complex (r = a * b) */


void QLA_D_C_eq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a * b) */


void QLA_D_C_eq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a * b) */


void QLA_D_C_eq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a * b) */


void QLA_D_C_eq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r += a * b) */


void QLA_D_C_peq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r += a * b) */


void QLA_D_C_peq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r += a * b) */


void QLA_D_C_peq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r += a * b) */


void QLA_D_C_peq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r =- a * b) */


void QLA_D_C_eqm_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r =- a * b) */


void QLA_D_C_eqm_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r =- a * b) */


void QLA_D_C_eqm_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r =- a * b) */


void QLA_D_C_eqm_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r -= a * b) */


void QLA_D_C_meq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_C_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pC_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_C_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pC_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r -= a * b) */


void QLA_D_C_meq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_C_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pC_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_C_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pC_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r -= a * b) */


void QLA_D_C_meq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_Ca_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pCa_times_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_Ca_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pCa_times_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r -= a * b) */


void QLA_D_C_meq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_Ca_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pCa_times_Ca ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_Ca_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pCa_times_pCa ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Local inner product */
/*---------------------------------------------------*/


/*  QLA_Complex (c = trace adj(a) dot b) */


void QLA_D_C_eq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = trace adj(a) dot b) */


void QLA_D_C_peq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vpeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xpeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vpeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vpeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vpeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xpeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xpeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xpeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = trace adj(a) dot b) */


void QLA_D_C_eqm_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_veqm_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xeqm_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veqm_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_veqm_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_veqm_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xeqm_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeqm_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeqm_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = trace adj(a) dot b) */


void QLA_D_C_meq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_C_vmeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_xmeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_vmeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_C_vmeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_vmeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_C_xmeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xmeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xmeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = Re trace adj(a) dot b) */


void QLA_D_R_eq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_R_veq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_veq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = Re trace adj(a) dot b) */


void QLA_D_R_peq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_R_vpeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_xpeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vpeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_vpeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_vpeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_xpeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xpeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xpeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = Re trace adj(a) dot b) */


void QLA_D_R_eqm_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_R_veqm_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_xeqm_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veqm_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_veqm_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_veqm_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_xeqm_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeqm_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeqm_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = Re trace adj(a) dot b) */


void QLA_D_R_meq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_R_vmeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_xmeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_vmeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_R_vmeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_vmeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_R_xmeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xmeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xmeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Ternary Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Addition and Subtraction with Real Scalar Multiplication */
/*---------------------------------------------------*/


/*  QLA_Real r = (a*b + c) (real a)  */


void QLA_D_R_eq_r_times_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c);
void QLA_D_R_veq_r_times_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c, int n);
void QLA_D_R_xeq_r_times_R_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c, int *index, int n);
void QLA_D_R_veq_r_times_pR_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT c, int n);
void QLA_D_R_veq_r_times_R_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT *c, int n);
void QLA_D_R_veq_r_times_pR_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT *c, int n);
void QLA_D_R_xeq_r_times_pR_plus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT c, int *index, int n);
void QLA_D_R_xeq_r_times_R_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT *c, int *index, int n);
void QLA_D_R_xeq_r_times_pR_plus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT *c, int *index, int n);

/*  QLA_Real r = (a*b - c) (real a)  */


void QLA_D_R_eq_r_times_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c);
void QLA_D_R_veq_r_times_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c, int n);
void QLA_D_R_xeq_r_times_R_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT c, int *index, int n);
void QLA_D_R_veq_r_times_pR_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT c, int n);
void QLA_D_R_veq_r_times_R_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT *c, int n);
void QLA_D_R_veq_r_times_pR_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT *c, int n);
void QLA_D_R_xeq_r_times_pR_minus_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT c, int *index, int n);
void QLA_D_R_xeq_r_times_R_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, QLA_D_Real *QLA_RESTRICT *c, int *index, int n);
void QLA_D_R_xeq_r_times_pR_minus_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, QLA_D_Real *QLA_RESTRICT *c, int *index, int n);

/*  QLA_Complex r = (a*b + c) (real a)  */


void QLA_D_C_eq_r_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c);
void QLA_D_C_veq_r_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_xeq_r_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_veq_r_times_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_veq_r_times_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_veq_r_times_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_xeq_r_times_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_xeq_r_times_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);
void QLA_D_C_xeq_r_times_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);

/*  QLA_Complex r = (a*b - c) (real a)  */


void QLA_D_C_eq_r_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c);
void QLA_D_C_veq_r_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_xeq_r_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_veq_r_times_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_veq_r_times_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_veq_r_times_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_xeq_r_times_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_xeq_r_times_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);
void QLA_D_C_xeq_r_times_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);

/*---------------------------------------------------*/
/* Addition and Subtraction with Complex Scalar Multiplication */
/*---------------------------------------------------*/


/*  QLA_Complex r = (a*b + c) (complex a)  */


void QLA_D_C_eq_c_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c);
void QLA_D_C_veq_c_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_xeq_c_times_C_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_veq_c_times_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_veq_c_times_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_veq_c_times_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_xeq_c_times_pC_plus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_xeq_c_times_C_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);
void QLA_D_C_xeq_c_times_pC_plus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);

/*  QLA_Complex r = (a*b - c) (complex a)  */


void QLA_D_C_eq_c_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c);
void QLA_D_C_veq_c_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_xeq_c_times_C_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_veq_c_times_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int n);
void QLA_D_C_veq_c_times_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_veq_c_times_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int n);
void QLA_D_C_xeq_c_times_pC_minus_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT c, int *index, int n);
void QLA_D_C_xeq_c_times_C_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);
void QLA_D_C_xeq_c_times_pC_minus_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, QLA_D_Complex *QLA_RESTRICT *c, int *index, int n);

/*===================================================*/
/* Boolean and Bit Operations */
/*===================================================*/


/*---------------------------------------------------*/
/* Comparisons of integers and reals */
/*---------------------------------------------------*/


/*  QLA_Real (r = a eq b) */


void QLA_D_I_eq_R_eq_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_eq_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_eq_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_eq_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_eq_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_eq_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_eq_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_eq_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_eq_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a ne b) */


void QLA_D_I_eq_R_ne_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_ne_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_ne_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_ne_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_ne_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_ne_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_ne_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_ne_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_ne_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a gt b) */


void QLA_D_I_eq_R_gt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_gt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_gt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_gt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_gt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_gt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_gt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_gt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_gt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a lt b) */


void QLA_D_I_eq_R_lt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_lt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_lt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_lt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_lt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_lt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_lt_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_lt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_lt_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a ge b) */


void QLA_D_I_eq_R_ge_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_ge_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_ge_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_ge_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_ge_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_ge_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_ge_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_ge_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_ge_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (r = a le b) */


void QLA_D_I_eq_R_le_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_I_veq_R_le_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_xeq_R_le_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_veq_pR_le_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_I_veq_R_le_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_veq_pR_le_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_I_xeq_pR_le_R ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_I_xeq_R_le_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_I_xeq_pR_le_pR ( QLA_Int *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Copymask */
/*---------------------------------------------------*/


/*  QLA_Real (r = a mask b) */


void QLA_D_R_eq_R_mask_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_D_R_veq_R_mask_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_R_xeq_R_mask_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_veq_pR_mask_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_R_veq_R_mask_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_R_veq_pR_mask_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_R_xeq_pR_mask_I ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_R_xeq_R_mask_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_D_R_xeq_pR_mask_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (r = a mask b) */


void QLA_D_C_eq_C_mask_I ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_D_C_veq_C_mask_I ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_C_xeq_C_mask_I ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_veq_pC_mask_I ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_C_veq_C_mask_pI ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_C_veq_pC_mask_pI ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_C_xeq_pC_mask_I ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_C_xeq_C_mask_pI ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_D_C_xeq_pC_mask_pI ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*===================================================*/
/* Reductions               */
/*===================================================*/


/*---------------------------------------------------*/
/* Global squared norm uniform precision */
/*---------------------------------------------------*/


/*  QLA_Int (r = sum norm2 a) */


void QLA_D_r_eq_norm2_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_D_r_veq_norm2_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_D_r_xeq_norm2_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_D_r_veq_norm2_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_D_r_xeq_norm2_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Real (r = sum norm2 a) */


void QLA_D_r_eq_norm2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_r_veq_norm2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_r_xeq_norm2_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_r_veq_norm2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_r_xeq_norm2_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = sum norm2 a) */


void QLA_D_r_eq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_r_veq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_r_xeq_norm2_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_r_veq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_r_xeq_norm2_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Global inner product uniform precision */
/*---------------------------------------------------*/


/*  QLA_Int (c = trace adj(a) dot b) */


void QLA_D_r_eq_I_dot_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b);
void QLA_D_r_veq_I_dot_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_r_xeq_I_dot_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_veq_pI_dot_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int n);
void QLA_D_r_veq_I_dot_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_r_veq_pI_dot_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int n);
void QLA_D_r_xeq_pI_dot_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_xeq_I_dot_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, QLA_Int *QLA_RESTRICT *b, int *index, int n);
void QLA_D_r_xeq_pI_dot_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, QLA_Int *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Real (c = trace adj(a) dot b) */


void QLA_D_r_eq_R_dot_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b);
void QLA_D_r_veq_R_dot_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_r_xeq_R_dot_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_veq_pR_dot_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int n);
void QLA_D_r_veq_R_dot_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_r_veq_pR_dot_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int n);
void QLA_D_r_xeq_pR_dot_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_xeq_R_dot_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);
void QLA_D_r_xeq_pR_dot_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, QLA_D_Real *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = trace adj(a) dot b) */


void QLA_D_c_eq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_c_veq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_c_xeq_C_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_c_veq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_c_veq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_c_veq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_c_xeq_pC_dot_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_c_xeq_C_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_c_xeq_pC_dot_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*  QLA_Complex (c = Re trace adj(a) dot b) */


void QLA_D_r_eq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b);
void QLA_D_r_veq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_r_xeq_re_C_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_veq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int n);
void QLA_D_r_veq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_r_veq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int n);
void QLA_D_r_xeq_re_pC_dot_C ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT b, int *index, int n);
void QLA_D_r_xeq_re_C_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);
void QLA_D_r_xeq_re_pC_dot_pC ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, QLA_D_Complex *QLA_RESTRICT *b, int *index, int n);

/*---------------------------------------------------*/
/* Global sum uniform precision */
/*---------------------------------------------------*/


/*  QLA_Int (r = sum a) */


void QLA_D_r_eq_sum_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a);
void QLA_D_r_veq_sum_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int n);
void QLA_D_r_xeq_sum_I ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT a, int *index, int n);
void QLA_D_r_veq_sum_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int n);
void QLA_D_r_xeq_sum_pI ( QLA_D_Real *QLA_RESTRICT r, QLA_Int *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Real (r = sum a) */


void QLA_D_r_eq_sum_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_r_veq_sum_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_r_xeq_sum_R ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);
void QLA_D_r_veq_sum_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int n);
void QLA_D_r_xeq_sum_pR ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = sum a) */


void QLA_D_c_eq_sum_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_c_veq_sum_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_c_xeq_sum_C ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);
void QLA_D_c_veq_sum_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int n);
void QLA_D_c_xeq_sum_pC ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT *a, int *index, int n);

/*===================================================*/
/* Fills                    */
/*===================================================*/


/*---------------------------------------------------*/
/* Zero fills */
/*---------------------------------------------------*/


/*  QLA_Real (r = zero) */


void QLA_D_R_eq_zero ( QLA_D_Real *QLA_RESTRICT r);
void QLA_D_R_veq_zero ( QLA_D_Real *QLA_RESTRICT r, int n);
void QLA_D_R_xeq_zero ( QLA_D_Real *QLA_RESTRICT r, int *index, int n);

/*  QLA_Complex (r = zero) */


void QLA_D_C_eq_zero ( QLA_D_Complex *QLA_RESTRICT r);
void QLA_D_C_veq_zero ( QLA_D_Complex *QLA_RESTRICT r, int n);
void QLA_D_C_xeq_zero ( QLA_D_Complex *QLA_RESTRICT r, int *index, int n);

/*---------------------------------------------------*/
/* Constant fills */
/*---------------------------------------------------*/


/*  QLA_Real (r = const) */


void QLA_D_R_eq_r ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a);
void QLA_D_R_veq_r ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_r ( QLA_D_Real *QLA_RESTRICT r, QLA_D_Real *QLA_RESTRICT a, int *index, int n);

/*  QLA_Complex (r = const) */


void QLA_D_C_eq_c ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a);
void QLA_D_C_veq_c ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_c ( QLA_D_Complex *QLA_RESTRICT r, QLA_D_Complex *QLA_RESTRICT a, int *index, int n);

/*---------------------------------------------------*/
/* Uniform random number fills */
/*---------------------------------------------------*/

void QLA_D_R_eq_random_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_D_R_veq_random_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_random_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_random_pS ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_random_pS ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*---------------------------------------------------*/
/* Gaussian random number fills */
/*---------------------------------------------------*/


/*  QLA_Real (r = gaussian random)  */


void QLA_D_R_eq_gaussian_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_D_R_veq_gaussian_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_D_R_xeq_gaussian_S ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_D_R_veq_gaussian_pS ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_D_R_xeq_gaussian_pS ( QLA_D_Real *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);

/*  QLA_Complex (r = gaussian random)  */


void QLA_D_C_eq_gaussian_S ( QLA_D_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a);
void QLA_D_C_veq_gaussian_S ( QLA_D_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int n);
void QLA_D_C_xeq_gaussian_S ( QLA_D_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT a, int *index, int n);
void QLA_D_C_veq_gaussian_pS ( QLA_D_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int n);
void QLA_D_C_xeq_gaussian_pS ( QLA_D_Complex *QLA_RESTRICT r, QLA_RandomState *QLA_RESTRICT *a, int *index, int n);


/* Translation to fully generic names */

#if QLA_Precision == 'D'

#include <qla_d_generic.h>

#endif
#endif /* _QLA_D_H */
