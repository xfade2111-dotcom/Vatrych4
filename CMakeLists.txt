# CMakeLists.txt for Vatrych4

cmake_minimum_required(VERSION 3.10)
project(Vatrych4)

# Google Test support
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})

# Set up the unit_tests executable
add_executable(unit_tests main.cpp)

# Link GTest libraries
target_link_libraries(unit_tests GTest::gtest_main GTest::gmock)

# Build instructions:
# 1. Create a build directory: `mkdir build && cd build`
# 2. Run CMake: `cmake ..`
# 3. Build the project: `make`

# Test instructions:
# 1. After building, run the unit tests: `./unit_tests`
