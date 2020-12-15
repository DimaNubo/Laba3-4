cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME Project_Stack)
project(${PROJECT_NAME})

set(MyExceptionLib MyExceptionLib)


set(Stack Stack)
set(StackLib StackLib)
set(StackTest StackTest)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/MyExceptionLib)
add_subdirectory(MyExceptionLib)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/StackLib)
add_subdirectory(Stack)
add_subdirectory(StackLib)
add_subdirectory(StackTest)
add_subdirectory(gtest)




