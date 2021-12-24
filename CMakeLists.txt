# cmake 최소 버전 설정. 항상 얘부터 나와야 함
cmake_minimum_required(VERSION 3.14)

# project 버전 설정
set(PROJECT_VERSION_MAJOR 0)
set(PROJECT_VERSION_MINOR 1)
set(PROJECT_VERSION_PATCH 0)

# project 설정
project(
    MyCMakeTemplate
    VERSION "${PROJECT_VERSION_MAJOR}.${PROJECT_VERSION_MINOR}.${PROJECT_VERSION_PATCH}"
    DESCRIPTION "CMake 예제 템플릿"
    LANGUAGES CXX
)

# set(CMAKE_BUILD_TYPE Debug)

# 라이브러리 output 경로 설정
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)

add_subdirectory(lib)
add_subdirectory(src)