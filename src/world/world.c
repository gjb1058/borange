#include <math.h>
#include <stdlib.h>

#include "world.h"

World* World_Create()
{
    World* world;
    if ((world = (World*)malloc(sizeof(World))) == NULL) // TODO handle
        return NULL;
    return world;
}

void World_Generate(World* world) {
    world->width = (500+rand()) % 1000;
    world->height = (500+rand()) % 1000;

    if ((world->data = (Source**)malloc(world->width*sizeof(Source))) == NULL) {
        // TODO HANDLE ERROR
    }

    for (unsigned int i = 0; i < world->width; i++) {
        if ((world->data[i] = (Source*)malloc(world->height*sizeof(Source))) == NULL) {
            // TODO HANDLE ERROR
        }
    }
}

void World_Destroy(World* world) {
    for (unsigned int i = 0; i < world->width; i++)
        free(world->data[i]);
    free(world->data);
    free(world);
}
