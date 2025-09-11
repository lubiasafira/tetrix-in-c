#ifndef BOARD_H
#define BOARD_H

#define BOARD_HEIGHT 20
#define BOARD_WIDTH 10

typedef struct {
  char cells[BOARD_HEIGHT][BOARD_WIDTH];
} Board;

#endif