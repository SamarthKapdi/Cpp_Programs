cmake_minimum_required(VERSION 3.20)
project(Cpp_Programs LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Build Modern C++ examples (kept in their own folder)
if(EXISTS "${CMAKE_SOURCE_DIR}/Modern C++ (C++20+)/CMakeLists.txt")
  add_subdirectory("${CMAKE_SOURCE_DIR}/Modern C++ (C++20+)")
endif()

message(STATUS "Top-level CMake configured. Use subfolders' CMake files to build examples.")
