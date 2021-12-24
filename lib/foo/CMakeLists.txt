# 현재 폴더의 모든 cpp 파일 SRC_FILES 변수에 추가
file(
    GLOB_RECURSE SRC_FILES CONFIGURE_DEFENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# shared/static library 생성
add_library(foo SHARED ${SRC_FILES})
add_library(foo-static STATIC ${SRC_FILES})

# target 의 include 설정
target_include_directories(
    foo PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(
    foo-static PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
    # ${CMAKE_CURRENT_SOURCE_DIR}
)

target_compile_options(foo PRIVATE -Wall)
target_compile_features(foo PRIVATE cxx_std_17)
target_compile_options(foo-static PRIVATE -Wall)
target_compile_features(foo-static PRIVATE cxx_std_17)

include(FetchContent)

FetchContent_Declare(
    fmt
    GIT_REPOSITORY "https://github.com/fmtlib/fmt"
    GIT_TAG "8.0.1"
)

FetchContent_MakeAvailable(fmt)

target_link_libraries(foo PRIVATE fmt)
target_link_libraries(foo-static PRIVATE fmt)

