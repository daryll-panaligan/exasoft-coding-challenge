# Setup project

cmake_minimum_required(VERSION 3.14)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

project(exasoft-coding-challenge)

# Compile main application

set(SOURCES
    src/1.cpp
    src/2.cpp
    src/3.cpp
    src/4.cpp
)

add_executable(Exasoft ${SOURCES})

