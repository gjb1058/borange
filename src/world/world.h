#ifndef WORLD_H
#define WORLD_H

#include "source.h"

typedef struct {
    Source** data;
    unsigned int width;
    unsigned int height;
} World;

World* World_Create();
void World_Generate(World* world);
void World_Destroy(World* world);

#endif//WORLD_H
