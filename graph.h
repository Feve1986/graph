//since we only use adjacency list here, no need to create another class first.
#include "vertex.h"

//use adList to store the edges.
class graph
{
private:
    //use a vector to all the vertices.
    std::vector<vertex> vexSet;
	
public:
    //insert an edge into the graph;
    int insert(int i, int j, TYPE w);
    int insertV(vertex v);
    //del an edge from the graph;
    //int del(int i, int j);
    //delete vertex vexSet[i].
    //int delV(int i);
    //implement prim algorithm;
    int dijkstra(int s);
    //int number();
    int Initialize();
    int print_path(int s);
    int print_graph();
};

