cmake_minimum_required(VERSION 3.26)

add_executable(
        29_4_2
        ../main.cpp
        ../headers/constance.h
        ../headers/utilities.h
        ../headers/Shape.h
        ../headers/Circle.h
        ../headers/Triangle.h
        ../headers/Rect.h
        Shape.cpp
        Circle.cpp
        Triangle.cpp
        Rect.cpp
)

target_include_directories(29_4_2 PUBLIC ${CMAKE_SOURCE_DIR}/headers)