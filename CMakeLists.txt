cmake_minimum_required(VERSION 3.14)  
project(Vatrych4)  

# FetchContent for GoogleTest  
include(FetchContent)  
FetchContent_Declare(  
    googletest  
    GIT_REPOSITORY https://github.com/google/googletest.git  
    GIT_TAG release-1.11.0  
)  
FetchContent_MakeAvailable(googletest)  

set(CMAKE_CXX_STANDARD 14)  

# Your source files  
set(SOURCE_FILES  
    src/main.cpp  
    src/other_file.cpp  
)  

# Add executable  
add_executable(Vatrych4 ${SOURCE_FILES})  

# Add tests  
enable_testing()  
add_executable(Vatrych4_tests test/main_test.cpp)  
target_link_libraries(Vatrych4_tests gtest gtest_main)  
add_test(NAME Vatrych4Tests COMMAND Vatrych4_tests)  
