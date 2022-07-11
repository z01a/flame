cmake_minimum_required(VERSION 3.1.0)

project(Bootstrap)

set(BOOTSTRAP_SOURCE
    # Platform specific source files for Darwin,Linux or Windows
    ${CMAKE_SYSTEM_NAME}/Initialization_${CMAKE_SYSTEM_NAME}.cpp

    # Non-Platform specific source files
    Initialization.cpp
    Bootstrap.cpp
    )

add_library(Bootstrap ${BOOTSTRAP_SOURCE})

target_include_directories(Bootstrap PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Includes)