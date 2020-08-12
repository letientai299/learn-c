cmake_minimum_required(VERSION 3.10)

project(step01 VERSION 1.0.1)

add_executable(tut tut.cxx)

# use a config file to pass the version number to the code
configure_file(tut_config.h.in tut_config.h)

# The target here is not project name (as specified in 'project').
# It should be target in 'add_executable' instead.
target_include_directories(tut PUBLIC "${PROJECT_BINARY_DIR}")

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)
