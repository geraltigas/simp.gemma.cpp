cmake_minimum_required(VERSION 3.28)
project(simp_gemma_cpp)

set(CMAKE_CXX_STANDARD 17)

include_directories(src)

# add all cc files in src to the project
file(GLOB_RECURSE SRC_FILES src/*.cpp)
add_library(simp_gemma_cpp_lib ${SRC_FILES})

add_executable(simp_gemma_cpp main.cpp)

target_link_libraries(simp_gemma_cpp simp_gemma_cpp_lib)

# link glog
find_package(glog REQUIRED)
target_link_libraries(simp_gemma_cpp glog::glog)