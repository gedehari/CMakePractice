cmake_minimum_required(VERSION 3.5)
project(CMakePractice VERSION 1.0 LANGUAGES C CXX)

add_library(tutorial_compiler_flags INTERFACE)
target_compile_features(tutorial_compiler_flags INTERFACE cxx_std_11)

set(USE_MYMATH OFF)
add_subdirectory(mathfunc)

add_executable(CMakePractice main.cpp)
configure_file(config.h.in config.h)
target_include_directories(
    CMakePractice
    PUBLIC 
    "${PROJECT_BINARY_DIR}"
)
target_link_libraries(CMakePractice PUBLIC PRMath tutorial_compiler_flags)