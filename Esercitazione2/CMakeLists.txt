cmake_minimum_required(VERSION 2.8.3)
project(exercise_2)

# TODO invokes the routines to find a package called Eigen3
include_directories(/usr/include/eigen3 src)

# TODO specify additional locations of header files - vedi sopra

# add project source code
add_subdirectory(src)

# TODO do the same for executables
add_subdirectory()