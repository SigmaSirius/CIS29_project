#include "Tile.h"
#include "RandNumber.h"
#include <vector>
#include <iostream>

//TODO: populate monster vector
Tile::Tile()
{
    caps = randInt(1, 100);
    elevator = false;
    player = false;
}