add_library(character SHARED "")

target_sources(
    character
    PRIVATE
        src/Character.cpp
    PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/include/Character.h
    )

target_include_directories(
    character
    PUBLIC
        include
    )

# ##########################################
# enable unit test building and running

add_subdirectory( tests )
