cmake_minimum_required(VERSION 3.24)
project(SimplePlusPlus_Private_Source)

set(CMAKE_CXX_STANDARD 17)

add_executable(SimplePlusPlus_Private_Source test.cpp library/xtramath.h test.cpp)
