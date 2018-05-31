cmake_minimum_required(VERSION 2.8)
project(main)

SET(CMAKE_C_COMPILER "gcc")
SET(CMAKE_CXX_COMPILER "g++")

if(CMAKE_COMPILER_IS_GNUCXX)
    #add_compile_options(-g -std=c++11)
    add_compile_options(-g)
endif(CMAKE_COMPILER_IS_GNUCXX)

include_directories(.)
#link_directories(.)
link_libraries()

aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} CUR_DIR_SRCS)

add_executable(main ${CUR_DIR_SRCS})

