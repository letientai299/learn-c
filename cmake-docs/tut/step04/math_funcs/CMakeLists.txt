# mark this folder a library to be imported in other cmake project
add_library(math_funcs my_sqrt.cxx)

target_include_directories(math_funcs
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
  )

install(TARGETS math_funcs DESTINATION lib)
install(FILES math_funcs.h DESTINATION include)

