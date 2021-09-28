cmake_minimum_required(VERSION 3.17)
project(main)

set(CMAKE_CXX_STANDARD 17)

add_executable(main main.cpp )

include_directories(../lib)

target_link_libraries(main lib)
