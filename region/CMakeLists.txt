cmake_minimum_required(VERSION 3.10)

project("region")

aux_source_directory(./ SRC)

link_libraries(matrixOperation)
link_libraries(shape)

set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(region ${SRC})

# PYBIND11_ADD_MODULE(addPY ${SRC})