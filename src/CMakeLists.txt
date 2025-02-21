add_library(calculator node.cpp sum.cpp mult.cpp sub.cpp div.cpp expressiontree.cpp)
add_executable(calculator_app main.cpp)
target_link_libraries(calculator_app calculator)