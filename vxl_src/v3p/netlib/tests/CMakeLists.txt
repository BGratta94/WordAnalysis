IF(BUILD_TESTING)
  # test
  ADD_EXECUTABLE( netlib_lbfgs_example lbfgs-example.c )
  ADD_TEST( netlib_test_lbfgs ${EXECUTABLE_OUTPUT_PATH}/netlib_lbfgs_example )
  TARGET_LINK_LIBRARIES(netlib_lbfgs_example v3p_netlib)
  # test
  ADD_EXECUTABLE( netlib_lbfgsb_example lbfgsb-example1.c )
  ADD_TEST( netlib_test_lbfgsb ${EXECUTABLE_OUTPUT_PATH}/netlib_lbfgsb_example )
  TARGET_LINK_LIBRARIES(netlib_lbfgsb_example v3p_netlib)
  # test
  ADD_EXECUTABLE( netlib_lsqr_test lsqr-test.c )
  ADD_TEST( netlib_test_lsqr ${EXECUTABLE_OUTPUT_PATH}/netlib_lsqr_test )
  TARGET_LINK_LIBRARIES(netlib_lsqr_test v3p_netlib)
  # test
  ADD_EXECUTABLE( netlib_slamch_test slamch-test.c )
  ADD_TEST( netlib_test_slamch ${EXECUTABLE_OUTPUT_PATH}/netlib_slamch_test )
  TARGET_LINK_LIBRARIES(netlib_slamch_test v3p_netlib)
  # test
  ADD_EXECUTABLE( netlib_tricall tricall.c )
  ADD_TEST( netlib_test_tricall ${EXECUTABLE_OUTPUT_PATH}/netlib_tricall )
  TARGET_LINK_LIBRARIES(netlib_tricall netlib)
  # test
  ADD_EXECUTABLE( netlib_integral_test integral-test.c )
  ADD_TEST( netlib_test_integral ${EXECUTABLE_OUTPUT_PATH}/netlib_integral_test )
  TARGET_LINK_LIBRARIES(netlib_integral_test v3p_netlib)
ENDIF(BUILD_TESTING)
