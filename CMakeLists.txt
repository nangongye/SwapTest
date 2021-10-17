cmake_minimum_required(VERSION 2.8.12.2)
project(SWAP)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -g -02 -Wall")#用于提示那些变量没有使用
include_directories(${CMAKE_SOURCE_DIR}/Base)

add_executable(main_cmake main.cpp Base/base.cpp)