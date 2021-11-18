cmake_minimum_required(VERSION 3.0.0)
project(Tutorial VERSION 0.1.0)

include(CTest)
enable_testing()

add_subdirectory(tictactoe)

# set(SOURCES Video16.cpp Monster.cpp Monster.hpp)
set(SOURCES tictactoe/main.cpp tictactoe/TicTacToeGame.cpp tictactoe/TicTacToeGame.hpp)
add_executable(Tutorial ${SOURCES})

set(CPACK_PROJECT_NAME ${PROJECT_NAME})
set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
include(CPack)
