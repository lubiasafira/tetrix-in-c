#ifndef INPUT_GAME_H
#define INPUT_GAME_H

/**
 * @brief Inicilaiza o sistema de entrada (teclado)
 */
void input_init();

/**
 * @brief Lê a tecla pressionada
 *
 * @return int Código da tecla (retorna ERR se nenhuma tecla pressionada em modo
 * não bloqueante)
 */
int input_read();

/**
 * @brief Fecha o sistema de entrada
 */
void input_close();

#endif // INPUT_GAME_H