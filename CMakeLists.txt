cmake_minimum_required(VERSION 3.23)
project(todo_list)

set(CMAKE_CXX_STANDARD 17)

add_executable(todo_list main.cpp cmake-build-debug/todo.h)
