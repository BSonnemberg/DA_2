#include "Vertex.h"
#include "Edge.h"

Vertex::Vertex(const int& index) {
    this->index = index;
}

Vertex::~Vertex() {
    for (const Edge* e : out) {
        delete e;
    }
}

int Vertex::getIndex() const {
    return this->index;
}

const std::vector<Edge*>& Vertex::getOutEdges() const {
    return this->out;
}

const std::vector<Edge*>& Vertex::getInEdges() const {
    return this->in;
}

Edge* Vertex::addEdgeTo(Vertex* to, const double& weight) {
    if (to == nullptr) {
        return nullptr;
    }
    Edge* e = new Edge(this, to, weight);
    out.push_back(e);
    to->in.push_back(e);
    return e;
}

bool Vertex::removeEdgeTo(Vertex* v) {
    if (v == nullptr) {
        return false;
    }
    for (auto it = out.begin(); it != out.end(); ++it) {
        const Edge* e = *it;
        if (e->getDest() == v) {
            out.erase(it);
            // find incoming edge
            for (auto it2 = v->in.begin(); it2 != v->in.end(); ++it2) {
                if (*it2 == e) {
                    v->in.erase(it2);
                    break;
                }
            }
            delete e;
            return true;
        }
    }
    return false;
}
