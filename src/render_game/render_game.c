#include "render_game.h"
#include <ncurses.h>

/**
 * @brief Chama todas as funções de inicialização do `ncurses`
 *
 * Prepara o terminal para ser desenhado.
 */
static void init_ncurses();

// buffer de tela
static char screen_buffer[SCREEN_HEIGHT][SCREEN_WIDTH];

void render_init() {

  init_ncurses();

  // limpando screen_buffer
  clear_screen_buffer();

  // printando o buffer
  render_frame();
}

void render_close() { endwin(); }

void clear_screen_buffer() {
  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    for (int j = 0; j < SCREEN_WIDTH; j++) {
      screen_buffer[i][j] = ' ';
    }
  }
  move(0, 0);
}

void render_frame() {
  move(0, 0);
  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    for (int j = 0; j < SCREEN_WIDTH; j++) {
      printw("%c ", screen_buffer[i][j]);
    }
    printw("\n");
  }

  refresh();
}

void write_screen_buffer(int height, int width, char c) {
  screen_buffer[height][width] = c;
}

static void init_ncurses() {
  // inicializar ncurses
  initscr();
  noecho();
  cbreak();
  keypad(stdscr, TRUE);
  curs_set(FALSE);
  if (has_colors()) {
    start_color();
  }
  clear();
  refresh();
  move(0, 0);
}