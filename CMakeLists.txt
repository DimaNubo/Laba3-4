cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME Project_MultiStack)
project(${PROJECT_NAME})

set(MyExceptionLib MyExceptionLib)


set(MultiStack MultiStack)
set(MultiStackLib MultiStackLib)
set(MultiStackTest MultiStackTest)
set(StackLib StackLib)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/MyExceptionLib)
add_subdirectory(MyExceptionLib)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/MultiStackLib)
add_subdirectory(MultiStack)
add_subdirectory(MultiStackLib)
add_subdirectory(MultiStackTest)
add_subdirectory(gtest)
add_subdirectory(StackLib)




