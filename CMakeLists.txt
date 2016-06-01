cmake_minimum_required(VERSION 3.5)
project(trabajoDeClua)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp Cliente.cpp Cliente.h Servicio.cpp Servicio.h)
add_executable(trabajoDeClua ${SOURCE_FILES})