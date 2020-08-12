# mark this folder a library to be imported in other cmake project
add_library(math_funcs my_sqrt.cxx)

target_include_directories(math_funcs
  INTERFACE ${CMAKE_CURRENT_SOURCE_DIR}
  )

install(TARGETS math_funcs DESTINATION lib)
install(FILES math_funcs.h DESTINATION include)

include(CheckSymbolExists)
check_symbol_exists(log "math.h" HAVE_LOG)
check_symbol_exists(exp "math.h" HAVE_EXP)
if (NOT (HAVE_LOG AND HAVE_EXP))
  unset(HAVE_LOG CACHE)
  unset(HAVE_EXP CACHE)
  set(CMAKE_REQUIRED_LIBRARIES "m")
  check_symbol_exists(log "math.h" HAVE_LOG)
  check_symbol_exists(exp "math.h" HAVE_EXP)
  if (HAVE_LOG AND HAVE_EXP)
    target_link_libraries(math_funcs PRIVATE m)
  endif()
endif()


if (HAVE_LOG AND HAVE_EXP)
  target_compile_definitions(math_funcs
    PRIVATE "HAVE_LOG" "HAVE_EXP")
endif()
