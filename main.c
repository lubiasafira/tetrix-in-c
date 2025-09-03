#include <ncurses.h>

int main(void) {
  // inicia
  initscr();

  // escreve
  printw("Hello, ncurses!");

  // atualiza
  refresh();

  // pede um tecla
  getch();

  // finaliza
  endwin();

  return 0;
}