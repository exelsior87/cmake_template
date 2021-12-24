
# 현재 폴더의 모든 파일 및 폴더 이름 확인
file(GLOB SUBS RELATIVE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/*
)

message(STATUS "sub-item lists: ${SUBS}")

set(SUB_DIRS "")

foreach(SUB ${SUBS})
    if (IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUB})
        message(STATUS "${SUB}")
        add_subdirectory(${SUB})
    endif()
endforeach()

message(STATUS "sub-directories: ${SUB_DIRS}")

# add_subdirectory(${SUB_DIRS})


# add_subdirectory(foo)
# add_subdirectory(bar)