cmake_minimum_required(VERSION 3.10)

project("wakeModel")

aux_source_directory(./ SRC)

include_directories(${LAYOUT}/matrixOperation)

link_libraries(matrixOperation)

set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(wakeModel ${SRC})

# PYBIND11_ADD_MODULE(addPY ${SRC})