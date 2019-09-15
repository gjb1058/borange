#include "stdio.h"
#include "shapes.h"
#include <ncurses.h>




int main(int argc, char** argv)
{
    (void)argc;
    (void)argv;

    initscr();
    cbreak();
    noecho();
    printw("Hello world! I'm %s", "a simple test");
    getch();	//Waits for a char to be entered	
    drawSquare(10,10,6,'#');
    drawVert(15,15,5,'t');
    drawBox(30,30,10,'#');
    getch();

    clear();
    endwin();	//Closes the window

 
    printf("Hello, world!\n");

    return 0;
}
