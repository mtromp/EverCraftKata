# ##########################################
SET( INCLUDE_DIRS
        ${CMAKE_CURRENT_LIST_DIR}/include
)
INCLUDE_DIRECTORIES( ${INCLUDE_DIRS} )


# ##########################################
SET( INCLUDE_FILES
        include/character.h
)

# ##########################################
SET( SOURCE_FILES
        src/character.cpp
)

# ##########################################
ADD_LIBRARY( character
        SHARED
        ${INCLUDE_FILES}
        ${SOURCE_FILES}
)

# ##########################################
# enable unit test building and running

ADD_EXECUTABLE( characterTests
        tests/main.cpp
        tests/characterTest.cpp
)
TARGET_LINK_LIBRARIES( characterTests
        character
        gmock
)

ADD_TEST( NAME
        characterTests
        COMMAND
        characterTests
)


