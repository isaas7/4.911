cmake_minimum_required(VERSION 3.27)
project(oob)

set(CMAKE_CXX_STANDARD 14)

include_directories(include)

add_executable(main
    src/foo/foo.cpp
    src/foo/bar.cpp
    src/baz/qux.cpp
    src/baz/quux.cpp
)

# Add custom target for cleaning
add_custom_target(clean-all
    COMMAND ${CMAKE_COMMAND} -P ${CMAKE_CURRENT_BINARY_DIR}/cmake_clean.cmake
)

# Create a cmake script for cleaning
file(WRITE ${CMAKE_CURRENT_BINARY_DIR}/cmake_clean.cmake
"
file(REMOVE_RECURSE
    \${CMAKE_BINARY_DIR}/CMakeFiles
    \${CMAKE_BINARY_DIR}/CMakeCache.txt
    \${CMAKE_BINARY_DIR}/cmake_install.cmake
    \${CMAKE_BINARY_DIR}/Makefile
    \${CMAKE_BINARY_DIR}/main
)
")
