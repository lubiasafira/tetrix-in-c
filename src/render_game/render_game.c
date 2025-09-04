#include "render_game.h"
#include <ncurses.h>

// buffer de tela
static char screen_buffer[SCREEN_HEIGHT][SCREEN_WIDTH];

void render_init() {

  // inicializar ncurses
  initscr();

  // limpando screen_buffer
  clear_screen_buffer();

  // printando o buffer
  print_screen_buffer();

  getch();
}

void render_close() { endwin(); }

void clear_screen_buffer() {
  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    for (int j = 0; j < SCREEN_WIDTH; j++) {
      screen_buffer[i][j] = '0';
    }
  }
}

void print_screen_buffer() {
  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    for (int j = 0; j < SCREEN_WIDTH; j++) {
      printw("%c", screen_buffer[i][j]);
    }
    printw("\n");
  }

  refresh();
}