#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "Poco::Zip" for configuration "RelWithDebInfo"
set_property(TARGET Poco::Zip APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(Poco::Zip PROPERTIES
  IMPORTED_LINK_INTERFACE_LANGUAGES_RELWITHDEBINFO "CXX"
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libPocoZip.a"
  )

list(APPEND _IMPORT_CHECK_TARGETS Poco::Zip )
list(APPEND _IMPORT_CHECK_FILES_FOR_Poco::Zip "${_IMPORT_PREFIX}/lib/libPocoZip.a" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
