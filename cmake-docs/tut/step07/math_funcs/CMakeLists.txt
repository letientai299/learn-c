add_executable(make_table make_table.cxx)
add_custom_command(
  OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/table.h
  COMMAND make_table ${CMAKE_CURRENT_BINARY_DIR}/table.h
  DEPENDS make_table
  )

# mark this folder a library to be imported in other cmake project
add_library(math_funcs
  my_sqrt.cxx
  ${CMAKE_CURRENT_BINARY_DIR}/table.h
  )

target_include_directories(math_funcs
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
  PRIVATE ${CMAKE_CURRENT_BINARY_DIR}
  )

install(TARGETS math_funcs DESTINATION lib)
install(FILES math_funcs.h DESTINATION include)
