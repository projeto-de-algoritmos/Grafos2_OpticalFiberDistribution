#pragma once

#include <iostream>
#include <vector>
#include <queue>
#include <stack>
#include <algorithm>

#include "Map2D.h"

const u_int8_t NUMBER_STREETS {148};
const int BIG_NUMBER {999999999};

typedef std::pair<int, int> pii;
class Graph : public Map2D
{
private:
    int v;
    int weight[NUMBER_STREETS];
    std::vector<pii> adj[NUMBER_NODES];
    int visited[NUMBER_STREETS];

public:
    Graph();
    ~Graph();

    void addEdge(int u, int v, int p);
    int primAlgorithm ( int startNode );

    int getV();
};
