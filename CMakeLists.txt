cmake_minimum_required(VERSION 3.9)
project(GESTOREFILE)
set(CMAKE_CXX_STANDARD 11)


add_executable(GESTOREFILE main.cpp cmake-build-debug/Tests/Assieme.h cmake-build-debug/Tests/testAssieme.cpp Assieme.cpp Assieme.h Disegno.cpp Disegno.h Gcode.cpp Gcode.h Particolare.cpp Particolare.h)
add_subdirectory(lib/googletest-master)
include_directories(lib/googletest-master/googletest/include)
include_directories(lib/googletest-master/googlemock/include)
target_link_libraries(GESTOREFILE gtest gtest_main)







