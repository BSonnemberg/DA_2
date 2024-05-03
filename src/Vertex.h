#ifndef VERTEX_H
#define VERTEX_H

#include "Location.h"
#include <vector>
#include <string>

class Edge;

class Vertex {
    Location info;
    std::vector<Edge*> out;
    std::vector<Edge*> in;
public:
    ~Vertex();
    explicit Vertex(const Location& info);
    Location getInfo() const;
    int getId() const; // shortcut
    const std::vector<Edge*>& getOutEdges() const;
    const std::vector<Edge*>& getInEdges() const;
    Edge* addEdgeTo(Vertex* to, const double& weight);
    bool removeEdgeTo(Vertex* v);
};

#endif
