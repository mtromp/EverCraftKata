# ###############################################
# Check for a valid version of CMake.
cmake_minimum_required( VERSION 3.0 FATAL_ERROR )

# ###############################################
# Start the project.
project( EverCraftKata )

# ##########################################
# get rid of policy CMP0042 warning on Mac
set ( CMAKE_MACOSX_RPATH 1 )

# ###############################################
# Find the threading package for this machine.
# Needed by gtest
find_package( Threads )

# ###############################################
# Include the external CMakeLists.txt so that
#   only that file need be modified when new
#   external tools are added
include( external/CMakeLists.txt )

add_subdirectory( libraries )

