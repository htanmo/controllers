cmake_minimum_required(VERSION 3.10)
project(Controllers)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(include)

add_library(controllers STATIC
  src/PDController.cpp
  src/PIController.cpp
  src/PIDController.cpp
)
