cmake_minimum_required(VERSION 3.20)
project(cpp_programming)

set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_FLAGS "-fexec-charset=CP949")

add_executable(algo_LinkedList algo/LinkedList.c)
add_executable(algo_DoubleLinkedList algo/DoubleLinkedList.c)
add_executable(algo_ArrayStack algo/ArrayStack.cpp)
add_executable(algo_ArrayStack2 algo/ArrayStack2.cpp)
add_executable(algo_LinkedListStack algo/LinkedListStack.cpp)