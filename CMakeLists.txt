cmake_minimum_required(VERSION 3.5)
project(30_day_of_code_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Day01/data-types.cpp Day02/Operators.cpp)
#add_executable(30_day_of_code_cplusplus ${SOURCE_FILES} Day02/Operators.cpp)
add_executable(30_day_of_code_cplusplus Day02/Operators.cpp)