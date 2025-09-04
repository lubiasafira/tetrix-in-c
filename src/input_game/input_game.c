#include "input_game.h"
#include <ncurses.h>

void input_init() {
  // habilita setas e teclas especias
  keypad(stdscr, TRUE);

  // não bloqueia getch
  nodelay(stdscr, TRUE);
}

int input_read() { return getch(); }

void input_close() {
  keypad(stdscr, FALSE);
  nodelay(stdscr, FALSE);
}