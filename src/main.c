#include "engine_game/engine_game.h"
#include "input_game/input_game.h"
#include "render_game/render_game.h"
#include <ncurses.h>

Game_state game_state;

int main(void) {

  // inicia render
  render_init();

  // renderizar board
  game_init(&game_state);

  for (int i = 0; i < BOARD_HEIGHT; i++) {
    for (int j = 0; j < BOARD_WIDTH; j++) {
      write_screen_buffer(i, j, game_state.board_current.cells[i][j]);
    }
  }

  render_frame();
  getch();

  // fecha render:
  render_close();

  return 0;
}