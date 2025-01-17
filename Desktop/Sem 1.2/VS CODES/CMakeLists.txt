cmake_minimum_required(VERSION 3.10)
project(AgeVoting)

set(CMAKE_CXX_STANDARD 11)

enable_testing()

add_executable(AgeVoting Age Voting.cpp Right Age voting.cpp)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_subdirectory(tests)

add_executable(runTests tests/main.cpp)
target_link_libraries(runTests gtest gtest_main)
add_test(NAME runTests COMMAND runTests)