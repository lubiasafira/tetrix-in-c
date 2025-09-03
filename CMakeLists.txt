cmake_minimum_required(VERSION 3.15)
project(tetrix-in-c LANGUAGES C)

find_package(Curses REQUIRED)

add_executable(meu_app main.c)
target_link_libraries(meu_app PRIVATE ${CURSES_LIBRARIES})
target_include_directories(meu_app PRIVATE ${CURSES_INCLUDE_DIR})

