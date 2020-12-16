file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../gtest")

add_executable(${MultiStackTest} ${srcs} ${hdrs})
target_link_libraries(${MultiStackTest} ${MultiStackLib} gtest)