#pragma once

#include <iostream>

const __uint8_t AXIS_X {30};
const __uint8_t AXIS_Y {13};
const __uint8_t NUMBER_NODES {123};

class Map2D {

private:
    int mapSize[AXIS_Y][AXIS_X];
    int statusTower[NUMBER_NODES];

    int statusStreet[AXIS_Y][AXIS_X];

public:

    Map2D();
    ~Map2D();

    void printMap();
    void clearMap();
    void generateNodes();

};