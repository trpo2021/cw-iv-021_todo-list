cmake_minimum_required(VERSION 3.5)

project(tests LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)


find_package(Qt5 COMPONENTS Widgets REQUIRED)
find_package(Qt5Test REQUIRED)


  add_executable(tests
    main.cpp
    todo_test.cpp
    todo_test.h
    )
target_link_libraries(tests PRIVATE Qt5::Widgets Qt5::Test libToDo )
