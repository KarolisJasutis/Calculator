include(FetchContent)


FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/03597a01ee50ed33e9dfd640b249b4be3799d395.zip
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)


enable_testing()

include_directories(${CMAKE_SOURCE_DIR}/src)

add_executable(TestSum TestSum.cpp)
target_link_libraries(TestSum gtest_main calculator)
add_test(NAME SumTests COMMAND TestSum)

add_executable(TestSub TestSub.cpp)
target_link_libraries(TestSub gtest_main calculator)
add_test(NAME SubTests COMMAND TestSub)

add_executable(TestMult TestMult.cpp)
target_link_libraries(TestMult gtest_main calculator)
add_test(NAME MultTests COMMAND TestMult)

add_executable(TestDiv TestDiv.cpp)
target_link_libraries(TestDiv gtest_main calculator)
add_test(NAME DivTests COMMAND TestDiv)

add_executable(TestExpr TestExpr.cpp)
target_link_libraries(TestExpr gtest_main calculator)
add_test(NAME ExprTests COMMAND TestExpr)