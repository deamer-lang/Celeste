cmake_minimum_required(VERSION 3.18)

project(Celeste)

find_package(Deamer_External REQUIRED)
find_package(Deamer_Algorithm REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

add_executable(Celestea "${Celeste_SOURCE_DIR}/main.cpp")
target_link_libraries(Celestea PUBLIC Celeste) 