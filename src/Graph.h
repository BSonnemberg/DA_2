#ifndef GRAPH_H
#define GRAPH_H

#include "Edge.h"

class Graph {
    std::vector<Vertex*> nodes;
public:
    ~Graph();
    Graph(const Graph& g);
    const std::vector<Vertex*>& getNodes() const;
    Vertex* findVertex(const int& index) const;
    bool addVertex(Vertex* v);
    bool removeVertex(const int& index);
};

#endif
