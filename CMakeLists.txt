cmake_minimum_required(VERSION 3.10)
project(Vatrych4)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Main executable
add_executable(Vatrych4 main.cpp math_operations.cpp)

# Enable testing
enable_testing()

# Unit tests executable
add_executable(unit_tests tests/unit_tests.cpp math_operations.cpp)
target_include_directories(unit_tests PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})

# Add test
add_test(NAME UnitTests COMMAND unit_tests)