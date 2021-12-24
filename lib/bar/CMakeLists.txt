file(GLOB_RECURSE SRC_FILES CONFIGURE_DEFENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_library(bar SHARED ${SRC_FILES})
add_library(bar-static STATIC ${SRC_FILES})

target_include_directories(
    bar PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_include_directories(
    bar-static PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

target_compile_options(bar PRIVATE -Wall)
target_compile_options(bar-static PRIVATE -Wall)

target_compile_features(bar PRIVATE cxx_std_17)
target_compile_features(bar-static PRIVATE cxx_std_17)

include(FetchContent)

FetchContent_Declare(
    glog
    GIT_REPOSITORY "https://github.com/google/glog"
    GIT_TAG "v0.5.0"
)

FetchContent_MakeAvailable(glog)

target_link_libraries(bar PRIVATE glog)
target_link_libraries(bar-static PRIVATE glog)