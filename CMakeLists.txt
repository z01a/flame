cmake_minimum_required(VERSION 3.1.0)

set(FLAME_ROOT "")
set(FLAME_APPLICATION "")
set(FLAME_BOOTSTRAP "")

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

option(FLAME_WINDOW_APPLICATION "We are building WINDOW application" OFF)
option(FLAME_CONSOLE_APPLICATION "We are building CONSOLE application" OFF)

if(FLAME_WINDOW_APPLICATION)
    add_definitions(-DFLAME_WINDOW_APPLICATION)
else()
    add_definitions(-DFLAME_CONSOLE_APPLICATION)
endif()

project(Flame)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Bootstrap)
add_subdirectory(Application)
