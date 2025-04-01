cmake_minimum_required(VERSION 3.29)
project(operations_with_simple_queue C)

set(CMAKE_C_STANDARD 11)

include_directories(simple_queue)

add_executable(operations_with_simple_queue
    simple_queue/main.c
    simple_queue/simple_queue.c
    simple_queue/simple_queue.h)
