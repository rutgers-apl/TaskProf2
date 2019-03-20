
  set_fields;
  mem = 2*(3+NC)*NC*REALBYTES;
  flop = 8*NC*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_V_vpeq_M_times_pV(v1, m1, vp1, n);
  }
  time1 = dtime() - time1;
  sum = sum_V(v1, n);
  printf("%-32s:", "QLA_V_vpeq_M_times_pV");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 2*(2+NC)*NC*REALBYTES;
  flop = (8*NC-2)*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_V_veq_Ma_times_V(v1, m1, v2, n);
  }
  time1 = dtime() - time1;
  sum = sum_V(v1, n);
  printf("%-32s:", "QLA_V_veq_Ma_times_V");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 6*NC*REALBYTES;
  flop = 2*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_V_vmeq_pV(v1, vp1, n);
  }
  time1 = dtime() - time1;
  sum = sum_V(v1, n);
  printf("%-32s:", "QLA_V_vmeq_pV");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 2*(12+NC)*NC*REALBYTES;
  flop = (16*NC+8)*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_D_vpeq_spproj_M_times_pD(d1, m1, dp1,0,1,n);
  }
  time1 = dtime() - time1;
  sum = sum_D(d1,n);
  printf("%-32s:", "QLA_D_vpeq_spproj_M_times_pD");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 6*NC*NC*REALBYTES;
  flop = (8*NC-2)*NC*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_M_veq_M_times_pM(m1, m2, mp1, n);
  }
  time1 = dtime() - time1;
  sum = sum_M(m1, n);
  printf("%-32s:", "QLA_M_veq_M_times_pM");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 2*NC*REALBYTES;
  flop = 4*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_r_veq_norm2_V(r1, v1, n);
  }
  time1 = dtime() - time1;
  sum = *r1;
  printf("%-32s:", "QLA_r_veq_norm2_V");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));

  set_fields;
  mem = 4*NC*REALBYTES;
  flop = 8*NC;
  c = 1 + cf/(flop+mem);
  time1 = dtime();
  for(int i=0; i<c; ++i) {
    QLA_c_veq_V_dot_V(c1, v1, v2, n);
  }
  time1 = dtime() - time1;
  sum = QLA_norm2_c(*c1);
  printf("%-32s:", "QLA_c_veq_V_dot_V");
  printf("%12g time=%5.2f mem=%5.0f mflops=%5.0f\n",          sum, time1, mem*n*c/(1e6*time1), flop*n*c/(1e6*time1));
