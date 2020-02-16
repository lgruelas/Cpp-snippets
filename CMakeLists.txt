cmake_minimum_required(VERSION 3.9)

project(CPP-snippets)

set(CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)

# add the executable
add_executable("${PROJECT_NAME}" main.cpp)