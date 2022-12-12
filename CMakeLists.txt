cmake_minimum_required(VERSION 3.10)
project(paoo)

set(CMAKE_CXX_STANDARD 14)

add_executable(paoo main.cpp Car.cpp Car.h Mercedes.cpp Mercedes.h)
