#ifndef DATALOADER_H
#define DATALOADER_H

#include "Graph.h"

class DataLoader {
    /**
     * @brief Load edges from a file
     * @param g graph to load to
     * @param path path to file
     */
    static void loadEdges(Graph& g, const std::string& path);
    /**
     * @brief Load nodes from a file
     * @param g graph to load to
     * @param path path to file
     */
    static void loadNodes(Graph& g, const std::string& path);
public:
    /**
     * @brief Load a toy graph from a file
     * @param g graph to load to
     * @param path path to file
     * @return whether successful
     */
    static bool loadToyGraph(Graph& g, const std::string& path);

    /**
     * Load a regular dataset into a graph
     * @param g graph to load to
     * @param pathToEdges path to the edges file
     * (nodes assumed to be within the same directory)
     * @return whether successful
     */
    static bool loadToGraph(Graph& g, const std::string& pathToEdges);
};

#endif
