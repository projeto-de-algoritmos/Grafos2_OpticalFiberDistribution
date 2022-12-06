#pragma once

#include <iostream>


const __uint8_t AXIS_X {45};
const __uint8_t AXIS_Y {18};
const __uint8_t NUMBER_NODES {123};

class Map2D {

public:

    int mapSize[AXIS_Y][AXIS_X];
    int statusTower[NUMBER_NODES];

    int statusStreet[AXIS_Y][AXIS_X];

    Map2D();
    ~Map2D();

    void printMap();
    void clearMap();
    void generateNodes();
    
    void visitedStreet( int towerOne , int towerTwo);

    int getStatusTower( int node );
    void setStatusTower( int node, int value );

};