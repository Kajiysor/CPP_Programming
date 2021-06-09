cmake_minimum_required(VERSION 3.10)

project(TEST VERSION 1.0)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

file(GLOB SOURCES "*.cpp")

add_executable(TEST ${SOURCES})

target_include_directories(TEST
    PRIVATE 
        ${PROJECT_SOURCE_DIR}
)