cmake_minimum_required(VERSION 3.0)

project(Bowling)

set(CMAKE_CXX_STANDARD 17)

add_executable(
    Bowling
    main.cpp
    bowling.cpp
    bowling.h
    test.cpp
    catch.hpp
    )