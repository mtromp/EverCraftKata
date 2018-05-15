# ###############################################
# Check for a valid version of CMake.
CMAKE_MINIMUM_REQUIRED( VERSION 2.8.3 )

# ###############################################
# Start the project.
PROJECT( EverCraftKata )

# ##########################################
# get rid of policy CMP0042 warning on Mac
SET ( CMAKE_MACOSX_RPATH 1 )

# ###############################################
# Find the threading package for this machine.
# Needed by gtest
FIND_PACKAGE( Threads )

# ###############################################
# Include the external CMakeLists.txt so that
#   only that file need be modified when new
#   external tools are added
INCLUDE( external/CMakeLists.txt )

# ###############################################
# Include the libraries CMakeLists.txt so that
#   only that file need be modified when new
#   libraries are added
INCLUDE( libraries/CMakeLists.txt )

