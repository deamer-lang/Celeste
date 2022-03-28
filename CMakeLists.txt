cmake_minimum_required(VERSION 3.16)

project(Celeste_LanguageProject
                      DESCRIPTION "Project for the language(s): Celeste"
                      LANGUAGES CXX)

option(Celeste_ENABLE_COMPILER_GENERATOR "Enable Compiler Generation" ON)
if (Celeste_ENABLE_COMPILER_GENERATOR)
	find_package(Deamer REQUIRED)
	add_subdirectory(CompilerGenerator)
endif()

add_subdirectory(Celeste)
