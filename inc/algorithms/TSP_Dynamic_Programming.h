#pragma once
#include "structures/Graph.h"
#include "structures/MyStack.h"
#define INF 9999

class TSP_DP
{
    int **matrix;
    int count;
    int result;
    int temp;
    int **memory;
    int **getMemory;
    int lastVertex;

public:
    void apply();
    string toString();
    int getResult();
    TSP_DP(Graph graph);
    ~TSP_DP();
};

