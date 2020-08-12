cmake_minimum_required(VERSION 3.10)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED true)

project(tut VERSION 1.0.5)

# If this line is after the 'configure_file' line, the option value won't take
# effect, means it's always OFF.
option(USE_MATH_FUNCS "Use tutorial provided math implementation" ON)

if (USE_MATH_FUNCS)
  # make use of the lib in sub dir
  add_subdirectory(./math_funcs)

  list(APPEND EXTRA_LIBS math_funcs)
endif ()

add_executable(tut tut.cxx)

# The name here must match the name of lib defined in
# sub_dir/CMakeLists.txt 'add_library()'.
target_link_libraries(tut PUBLIC ${EXTRA_LIBS})

# The target here is not project name (as specified in 'project').
# It should be target in 'add_executable' instead.
target_include_directories(tut PUBLIC
  "${PROJECT_BINARY_DIR}"
  )

# use a config file to pass some cmake setting to the source code
configure_file(tut_config.h.in tut_config.h)

install(TARGETS tut DESTINATION bin)
install(FILES ${PROJECT_BINARY_DIR}/tut_config.h DESTINATION include)

enable_testing()

# does the application run?
add_test(NAME Run COMMAND Tut 25)

# does the usage message work?
add_test(NAME Usage COMMAND Tut)
set_tests_properties(Usage
  PROPERTIES PASS_REGULAR_EXPRESSION "Usage:.*number"
  )

# define a function to simplify adding tests
function(do_test target arg result)
  add_test(NAME Comp${arg} COMMAND ${target} ${arg})
  set_tests_properties(Comp${arg}
    PROPERTIES PASS_REGULAR_EXPRESSION ${result}
    )
endfunction(do_test)

# do a bunch of result based tests
do_test(tut 4 "4 is 2")
do_test(tut 9 "9 is 3")
do_test(tut 5 "5 is 2.236")


