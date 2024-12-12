cmake_minimum_required(VERSION 3.10)

project("layout")

set(CMAKE_CXX_STANDARD 17)

set(LAYOUT ${PROJECT_SOURCE_DIR})
set(LIBPATH ${LAYOUT}/lib)

if(WIN32)
set(CMAKE_PREFIX_PATH "C:/Users/13241/AppData/Local/Programs/Python/Python313/Lib/site-packages/pybind11/share/cmake/pybind11" ${CMAKE_PREFIX_PATH})
endif()

find_package(pybind11 REQUIRED)

include_directories(${PROJECT_SOURCE_DIR}/windSource)
include_directories(${PROJECT_SOURCE_DIR}/matrixOperation)
include_directories(${pybind11_INCLUDE_DIRS})

add_subdirectory(windSource)
add_subdirectory(matrixOperation)
add_subdirectory(main_cpp)

# set(CMAKE_BUILD_TYPE Release)