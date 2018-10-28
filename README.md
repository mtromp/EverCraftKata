# EverCraftKata
A C++ implementation of https://github.com/PuttingTheDnDInTDD/EverCraft-Kata

I am using QT Creator with CMake to create this project. The project depends on googletest 1.8 as downloaded from 
https://github.com/google/googletest/releases . The expanded directory in external is not part of this project.
It is referenced in the external/CMakeLists.txt file, however.

By including external/CMakeLists.txt in the top-level CMakeLists.txt, I was able to set include paths so that the test
files could used the standard `#include <gtest/gtest.h>`

The tests are built as an application. QT does have the ability to create autotests when using qmake. Perhaps at some
later time I will see how to do that with this project.

**May 15, 2018**

I achieved my goal to learn how to setup the project using CMake and google test.
I might not complete this kata.

**Oct 28, 2018**

Learned more about organizing cmake files while working on the ray-tracer-challenge. Some useful links:

- https://www.slideshare.net/DanielPfeifer1/effective-cmake
- https://www.youtube.com/watch?v=rLopVhns4Zs&feature=youtu.be  # the video associated with the slides
- https://pabloariasal.github.io/2018/02/19/its-time-to-do-cmake-right/ # a blog post with examples
