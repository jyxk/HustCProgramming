cmake_minimum_required(VERSION 3.8)
project(workcode)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES
        4th/4_1.c
        4th/4_2.c
        4th/4_3.c
        4th/4_41.c
        4th/4_42.c
        5th/5_1.c
        5th/5_2.c
        5th/5_21.c
        5th/5_22.c
        5th/5_23.c
        5th/5_24.c
        5th/5_25.c
        5th/tempCodeRunnerFile.c
        first/1_1.c
        first/1_2.c
        first/1_31.c
        first/1_32.c
        first/1_33.c
        second/2_1.c
        second/2_2.c
        second/2_22.c
        second/2_31.c
        second/2_32.c
        second/2_33.c
        second/2_34.c
        second/2_4.c
        second/tempCodeRunnerFile.c
        third/3_5/file.h
        third/3_5/file1.c
        third/3_5/file2.c
        third/3_1.c
        third/3_2.c
        third/3_3.c
        third/3_31.c
        third/3_32.c
        third/3_41.c
        third/3_42.c
        third/tempCodeRunnerFile.c
        tempCodeRunnerFile.c)

add_executable(workcode ${SOURCE_FILES})