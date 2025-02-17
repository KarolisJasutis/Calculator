# CMake generated Testfile for 
# Source directory: C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests
# Build directory: C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/build/tests
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
if(CTEST_CONFIGURATION_TYPE MATCHES "^([Dd][Ee][Bb][Uu][Gg])$")
  add_test(CalculatorTests "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/build/tests/Debug/test_calculator.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;15;add_test;C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ee][Aa][Ss][Ee])$")
  add_test(CalculatorTests "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/build/tests/Release/test_calculator.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;15;add_test;C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Mm][Ii][Nn][Ss][Ii][Zz][Ee][Rr][Ee][Ll])$")
  add_test(CalculatorTests "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/build/tests/MinSizeRel/test_calculator.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;15;add_test;C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;0;")
elseif(CTEST_CONFIGURATION_TYPE MATCHES "^([Rr][Ee][Ll][Ww][Ii][Tt][Hh][Dd][Ee][Bb][Ii][Nn][Ff][Oo])$")
  add_test(CalculatorTests "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/build/tests/RelWithDebInfo/test_calculator.exe")
  set_tests_properties(CalculatorTests PROPERTIES  _BACKTRACE_TRIPLES "C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;15;add_test;C:/Users/karol/Documents/GitHub/ArchitekturaProject/Calculator/tests/CMakeLists.txt;0;")
else()
  add_test(CalculatorTests NOT_AVAILABLE)
endif()
subdirs("../_deps/googletest-build")
