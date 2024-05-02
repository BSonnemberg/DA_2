#ifndef EDGE_H
#define EDGE_H

#include "Vertex.h"

class Edge {
    Vertex* origin;
    Vertex* dest;
    double weight;
public:
    Edge(Vertex* from, Vertex* to, const double& weight);
    Vertex* getOrigin() const;
    Vertex* getDest() const;
    double getWeight() const;
};

#endif
