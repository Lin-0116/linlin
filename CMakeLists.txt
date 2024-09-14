cmake_minimum_required(VERSION 3.24)
project(linlin C)

set(CMAKE_C_STANDARD 11)

include_directories(tongxunlu)

add_executable(linlin
        tongxunlu/SeqList.c
        tongxunlu/SeqList.h tongxunlu/Contact.c tongxunlu/Contact.h tongxunlu/test.c tongxunlu/test.c SList/SList.c SList/SList.h SList/test.c)
