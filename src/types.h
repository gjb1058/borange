#ifndef __BORANGE_TYPES__
#define __BORANGE_TYPES__

#include <stdbool.h>

enum Colors {
    BLACK       =  0;
    BLUE        =  1;
    GREEN       =  2;
    CYAN        =  3;
    RED         =  4;
    MAGENTA     =  5;
    BROWN       =  6;
    LIGHTGRAY   =  7;
    DARKGRAY    =  8;
    LIGHTBLUE   =  9;
    LIGHTGREEN  = 10;
    LIGHTCYAN   = 11;
    LIGHTRED    = 12;
    LIGHTMAGENTA= 13;
    YELLOW      = 14;
    WHITE       = 15;
} COLOR;

enum ResourceTypes {
    WORLD   = 0;
    CRYSTAL = 1;
    FOOD    = 2;
    ENERGY  = 3;
    EXOTIC  = 4;
} TYPE;

struct Resource {
    char graphic;
    TYPE type;
    bool canObtain;
    bool canDestroy;
    bool canTraverse;
    COLOR foreground;
    COLOR background;
    
}
#endif
