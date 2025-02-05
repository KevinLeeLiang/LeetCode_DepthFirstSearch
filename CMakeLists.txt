cmake_minimum_required(VERSION 3.17)
project(DepthFirstSearch)

set(CMAKE_CXX_STANDARD 20)
include_directories(util)
add_executable(DepthFirstSearch main.cpp util/util.h test_factory.h L79_exist/L79_exist.cpp L79_exist/L79_exist.h L94_inorderTraversal/L94_inorderTraversal.cpp L94_inorderTraversal/L94_inorderTraversal.h L98_isValidBST/L98_isValidBST.cpp L98_isValidBST/L98_isValidBST.h L99_recoverTree/L99_recoverTree.cpp L99_recoverTree/L99_recoverTree.h)