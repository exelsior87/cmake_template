# get all files and dirs name in current directory
file(GLOB SUBS RELATIVE
    ${CMAKE_CURRENT_SOURCE_DIR}
    ${CMAKE_CURRENT_SOURCE_DIR}/*
)

foreach(SUB ${SUBS})
    # directory check
    if (IS_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/${SUB})
        add_subdirectory(${SUB})
    endif()
endforeach()
