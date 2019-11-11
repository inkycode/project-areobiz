cmake_minimum_required(VERSION 3.0)

project(Project_Areobiz)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/$ENV{BINRARY_DIR})

add_subdirectory(3rd_party)
add_subdirectory(game)