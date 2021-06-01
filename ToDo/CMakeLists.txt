cmake_minimum_required(VERSION 3.5)

project(ToDo LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)

set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

find_package(Qt5 COMPONENTS Widgets REQUIRED)

  add_executable(ToDo
    main.cpp
    homepage.cpp
    homepage.h
    main.ui
    note.h
    note.ui
    note.cpp
    )
target_link_libraries(ToDo PRIVATE Qt5::Widgets libToDo)
