cmake_minimum_required(VERSION 3.1)
project(PROJECT1)




include_directories(${CMAKE_SOURCE_DIR})

add_custom_command(
    OUTPUT ${PROJECT_SOURCE_DIR}/A/index.h PRE_BUILD
    #OUTPUT A/include.h
    COMMAND python3 ${PROJECT_SOURCE_DIR}/A/preparing.py ${PROJECT_SOURCE_DIR}/A/index.h
    COMMEND "generate include.h"     
)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)




add_subdirectory(B)

set(SOURCE C/main.cpp A/index.h)

add_executable(main ${SOURCE})

target_link_libraries(main lib)
