#pragma once

#include <iostream>
#include <vector>
#include <algorithm>

#include "Map2D.h"

const u_int8_t NUMBER_STREETS {148};

class Graph : public Map2D
{
private:
    int v;
    int weight[NUMBER_STREETS]; 
    int visited[NUMBER_STREETS];

public:
    Graph();
    ~Graph();

    void addEdge(int u, int v, int p);
    int primAlgorithm ( int startNode );

    int getV();
};
