cmake_minimum_required(VERSION 3.27)
set(CMAKE_CXX_STANDARD 11)
project(shipping-route-optim)

set(H_FILES
        src/Edge.h
        src/Vertex.h
        src/Graph.h
        src/DataLoader.h
)

set(CPP_FILES
        src/Edge.cpp
        src/Vertex.cpp
        src/Graph.cpp
        src/main.cpp
        src/DataLoader.cpp
)

add_executable(shipping-route-optim ${H_FILES} ${CPP_FILES})
