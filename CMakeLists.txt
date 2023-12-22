cmake_minimum_required(VERSION 3.5)
project(CMakePractice VERSION 1.0 LANGUAGES C CXX)

# Set standard to C++11
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CMakePractice main.cpp)
configure_file(config.h.in config.h)
target_include_directories(CMakePractice PUBLIC "${PROJECT_BINARY_DIR}")