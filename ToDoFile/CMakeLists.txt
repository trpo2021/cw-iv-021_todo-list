cmake_minimum_required(VERSION 3.5)

project(libToDo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)
add_subdirectory(thirdparty/qtcsv)

  add_library(libToDo SHARED
    todofile.cpp
    todofile.h
    )
  target_link_libraries(libToDo PRIVATE Qt5::Widgets qtcsv)

