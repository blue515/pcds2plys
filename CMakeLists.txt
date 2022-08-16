cmake_minimum_required(VERSION 2.6)
project(pcds2plys)

find_package(PCL 1.2 REQUIRED)

include_directories(${PCL_INCLUDE_DIRS})
link_directories(${PCL_LIBRARY_DIRS})
add_definitions(${PCL_DEFINITIONS})

add_executable(pcds2plys pcds2plys.cpp)

target_link_libraries (pcds2plys ${PCL_LIBRARIES})
