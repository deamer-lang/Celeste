# This file is auto-generated and auto-maintained.
# Please don't change code in this file, as new changes will be discarded,
# when Deamer regenerates the project.
#
# If you want to contribute to Deamer.
# Please visit: https://github.com/Deruago/theDeamerProject 
#
# This file is part of the directory: lib

file(GLOB_RECURSE SOURCE_LIST "${Celeste_SOURCE_DIR}/lib/*.cpp")

add_library(Celeste_static_library STATIC ${SOURCE_LIST})

target_include_directories(Celeste_static_library PUBLIC "${Celeste_SOURCE_DIR}/extern" "${Celeste_SOURCE_DIR}/include")
target_compile_features(Celeste_static_library PUBLIC cxx_std_17)
set_target_properties(Celeste_static_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(Celeste_static_library PUBLIC Celeste_external_libraries)

add_library(Celeste_shared_library SHARED ${SOURCE_LIST})

target_include_directories(Celeste_shared_library PUBLIC "${Celeste_SOURCE_DIR}/extern" "${Celeste_SOURCE_DIR}/include")
target_compile_features(Celeste_shared_library PUBLIC cxx_std_17)
set_target_properties(Celeste_shared_library PROPERTIES LINKER_LANGUAGE CXX)

target_link_libraries(Celeste_shared_library PUBLIC Celeste_external_libraries)

