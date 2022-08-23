cmake_minimum_required(VERSION 3.16)

project(Celeste_LanguageProject
                      DESCRIPTION "Project for the language(s): Celeste"
                      LANGUAGES CXX)

option(Celeste_ENABLE_COMPILER_GENERATOR "Enable Compiler Generation" OFF)
if (Celeste_ENABLE_COMPILER_GENERATOR)
	find_package(Deamer REQUIRED)
	add_subdirectory(CompilerGenerator)
endif()

option(Celeste_ENABLE_LANGUAGE_BUILD "Enable Language CMake Build." ON)
if (Celeste_ENABLE_LANGUAGE_BUILD)
	add_subdirectory(Celeste)

endif()
