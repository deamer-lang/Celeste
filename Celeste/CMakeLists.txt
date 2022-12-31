cmake_minimum_required(VERSION 3.18)

project(Celeste)

find_package(Deamer_External REQUIRED)
find_package(Deamer_Algorithm REQUIRED)

include(deamer.cmake)

add_subdirectory(extern)
add_subdirectory(lib)

find_package(GTest)
if (GTEST_FOUND)
	enable_testing()
	add_subdirectory(tests)
else()
	enable_testing()
	include(GoogleTest)
	add_subdirectory(tests)
endif()

add_executable(Celestea "${Celeste_SOURCE_DIR}/main.cpp")
target_link_libraries(Celestea PUBLIC Celeste)