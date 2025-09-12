#ifndef ENGINE_GAME_H
#define ENGINE_GAME_H

#include "game_state.h"

// inicializa game
void game_init(Game_state *Game_state);

// criar estágio inicial do game_state
void clear_game_state(Game_state *game_state);
#endif