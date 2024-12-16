#pragma once

#include <string>
#include "structures/Graph.h"
#include "algorithms/TSP_Branch_Bound.h"
#include "algorithms/TSP_Brute_Force.h"
#include "algorithms/TSP_Dynamic_Programming.h"

using namespace std;

class Menu
{
    string options;
    string preview;

public:
    void enable();
    Menu();
    ~Menu();
};

