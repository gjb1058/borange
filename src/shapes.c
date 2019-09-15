#include "shapes.h"

void drawHorz(int x, int y, int size, char symbol)
{
	move(x,y);
	for(int col = 0; col < size; col++)
	{
		addch(symbol);
	}
}

void drawVert(int x, int y, int size, char symbol)
{
	move(x,y);
	for(int row = 0; row <= size; row++)
	{
		addch(symbol);
		move(x+row,y);
	}
}

void drawBox(int x, int y, int size, char symbol)
{
	move(x,y);
	drawHorz(x,y,size,symbol);
	drawVert(x,y,size,symbol);
	drawHorz(x+x,y,size,symbol);
	drawVert(x,y+size,size,symbol);
}
void drawSquare(int x, int y, int size, char symbol)
{
	move(x,y);
	for(int square = 0; square < size; square++)
	{
		drawHorz(x+square,y,size,symbol);
	}
}


