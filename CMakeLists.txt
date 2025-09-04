cmake_minimum_required(VERSION 3.15)
project(tetrix-in-c LANGUAGES C)

find_package(Curses REQUIRED)

file(GLOB SOURCES "src/*.c")

add_executable(tetrix 
  src/main.c 
  src/render_game/render_game.c 
  src/input_game/input_game.c
  )
target_link_libraries(tetrix PRIVATE ${CURSES_LIBRARIES})
target_include_directories(tetrix PRIVATE ${CURSES_INCLUDE_DIR})
