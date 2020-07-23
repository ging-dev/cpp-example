cmake_minimum_required (VERSION 3.5)
project(Gingdev)

find_package(GTest REQUIRED)

# Enable coverage
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# Include header files
include_directories(include)

# Source files
file(GLOB SOURCE "src/*.cpp")

# Add library
add_library(ging ${SOURCE})

# Test file
file(GLOB TEST "test/*.cpp")

# Running tests
add_executable(tests ${TEST} ${SOURCE})
target_link_libraries(tests ging)
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} pthread)
