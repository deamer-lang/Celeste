cmake_minimum_required(VERSION 3.16)

project(Celeste_LanguageProject
                      DESCRIPTION "Project for the language(s): Celeste"
                      LANGUAGES CXX)

find_package(Deamer REQUIRED)

add_subdirectory(CompilerGenerator)
add_subdirectory(Celeste)
