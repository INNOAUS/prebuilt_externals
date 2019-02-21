#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Async++" for configuration ""
set_property(TARGET Async++ APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(Async++ PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libasync++.so"
  IMPORTED_SONAME_NOCONFIG "libasync++.so"
  )

list(APPEND _IMPORT_CHECK_TARGETS Async++ )
list(APPEND _IMPORT_CHECK_FILES_FOR_Async++ "${_IMPORT_PREFIX}/lib/libasync++.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
