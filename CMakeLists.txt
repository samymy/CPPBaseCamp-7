cmake_minimum_required(VERSION 3.12)
project(Homework7)

set(CMAKE_CXX_STANDARD 14)

add_executable(homework7 employee_test.cpp AbstractEmployee.cpp Employee.cpp Manager.cpp Fink.cpp HighFink.cpp)
