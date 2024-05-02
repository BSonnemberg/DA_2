#ifndef VERTEX_H
#define VERTEX_H

#include <vector>

class Edge;

class Vertex {
    int index;
    std::vector<Edge*> out;
    std::vector<Edge*> in;
public:
    ~Vertex();
    explicit Vertex(const int& index);
    int getIndex() const;
    const std::vector<Edge*>& getOutEdges() const;
    const std::vector<Edge*>& getInEdges() const;
    Edge* addEdgeTo(Vertex* to, const double& weight);
    bool removeEdgeTo(Vertex* v);
};

#endif
