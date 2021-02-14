cmake_minimum_required(VERSION 3.17)
project(Stack)

set(CMAKE_CXX_STANDARD 14)

add_executable(Stack main.cpp Stack.h utils.h Queue.h Container.h IContainer.h IEnumerable.h)