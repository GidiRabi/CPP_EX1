# מטלה 1 - גרפים (Classes and Namespaces) - Graph Algorithms Implementation


## Overview
This project implements various graph algorithms in C++, including algorithms to determine connectivity, shortest paths, cycles, bipartiteness, and negative cycles. The graph representation used is an adjacency matrix.

## Files
- `Graph.cpp`: Contains the implementation of the Graph class, including methods to load a graph from an adjacency matrix and print the graph.
- `Algorithms.cpp`: Implements various graph algorithms, including:
  - `isConnected(g)`: Determines if a graph is connected.
  - `shortestPath(g, start, end)`: Finds the shortest path between two nodes in the graph.
  - `isContainsCycle(g)`: Checks if the graph contains any cycles.
  - `isBipartite(g)`: Determines if the graph is bipartite.
  - `negativeCycle(g)`: Finds a negative cycle in the graph.
- `Demo.cpp`: Provides examples of input and output for the implemented algorithms.

## Running the Program
To compile the program, run `make all`. This will generate the executable files `main` and `test`.
- `./main`: Executes the main function, demonstrating the usage of the implemented algorithms.
- `./test`: Runs the test suite to validate the correctness of the implemented algorithms.

## Usage
- `Graph.cpp`: Include this file in your project to use the Graph class for representing graphs and loading them from adjacency matrices.
- `Algorithms.cpp`: Include this file in your project to use the implemented graph algorithms.
- `Demo.cpp`: Refer to this file for examples of how to use the implemented algorithms.

## Author
- Gidi Rabi
- gidirabi111@gmail.com

