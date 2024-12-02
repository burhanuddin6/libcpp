# Create a library target
cmake_minimum_required(VERSION 3.15)
project(MyLibrary)
add_library(MyLibrary STATIC
    src/input.cpp
)

# Include the header files for consumers of this library
target_include_directories(MyLibrary PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/include)
