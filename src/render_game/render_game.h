#ifndef RENDER_GAME_H
#define RENDER_GAME_H

// constantes para resolução da tela
#define SCREEN_WIDTH 40
#define SCREEN_HEIGHT 20

// Inicializa serviço renderização
void render_init();

// finaliza serviço de renderização
void render_close();

// Ações do buffer
// limpar screen_buffer
void clear_screen_buffer();

// printar screen_buffer
void print_screen_buffer();

#endif // RENDER_GAME_H
