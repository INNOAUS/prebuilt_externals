message(STATUS "start")
unset(iter)
while(NOT "${iter}" STREQUAL "aaaaa")
  string(APPEND iter "a")
  if("${iter}" STREQUAL "aaa")
    continue()
  endif()
  message(STATUS "${iter}")
endwhile()
message(STATUS "end")
