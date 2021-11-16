cmake_minimum_required(VERSION 3.0.0)
project(Tutorial VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES Video16.cpp Monster.cpp Monster.hpp)
add_executable(Tutorial ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
