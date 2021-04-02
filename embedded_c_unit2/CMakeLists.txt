cmake_minimum_required(VERSION 3.17)
project(embedded_c_unit2 C)

set(CMAKE_C_STANDARD 99)

add_executable(embedded_c_unit2 main.c assignment1.c "assignment1.h" assignment2.c assignment2.h)