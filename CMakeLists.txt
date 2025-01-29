cmake_minimum_required(VERSION 3.17)
project(DepthFirstSearch)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(DepthFirstSearch main.cpp util/util.h test_factory.h L79_exist/L79_exist.cpp L79_exist/L79_exist.h)