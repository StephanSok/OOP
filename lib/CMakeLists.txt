cmake_minimum_required(VERSION 3.17)
project(lib)

set(CMAKE_CXX_STANDARD 17)

add_library(lib Dlist.h Dlist.cpp)
