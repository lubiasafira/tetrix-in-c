#include "render_game/render_game.h"
#include <ncurses.h>

int main(void) {

  // inicia render
  render_init();

  // fecha render:
  render_close();

  return 0;
}