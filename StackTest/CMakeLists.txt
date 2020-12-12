set(target Stack_Test)

file(GLOB hdrs "*.h*")
file(GLOB srcs "*.cpp")

include_directories("${CMAKE_CURRENT_SOURCE_DIR}/../gtest")


add_executable(${StackTest} ${srcs} ${hdrs})
target_link_libraries(${StackTest} ${StackLib} gtest)