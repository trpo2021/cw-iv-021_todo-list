#----------------------------------------------------------------
# Generated CMake target import file.
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "qtcsv" for configuration ""
set_property(TARGET qtcsv APPEND PROPERTY IMPORTED_CONFIGURATIONS NOCONFIG)
set_target_properties(qtcsv PROPERTIES
  IMPORTED_LINK_DEPENDENT_LIBRARIES_NOCONFIG "Qt5::Core"
  IMPORTED_LOCATION_NOCONFIG "${_IMPORT_PREFIX}/lib/libqtcsv.so.1.6.0"
  IMPORTED_SONAME_NOCONFIG "libqtcsv.so.1"
  )

list(APPEND _IMPORT_CHECK_TARGETS qtcsv )
list(APPEND _IMPORT_CHECK_FILES_FOR_qtcsv "${_IMPORT_PREFIX}/lib/libqtcsv.so.1.6.0" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
