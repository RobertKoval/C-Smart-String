cmake_minimum_required(VERSION 3.12)
project(SmartLine C)

set(CMAKE_C_STANDARD 11)

include_directories(${PROJECT_SOURCE_DIR}/)

add_executable(SmartLine main.c smart_string.c)

