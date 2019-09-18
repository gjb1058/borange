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

enum LabTypes {
    MILITARY = 0;
    INDUSTRY = 0;
} TYPE_L;

enum ResourceTypes {
    WORLD   = 0;
    CRYSTAL = 1;
    FOOD    = 2;
    ENERGY  = 3;
    EXOTIC  = 4;
} TYPE_R;

enum BuildingTypes {
    HOUSE       = 1;
    FACTORY     = 2;
    CHURCH      = 3;
    MARKET      = 4;
    BARRACKS    = 5;
    LAB         = 6;
    MINE        = 7;   
} TYPE_B;

struct Building {
    TILE*[][] tiles;
    bool canProduce;
    bool canResearch;
    TYPE_B type;    
} BUILDING;

struct Tile {
    char graphic;
    bool canObtain;
    bool canDestroy;
    bool canTraverse;
    bool buildingBlock;
    COLOR foreground;
    COLOR background;
    TYPE_R type;
    BUILDING building;
} TILE;
#endif
