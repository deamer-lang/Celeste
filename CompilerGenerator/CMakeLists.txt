cmake_minimum_required(VERSION 3.16)

project(Celeste_CompilerGenerator
                      DESCRIPTION "Compiler/Ecosystem generator for language(s): Celeste. This CompilerGenerator project uses Deamer CC for the generation, and DLDL to generate the definitions."
                      LANGUAGES CXX)

find_package(Deamer REQUIRED)

file(GLOB_RECURSE SOURCE_LIST "${Celeste_CompilerGenerator_SOURCE_DIR}/lib/*.cpp")

add_library(Celeste_CompilerGenerator_implementation_detail STATIC)
target_sources(Celeste_CompilerGenerator_implementation_detail PRIVATE ${SOURCE_LIST})

target_include_directories(Celeste_CompilerGenerator_implementation_detail PUBLIC "${Celeste_CompilerGenerator_SOURCE_DIR}/include")
target_link_libraries(Celeste_CompilerGenerator_implementation_detail PUBLIC Deamer::Deamer)
target_compile_features(Celeste_CompilerGenerator_implementation_detail PUBLIC cxx_std_17)
set_target_properties(Celeste_CompilerGenerator_implementation_detail PROPERTIES LINKER_LANGUAGE CXX)

add_executable(Celeste_CompilerGenerator_Main)
target_sources(Celeste_CompilerGenerator_Main PRIVATE "${Celeste_CompilerGenerator_SOURCE_DIR}/main.cpp")
target_link_libraries(Celeste_CompilerGenerator_Main PRIVATE Celeste_CompilerGenerator_implementation_detail)
