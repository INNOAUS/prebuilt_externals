#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ssh_shared" for configuration ""
set_property(TARGET ssh_shared APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(ssh_shared PROPERTIES
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libssh.4.8.1.dylib"
  IMPORTED_SONAME_NOCONFIG "@rpath/libssh.4.dylib"
  )

list(APPEND _IMPORT_CHECK_TARGETS ssh_shared )
list(APPEND _IMPORT_CHECK_FILES_FOR_ssh_shared "${_IMPORT_PREFIX}/lib/libssh.4.8.1.dylib" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
