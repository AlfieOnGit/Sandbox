cmake_minimum_required(VERSION 3.30)
project(Project)
set(CMAKE_CXX_STANDARD 20)

add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Windows")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/PlayStation")
add_subdirectory("${CMAKE_CURRENT_SOURCE_DIR}/Core")
