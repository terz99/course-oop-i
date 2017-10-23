cmake_minimum_required(VERSION 3.8)
project(p6_3)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp Area.cpp Area.h Rectangle.cpp Rectangle.h Ring.cpp Ring.h Circle.cpp Circle.h Square.cpp Square.h)
add_executable(p6_3 ${SOURCE_FILES})