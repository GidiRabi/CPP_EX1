#include "Graph.hpp"
#include "Algorithms.hpp"
using ariel::Algorithms;

#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main()
{
    ariel::Graph g;
    // 4x4 matrix that represents a connected graph.
    vector<vector<int> > graph = {
        {0, 1, 0, 1},
        {1, 0, 1, 0},
        {0, 1, 0, 1},
        {1, 0, 1, 0}};
    g.loadGraph(graph); // Load the graph to the object.

    printf("Should print: Graph with 4 vertices and 8 edges. \n");
    g.printGraph();                                   
    printf("Should print: 1 (true).\n");
    cout << Algorithms::isConnected(g) << endl;        
    printf("Should print: 0->3.\n");
    cout << Algorithms::shortestPath(g, 0, 3) << endl; 
    printf("Should print: 1->2->3->0->1.\n");
    cout << Algorithms::isContainsCycle(g) << endl;    
    printf("Should print: The graph is bipartite: A={0, 2}, B={1, 3}.\n");
    cout << Algorithms::isBipartite(g) << endl;        

    // 3x3 matrix 
    vector<vector<int> > graph2 = {
        {0, -1, 0},
        {0, 0, 1},
        {0, -4, 0}};

    g.loadGraph(graph2); // Load the graph to the object.

    printf("Should print: Graph with 3 vertices and 3 edges.\n");
    g.printGraph();                                    // Should print: "Graph with 3 vertices and 2 edges."
    printf("Should print: 1.\n" );
    cout << Algorithms::isConnected(g) << endl;        // Should print: "0" (false).
    printf("Should print: -1.\n");
    cout << Algorithms::shortestPath(g, 0, 2) << endl; // Should print: "0->1->2".
    printf("Should print: The cycle is: 0->1->0.\n");
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "The cycle is: 0->1->0".
    printf("Should print: The graph is bipartite: A={0, 2}, B={1}.\n");
    cout << Algorithms::isBipartite(g) << endl; 

    // 4x4 matrix that represents a connected weighted graph.
    vector<vector<int> > graph3 = {
        {0, 2, 0, 0},
        {2, 0, 3, 0},
        {0, 3, 0, 4},
        {0, 0, 4, 0}};
    g.loadGraph(graph3); // Load the graph to the object.
    printf("Should print: Graph with 4 vertices and 6 edges.\n");
    g.printGraph();                                    // Should print: "Graph with 4 vertices and 3 edges."
    printf("Should print: 1 (true).\n");
    cout << Algorithms::isConnected(g) << endl;        // Should print: "1" (true).
    printf("Should print: 0->1->2->3.\n");
    cout << Algorithms::shortestPath(g, 0, 3) << endl; // Should print: 0->1->2->3.
    printf("Should print: 0 (false).\n");
    cout << Algorithms::isContainsCycle(g) << endl;    // Should print: "0" (false).
    printf("Should print: The graph is bipartite: A={0, 2}, B={1, 3}.\n");
    cout << Algorithms::isBipartite(g) << endl;        // Should print: "The graph is bipartite: A={0, 2}, B={1, 3}."

    // 4x3 matrix that represents invalid graph.
    vector<vector<int> > graph4 = {
        {0, 1, 2},
        {1, 0, 3},
        {2, 3, 0},
        {0, 0, 4}};
    try
    {
        g.loadGraph(graph4); // Load the graph to the object.
    }
    catch (const std::invalid_argument &e)
    {
        cout << e.what() << endl; // Should print: "Invalid graph: The graph is not a square matrix."
    }
}