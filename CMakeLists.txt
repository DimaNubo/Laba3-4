cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME Project_Queue)
project(${PROJECT_NAME})

set(MyExceptionLib MyExceptionLib)


set(Queue Queue)
set(QueueLib QueueLib)
set(QueueTest QueueTest)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/MyExceptionLib)
add_subdirectory(MyExceptionLib)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/QueueLib)
add_subdirectory(Queue)
add_subdirectory(QueueLib)
add_subdirectory(QueueTest)
add_subdirectory(gtest)




