#include "Graph.h"

Graph::Graph(const Graph& g) {
    for (const Vertex* v : g.nodes) {
        this->nodes.push_back(new Vertex(v->getInfo()));
    }
    for (const Vertex* v : g.nodes) {
        for (const Edge* e : v->getOutEdges()) {
            Vertex* v1 = findVertex(v->getId());
            Vertex* v2 = findVertex(e->getDest()->getId());
            v1->addEdgeTo(v2, e->getWeight());
        }
    }
}

Graph::~Graph() {
    for (const Vertex* vtx : this->nodes) {
        delete vtx;
    }
}

const std::vector<Vertex*>& Graph::getNodes() const {
    return this->nodes;
}

Vertex* Graph::findVertex(const int& id) const {
    for (Vertex* v : this->nodes) {
        if (v->getId() == id) {
            return v;
        }
    }
    return nullptr;
}

bool Graph::addVertex(Vertex *v) {
    if (findVertex(v->getId()) != nullptr) {
        return false;
    }
    this->nodes.push_back(v);
    return true;
}

bool Graph::removeVertex(const int& id) {
    for (auto it = nodes.begin(); it != nodes.end(); ++it) {
        Vertex* v = *it;
        // found target
        if (v->getId() == id) {
            nodes.erase(it);
            for (Edge* e : v->getOutEdges()) {
                // remove edge from target
                v->removeEdgeTo(e->getDest());
            }
            for (Vertex* u : this->nodes) {
                // remove edges to target
                u->removeEdgeTo(v);
            }
            delete v;
            return true;
        }
    }
    return false;
}
