file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
    ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

add_executable(app ${SRC_FILES})
target_link_libraries(app PUBLIC foo-static bar-static)