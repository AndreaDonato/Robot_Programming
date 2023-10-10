cmake_minimum_required(VERSION 2.8.3)
project(minicore)

# signature_of_eigen3_matrix_library is just there as a signature to help identify directories containing Eigen3. 
# when writing a script looking for Eigen3, just look for this file. This is especially useful to help disambiguate with Eigen2...

# this is used to find a directory containing the named file and to store the result inside the variable EIGEN3_INCLUDE_DIR 

# specify additional locations of header files - Path in cui il progetto va a cercare gli #include
include_directories(/usr/include/eigen3 src)

# add project source code - Va a cercare ed esegue il CMakeLists.txt della subdirectory
add_subdirectory(src)

# TODO do the same for executables
add_subdirectory(executables)

# A questo punto eseguire "cmake ../" nella directory "build" in cui andrà tutto il progetto, dopo di che se ho ben capito eseguendo make dovrebbe crearmi l'eseguibile (?)