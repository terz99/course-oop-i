cmake_minimum_required(VERSION 3.8)
project(p6_4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        Area.cpp
        Area.h
        Circle.cpp
        Circle.h
        main.cpp
        Rectangle.cpp
        Rectangle.h
        Ring.cpp
        Ring.h
        Square.cpp
        Square.h)

add_executable(p6_4 ${SOURCE_FILES})