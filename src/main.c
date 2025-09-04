#include "input_game/input_game.h"
#include "render_game/render_game.h"
#include <ncurses.h>

int main(void) {

  // inicia render
  render_init();

  // chama o teclado
  input_init();

  // teste de input;
  while (1) {
    int ch = ' ';
    ch = input_read();

    clear_screen_buffer();

    if (ch != ERR) {
      if (ch == 'q')
        break;

      // escreve a tecla precionada no buffer
      char buf[10];
      sprintf(buf, "%c", ch);
      for (int i = 0; buf[i] != '\0'; i++) {
        write_screen_buffer(i, 0, buf[i]);
      }

      render_frame();

      napms(200);
    }
  }

  // fecha render:
  render_close();

  return 0;
}