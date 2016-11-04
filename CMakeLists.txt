cmake_minimum_required(VERSION 3.3)
project(Sorts)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp BubbleSort.h Menu.h sortInterface.h SelectionSort.h)
add_executable(Sorts ${SOURCE_FILES})