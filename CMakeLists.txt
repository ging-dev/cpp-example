cmake_minimum_required (VERSION 3.5)
project(Gingdev)

find_package(GTest REQUIRED)

# Enable coverage
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fprofile-arcs -ftest-coverage")

# Source files
file(GLOB_RECURSE SOURCE "src/*.cpp")

# Test file
file(GLOB_RECURSE TEST "test/*.cpp")

# Running tests
add_executable(tests ${TEST} ${SOURCE})
target_link_libraries(tests ${GTEST_BOTH_LIBRARIES} pthread)
