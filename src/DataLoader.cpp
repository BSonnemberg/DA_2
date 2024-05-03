#include "DataLoader.h"
#include <sstream>
#include <fstream>

void DataLoader::loadNodes(Graph& g, const std::string& path) {

    std::string line;
    std::ifstream stream(path+"/nodes.csv");
    std::getline(stream , line);

    while (std::getline(stream, line)) {

        if (line.back()=='\r') line.pop_back();
        std::istringstream iss(line);
        std::string id, lat, lon;

        // parse node
        std::getline(iss, id, ',');
        std::getline(iss, lat, ',');
        std::getline(iss, lon, ',');

        // create object

    }
    stream.close();
}
