cmake_minimum_required(VERSION 3.19)
project(Tarea3EDD)

set(CMAKE_CXX_STANDARD 14)

add_executable(Tarea3EDD
        main.cpp)

add_executable(main main.cpp)
add_executable(main.cpp main.cpp)
set_target_properties(main.cpp PROPERTIES RUNTIME_OUTPUT_DIRECTORY "${PROJECT_SOURCE_DIR}")