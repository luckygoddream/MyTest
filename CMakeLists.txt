cmake_minimum_required(VERSION 3.19)
project(MyTest)

set(CMAKE_CXX_STANDARD 20)

add_executable(MyTest main.cpp)

add_executable(charTest charTest.cpp)
add_executable(escapeTest escapeTest.cpp)
add_executable(stringTest stringTest.cpp)
add_executable(boolTest boolTest.cpp)
add_executable(cinTest cinTest.cpp)
add_executable(operationTest operationTest.cpp)