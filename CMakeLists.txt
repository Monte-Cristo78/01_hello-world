cmake_minimum_required(VERSION 3.23)
project(01_hello_world)

set(CMAKE_CXX_STANDARD 14)

add_executable(01_hello_world main.cpp index.cpp test/test.h test/test.cpp index.h)
