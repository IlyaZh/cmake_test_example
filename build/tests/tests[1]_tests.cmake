add_test( ClassTest.BasicAssetions /media/Development/cmake_test_example/build/tests/tests [==[--gtest_filter=ClassTest.BasicAssetions]==] --gtest_also_run_disabled_tests)
set_tests_properties( ClassTest.BasicAssetions PROPERTIES WORKING_DIRECTORY /media/Development/cmake_test_example/build/tests)
set( tests_TESTS ClassTest.BasicAssetions)
