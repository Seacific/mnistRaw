cmake_minimum_required(VERSION 3.10)

project(mnistRaw)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
add_compile_options(-g)

add_library(
  neuralEngine
  src/neuralEngine/test.cpp
)

add_executable(
  mnistRaw
  src/main.cpp
)

target_include_directories(
  mnistRaw
  PRIVATE
  include/
  src/
)

target_include_directories(
  neuralEngine
  PRIVATE
  include/
  src/
)

target_link_libraries(mnistRaw neuralEngine)
