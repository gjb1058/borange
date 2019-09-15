#include <stdio.h>
#include <ncurses.h>

#include <ui/display.h>
#include "shapes.h"


int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    Display_Init();

    printw("Hello world! I'm %s", "a simple test");
    getch();    //Waits for a char to be entered
    drawSquare(10,10,6,'#');
    drawVert(15,15,5,'t');
    drawBox(30,30,10,'#');
    getch();

    Display_Destroy();

    return 0;
}
