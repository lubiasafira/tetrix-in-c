#include "render_game.h"
#include <ncurses.h>

void render_init() {
  // inicializar ncurses
  initscr();

  for (int i = 0; i < SCREEN_HEIGHT; i++) {
    for (int j = 0; j < SCREEN_WIDTH; j++) {
      printw("[]");
    }
    printw("\n");
  }

  refresh();

  getch();
}

void render_close() { endwin(); }