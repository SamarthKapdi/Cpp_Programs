cmake_minimum_required(VERSION 3.20)
project(ModernCppExamples LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(concepts Concepts_Example.cpp)
add_executable(ranges Ranges_Example.cpp)
add_executable(coroutines Coroutines_Simple.cpp)
add_executable(format Spaceship_Format FormatAndSpaceship.cpp)
add_executable(atomics AtomicsMemoryModel.cpp)
add_executable(tests UnitTests_Simple.cpp)

message(STATUS "Modern C++ examples (C++23) configured")
