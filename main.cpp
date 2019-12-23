#include "graph.h"
#include <algorithm>
#include <iterator>

int main(int argc, char* argv[])
{
    vertex v0; //v0 is useless.
    vertex v1;
    vertex v2;
    vertex v3;
    vertex v4;
    vertex v5;
    vertex v6;
    vertex v7;
    vertex v8;    
    // v1.data = 3;
    // v2.data = 4;
    // v3.data = -1;
    // v4.data = 10;
    // std::vector<vertex> vexSet;
    // vexSet.push_back(v1);
    // vexSet.push_back(v2);
    // vexSet.push_back(v3);
    // vexSet.push_back(v4);
    // std::make_heap(vexSet.begin(),vexSet.end());
    // std::cerr<< vexSet.front().data <<std::endl;
    // v1.neighbors.push_back(v2);
    // v1.neighbors.push_back(v3);
    // v1.neighbors.push_back(v4);
    graph G;
    G.insertV(v0);
    G.insertV(v1);
    G.insertV(v2);
    G.insertV(v3);
    G.insertV(v4);
    G.insertV(v5);
    G.insertV(v6);
    G.insertV(v7);
    G.insertV(v8);

    G.insert(1,2,7);
    G.insert(1,5,10);
    G.insert(1,8,15);
    G.insert(2,1,7);
    G.insert(2,7,9);
    G.insert(2,3,5);
    G.insert(2,4,12);
    G.insert(3,2,5);
    G.insert(3,4,6);
    G.insert(3,5,8);
    G.insert(3,6,14);
    G.insert(4,2,12);
    G.insert(4,3,6);
    G.insert(5,1,10);
    G.insert(5,3,8);
    G.insert(5,6,3);
    G.insert(6,3,14);
    G.insert(6,5,3);
    G.insert(7,2,9);
    G.insert(8,1,15);
    //G.print_graph();
    G.dijkstra(1);
    
//
    
    // std::cout<< v1.neighbors.size() <<std::endl;
    // vertex u = vexSet.back();
    // std::cout<< u.data <<std::endl;
    // u = *(v1.neighbors.begin());

    // std::cout<< u.data <<std::endl;
    // u = *(std::next(v1.neighbors.begin(),2));
    // std::cout<< u.data <<std::endl;
    // std::list<vertex>::iterator it;
    // it = v1.neighbors.begin();
    // std::cout<< (*it).data <<std::endl;
    // it++;
    // std::cout<< (*it).data <<std::endl;
    // v1.weights.push_back(1);
    // v1.weights.push_back(2);
    // std::cout<< v1.weights[0] <<std::endl;
    // v1.Dparent = &v2;
    // std::cout<< v1.Dparent->data <<std::endl;
};
