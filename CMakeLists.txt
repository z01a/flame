cmake_minimum_required(VERSION 3.1.0)

set(FLAME_ROOT "")
set(FLAME_APPLICATION "")
set(FLAME_BOOTSTRAP "")

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "" FORCE)

option(WINDOWS_APPLICATION "We are building WINDOWS application" OFF)

if(WINDOWS_APPLICATION)
    add_definitions(-DWINDOWS_APPLICATION)
endif()

project(Flame)

set(CMAKE_CXX_STANDARD 11)

add_subdirectory(Bootstrap)
add_subdirectory(Application)
