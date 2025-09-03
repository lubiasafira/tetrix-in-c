cmake_minimum_required(VERSION 3.15)
project(tetrix-in-c LANGUAGES C)

find_package(Curses REQUIRED)

add_executable(tetrix src/main.c)
target_link_libraries(tetrix PRIVATE ${CURSES_LIBRARIES})
target_include_directories(tetrix PRIVATE ${CURSES_INCLUDE_DIR})
