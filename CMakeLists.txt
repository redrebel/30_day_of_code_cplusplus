cmake_minimum_required(VERSION 3.5)
project(30_day_of_code_cplusplus)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES Day01/data-types.cpp Day02/Operators.cpp Day03/Conditional-statements.cpp
        Day04/class-vs-instance.cpp Day05/Loops.cpp Day06/Review-loop.cpp
        Day06/Review-loop.cpp Day07/arrays.cpp Day08/Dictionaries-and-maps.cpp
        Day09/Recursion.cpp Day10/Binary_numbers.cpp Day11/2d-arrays.cpp
        Day12/Inheritance.cpp Day13/adstract-classes.cpp Day14/Scope.cpp
        Day15/Linked_List.cpp Day16/Exceptions-StringToInteger.cpp Day17/More_Exceptions.cpp
        Day18/Queues_and_Stacks.cpp Day19/interfaces.cpp Day20/sorting.cpp
        Day21/Generics.cpp)
#add_executable(30_day_of_code_cplusplus ${SOURCE_FILES} Day02/Operators.cpp)
add_executable(30_day_of_code_cplusplus Day22/Binary_Search_Tree.cpp)