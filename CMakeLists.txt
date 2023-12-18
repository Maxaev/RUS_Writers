cmake_minimum_required(VERSION 3.26)
project(RusWriters)

set(CMAKE_CXX_STANDARD 17)

add_executable(RusWriters main.cpp
        menu.hpp
        menuItems.hpp
        menu.cpp
        menu_functions.cpp
        menu_functions.hpp
        menuItems.cpp)
