cmake_minimum_required(VERSION 3.5)
project(stacklibedd1e)

set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -std=c11")

set(SOURCE_FILES main.c stack.c)
add_executable(stacklibedd1e ${SOURCE_FILES})