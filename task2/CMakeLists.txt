cmake_minimum_required(VERSION 3.1)
project(PROJECT1)
set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_SOURCE_DIR})

find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS}) 

add_custom_command(
    OUTPUT ${PROJECT_SOURCE_DIR}/A/index.h PRE_BUILD
    COMMAND python3 ${PROJECT_SOURCE_DIR}/A/preparing.py ${PROJECT_SOURCE_DIR}/A/index.h
    COMMEND "generate include.h"     
)

set(CMAKE_BINARY_DIR ${CMAKE_SOURCE_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_BINARY_DIR})
set(LIBRARY_OUTPUT_PATH ${CMAKE_SOURCE_DIR}/lib)


enable_testing()
add_subdirectory(B)

set(TEST_SOURCE C/main_test.cpp)
set(SOURCE C/main.cpp)

add_executable(CTest ${TEST_SOURCE})
add_executable(main ${SOURCE})

target_link_libraries(CTest ${GTEST_LIBRARIES} pthread)
target_link_libraries(main lib)
