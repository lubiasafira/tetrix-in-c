#include "engine_game.h"

void game_init(Game_state *game_state) {
  // preenche board
  clear_game_state(game_state);
}

void clear_game_state(Game_state *game_state) {

  for (int i = 0; i < BOARD_HEIGHT; i++) {
    for (int j = 0; j < BOARD_WIDTH; j++) {
      game_state->board_current.cells[i][j] = 'x';
    }
  }
}