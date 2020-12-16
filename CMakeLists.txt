cmake_minimum_required(VERSION 2.8)
set(PROJECT_NAME Project_MultiStack)
project(${PROJECT_NAME})

set(MyExceptionLib MyExceptionLib)


set(ArrList ArrList)
set(ArrListLib ArrListLib)
set(ArrListTest ArrListTest)

set(CMAKE_CONFIGURATION_TYPES "Debug;Release" CACHE STRING "Configs" FORCE)
if(NOT CMAKE_BUILD_TYPE) 
 set(CMAKE_BUILD_TYPE Release) 
endif()

include_directories(${CMAKE_CURRENT_SOURCE_DIR}/MyExceptionLib)
add_subdirectory(MyExceptionLib)


include_directories(${CMAKE_CURRENT_SOURCE_DIR}/ArrListLib)
add_subdirectory(ArrList)
add_subdirectory(ArrListLib)
add_subdirectory(ArrListTest)
add_subdirectory(gtest)




