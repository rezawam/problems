#pragma once
#include <map>

typedef struct Node {
    int num;
    std::multimap<double, Node*> children; // key is weight of edge to node

} Node;