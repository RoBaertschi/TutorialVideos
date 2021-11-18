cmake_minimum_required(VERSION 3.0.0)
project(tictactoe VERSION 0.1.0)

include(CTest)
enable_testing()

set(SOURCES main.cpp TicTacToeGame.cpp TicTacToeGame.hpp)
add_executable(tictactoe ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)