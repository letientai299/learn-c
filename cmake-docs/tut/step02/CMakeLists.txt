cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(tut VERSION 1.0)


if (USE_MATH_FUNCS)
  # make use of the lib in sub dir
  add_subdirectory(./math_funcs)

  list(APPEND EXTRA_LIBS math_funcs)
  list(APPEND EXTRA_INCLUDES "${PROJECT_BINARY_DIR}/math_funcs")
endif()

add_executable(tut tut.cxx)

# The name here must match the name of lib defined in
# sub_dir/CMakeLists.txt 'add_library()'.
target_link_libraries(tut PUBLIC ${EXTRA_LIBS})

# The target here is not project name (as specified in 'project').
# It should be target in 'add_executable' instead.
target_include_directories(tut PUBLIC
  "${PROJECT_BINARY_DIR}"
  "${EXTRA_INCLUDES}"
  )

# If this line is after the 'configure_file' line, the option value won't take
# effect, means it's always OFF.
option(USE_MATH_FUNCS "Use tutorial provided math implementation" ON)

# use a config file to pass some cmake setting to the source code
configure_file(tut_config.h.in tut_config.h)

