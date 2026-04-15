cmake_minimum_required(VERSION 3.10)
project(shadow_mode CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Add the shadow_mode executable
add_executable(shadow_mode shadow_mode.cpp)

# Optional: Install to system
install(TARGETS shadow_mode DESTINATION bin)

# Optional: Create a symlink for easier access
add_custom_command(TARGET shadow_mode POST_BUILD
    COMMAND ${CMAKE_COMMAND} -E echo "Build complete! Run: ./shadow_mode <text>"
)
