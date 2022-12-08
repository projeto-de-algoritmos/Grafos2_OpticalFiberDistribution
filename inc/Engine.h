#pragma once

#include "Graph.h"

#include <iostream>
#include <string>

class Engine : public Graph
{

public:
    Engine();
    ~Engine();

    void connectStreetAndTowers();

};
