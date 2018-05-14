# EverCraftKata
A C++ implementation of https://github.com/PuttingTheDnDInTDD/EverCraft-Kata

I am using QT Creator with CMake to create this project. The project depends on googletest 1.8 as downloaded from 
https://github.com/google/googletest/releases . The expanded directory in external is not part of this project.
It is referenced in the external/CMakeLists.txt file, however.

By including external/CMakeLists.txt in the top-level CMakeLists.txt, I was able to set include paths so that the test
files could used the standard `#include <gtest/gtest.h>`

The tests are built as an application. QT does have the ability to create autotests when using qmake. Perhaps at some
later time I will see how to do that with this project.
