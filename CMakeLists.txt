cmake_minimum_required(VERSION 3.1)
project(PKN)

set(CMAKE_CXX_STANDARD 11)

add_executable(PKN main.cpp Player.cpp Player.h HumanPlayer.cpp HumanPlayer.h MonkeyPlayer.cpp MonkeyPlayer.h DonkeyPlayer.cpp DonkeyPlayer.h ElephantPlayer.cpp ElephantPlayer.h GameManager.cpp GameManager.h)