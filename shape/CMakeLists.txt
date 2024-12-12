cmake_minimum_required(VERSION 3.10)

project("shape")

aux_source_directory(./ SRC)

include_directories(${LAYOUT}/matrixOperation)

link_libraries(matrixOperation)

set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(shape ${SRC})

# PYBIND11_ADD_MODULE(addPY ${SRC})