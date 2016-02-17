/*: Solves  A*x = b */
extern int v3p_netlib_lsqr_(
  v3p_netlib_integer *m,
  v3p_netlib_integer *n,
  int (*aprod)(v3p_netlib_integer*,
               v3p_netlib_integer*,
               v3p_netlib_integer*,
               v3p_netlib_doublereal*,
               v3p_netlib_doublereal*,
               v3p_netlib_integer*,
               v3p_netlib_integer*,
               v3p_netlib_integer*,
               v3p_netlib_doublereal*,
               void*),
  v3p_netlib_doublereal *damp,
  v3p_netlib_integer *leniw,
  v3p_netlib_integer *lenrw,
  v3p_netlib_integer *iw,
  v3p_netlib_doublereal *rw,
  v3p_netlib_doublereal *u,
  v3p_netlib_doublereal *v,
  v3p_netlib_doublereal *w,
  v3p_netlib_doublereal *x,
  v3p_netlib_doublereal *se,
  v3p_netlib_doublereal *atol,
  v3p_netlib_doublereal *btol,
  v3p_netlib_doublereal *conlim,
  v3p_netlib_integer *itnlim,
  v3p_netlib_integer *nout,
  v3p_netlib_integer *istop,
  v3p_netlib_integer *itn,
  v3p_netlib_doublereal *anorm,
  v3p_netlib_doublereal *acond,
  v3p_netlib_doublereal *rnorm,
  v3p_netlib_doublereal *arnorm,
  v3p_netlib_doublereal *xnorm,
  void* userdata
  );
