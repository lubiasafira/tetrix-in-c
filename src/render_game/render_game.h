#ifndef RENDER_GAME_H
#define RENDER_GAME_H

/**
 * @brief Largura da tela em caracteres.
 *
 * Define quantas colunas o buffer da tela possui.
 *
 * Deve ser usada para calcular posições e limites ao escrever o buffer.
 */
#define SCREEN_WIDTH 40

/**
 * @brief Altura da tela em caracteres.
 *
 * Define quantas linhas o buffer da tela possui.
 *
 * Deve ser usada para calcular posições e limites ao escrever o buffer.
 */
#define SCREEN_HEIGHT 20

/**
 * @brief Inicializa o renderizador da tela.
 *
 * Configura o terminal para `ncurses`, oculta o cursor, desativa
 * o eco da teclas digitadas e inicializa o buffer interno da tela
 *
 * Deve ser chamado antes de qualquer operação de renderização.
 */
void render_init();

/**
 * @brief Finaliza o renderizador da tela.
 *
 * Restaura o terminal ao estado normal, liberando os recursos
 * alocados pelo `ncurses`.
 *
 * Deve ser chamado no final do programa
 * ou qunado a tela nçao for mais necessária.
 */
void render_close();

// Ações do buffer
/**
 * @brief Limpa todo o buffer da tela, preenchendo com espaços em branco.
 *
 * Deve ser chamado antes de desenhar um novo frame para garantir que
 * não restem caracteres de frames anteriores.
 */
void clear_screen_buffer();

/**
 * @brief Desenha o buffer atual na tela.
 *
 * Atualiza toda a tela com o contéudo do buffer interno.
 *
 * Deve ser chamado após modifica o buffer usando `write_screen_buffer()`.
 */
void render_frame();

/*
 * @brief Escreve um caractere no buffer da tela.
 *
 * @param height A posição vertical (linha) onde o caractere será escrito
 *  Deve estar entre 0 e SCREEN_HEIGHT -1.
 *
 * @param width A posição horizontal (coluna) onde o caractere será escrito
 *  Deve estar entre 0 e SCREEN_WIDTH -1.
 *
 * @param O caractere que será desenhado na coordenada height e width.
 */
void write_screen_buffer(int height, int width, char c);

#endif // RENDER_GAME_H
