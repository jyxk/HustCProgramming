cmake_minimum_required(VERSION 3.8)
project(3_5)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        file.h
        file1.c
        file2.c)

add_executable(3_5 ${SOURCE_FILES})