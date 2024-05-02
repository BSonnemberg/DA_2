#include "Edge.h"

Edge::Edge(Vertex* from, Vertex* to, const double& weight) {
    this->origin = from;
    this->dest = to;
    this->weight = weight;
}

Vertex* Edge::getOrigin() const {
    return this->origin;
}

Vertex* Edge::getDest() const {
    return this->dest;
}

double Edge::getWeight() const {
    return this->weight;
}
