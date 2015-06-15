cmake_minimum_required(VERSION 3.2)

project(material-fem)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(MATERIAL_SRC *.cpp)

add_library(material-fem-lib STATIC ${MATERIAL_SRC} valuestores/ValueAxis.cpp valuestores/ValueAxis.h)

add_executable(material-fem ${MATERIAL_SRC} valuestores/ValueAxis.cpp valuestores/ValueAxis.h)