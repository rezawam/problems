#include <limits>
#include <stdio.h>
#include <map>
#include "Node.h"

#define INF std::numeric_limits<double>::max()

int main()
{
    int nodes = 0, edges = 0, START = 0, END = 0;
    scanf("%d %d", &nodes, &edges);
    scanf("%d %d", &START, &END);
    std::multimap<double, Node> graph; // key is weight, value is a known node

    for (int i = 1; i <= nodes; ++i) {
        graph.insert(std::pair <double, Node> (INF, { i, { } })); // create map of zeroed nodes with inf values
    }

    int n1 = 0, n2 = 0;
    double val = 0;
    Node *node1 = { }, *node2 = { };

    for (int i = 0; i < edges; ++i) {
        scanf("%d %d %lf", &n1, &n2, &val);
        for (auto& it : graph) { // create paths with values from node to node
            if (it.second.num == n1)
                node1 = &it.second;
            if (it.second.num == n2)
                node2 = &it.second;
        }
        node1->children.insert(std::pair <double, Node*> (val, node2));
        node2->children.insert(std::pair <double, Node*> (val, node1));
    }

    for (auto it : graph) {
        printf("%d: ", it.second.num);
        for (auto it2 : it.second.children) {
            printf("%f => %d\n", it2.first, it2.second->num);
        }
    }


    return 0;
}
