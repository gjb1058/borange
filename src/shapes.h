#ifndef __Borange_Shapes__
#define __Borange_Shapes__

#include <ncurses.h>

void drawHorz(int x, int y, int size, char symbol);
void drawVert(int x, int y, int size, char symbol);
void drawBox(int x, int y, int size, char symbol);
void drawSquare(int x, int y, int size, char symbol);

#endif
