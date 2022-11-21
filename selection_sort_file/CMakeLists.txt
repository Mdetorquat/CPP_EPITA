cmake_minimum_required(VERSION 3.0)

project(selection_sort_file)

add_executable(selection_sort_file sort_file.hpp my_sort.hpp main.cc)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -O3")