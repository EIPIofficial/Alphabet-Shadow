cmake_minimum_required(VERSION 3.10)
project(shadow_mode CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the shadow_mode executable
add_executable(shadow_mode shadow_mode.cpp)
