cmake_minimum_required(VERSION 3.8)
project(multiple_files)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp second_file.cpp add.h)
add_executable(multiple_files ${SOURCE_FILES})