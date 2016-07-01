cmake_minimum_required(VERSION 3.5)
project(30_day_of_code_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Day01/data-types.cpp Day02/Operators.cpp Day03/Conditional-statements.cpp
        Day04/class-vs-instance.cpp Day05/Loops.cpp Day06/Review-loop.cpp
        Day06/Review-loop.cpp Day07/arrays.cpp Day08/Dictionaries-and-maps.cpp
        Day09/Recursion.cpp Day10/Binary_numbers.cpp Day11/2d-arrays.cpp
        )
#add_executable(30_day_of_code_cplusplus ${SOURCE_FILES} Day02/Operators.cpp)
add_executable(30_day_of_code_cplusplus Day12/Inheritance.cpp)