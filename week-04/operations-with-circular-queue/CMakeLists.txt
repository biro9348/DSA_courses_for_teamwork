cmake_minimum_required(VERSION 3.29)
project(operations_with_circular_queue C)

set(CMAKE_C_STANDARD 11)

include_directories(circular_queue)

add_executable(operations_with_circular_queue
    circular_queue/circular_queue.c
    circular_queue/circular_queue.h
    circular_queue/main.c)
