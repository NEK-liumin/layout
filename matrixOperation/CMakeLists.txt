cmake_minimum_required (VERSION 3.10)

project ("matrixOperation")
aux_source_directory(./ SRC)

set(LIBRARY_OUTPUT_PATH ${LIBPATH})
add_library(matrixOperation STATIC ${SRC})
