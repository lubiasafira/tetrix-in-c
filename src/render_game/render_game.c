#include "render_game.h"
#include <ncurses.h>

void render_init() {
  // inicializar ncurses
  initscr();

  printw("Testando renderizador!!!");

  refresh();

  getch();
}

void render_close() { endwin(); }