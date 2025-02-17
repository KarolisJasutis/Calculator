add_library(calculator main.cpp)
add_executable(calculator_app main.cpp)
target_link_libraries(calculator_app calculator)