cmake_minimum_required(VERSION 3.15)
project(MyTests)

# Enable testing
enable_testing()

# Add Catch2 from the local directory
add_subdirectory(lib/Catch2)

# Create the test executable
add_executable(tests test/test_input.cpp)

# Link Catch2 to the test executable
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)

# Register the test executable with CTest
add_test(NAME MyTests COMMAND tests)
