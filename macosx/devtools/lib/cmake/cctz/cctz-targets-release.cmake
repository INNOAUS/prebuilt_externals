#----------------------------------------------------------------
# Generated CMake target import file for configuration "Release".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "cctz::cctz" for configuration "Release"
set_property(TARGET cctz::cctz APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cctz::cctz PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELEASE "CXX"
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/lib/libcctz.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS cctz::cctz )
list(APPEND _IMPORT_CHECK_FILES_FOR_cctz::cctz "${_IMPORT_PREFIX}/lib/libcctz.a" )

# Import target "cctz::time_tool" for configuration "Release"
set_property(TARGET cctz::time_tool APPEND PROPERTY IMPORTED_CONFIGURATIONS RELEASE)
set_target_properties(cctz::time_tool PROPERTIES
  IMPORTED_LOCATION_RELEASE "${_IMPORT_PREFIX}/bin/time_tool"
  )

list(APPEND _IMPORT_CHECK_TARGETS cctz::time_tool )
list(APPEND _IMPORT_CHECK_FILES_FOR_cctz::time_tool "${_IMPORT_PREFIX}/bin/time_tool" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
