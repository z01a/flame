cmake_minimum_required(VERSION 3.1.0)

project(Application)

if(FLAME_WINDOW_APPLICATION)
    set(CMAKE_WIN32_EXECUTABLE ON)
endif()

set(APPLICATION_SOURCE
    Initialization.cpp
    Application.cpp
)

add_executable(Application ${APPLICATION_SOURCE})

target_link_libraries(Application Bootstrap)

target_include_directories(Application PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/Includes)