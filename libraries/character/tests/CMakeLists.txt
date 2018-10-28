add_executable( characterTests "" )

target_sources (
    characterTests
    PRIVATE
        main.cpp
        CharacterTest.cpp
    )

target_link_libraries(
    characterTests
    PRIVATE
        character
        gmock
    )

add_test( characterTests ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/characterTests)
