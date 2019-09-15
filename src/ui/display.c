#include "display.h"

void Display_Init(void)
{
    initscr();
    cbreak();
    noecho();
}

void Display_Destroy(void)
{
    clear();
    endwin();   //Closes the window
}
