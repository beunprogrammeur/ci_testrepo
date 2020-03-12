cmake_minimum_required (VERSION 2.8)

project (ci_test DESCRIPTION "project that has basic cmake usage with release/debug build and unit tests"
                 LANGUAGES CXX)

if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

#compiler flags
#set(CMAKE_CXX_FLAGS "-Wall -Wextra -pedantic")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")
set(CMAKE_CXX_STANDARD 14)

add_subdirectory("code")
