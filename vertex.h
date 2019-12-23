#include <iostream>
#include <list>
#include <vector>
#include "dheap.h"

typedef int TYPE;
class vertex
{
public:
    //use the order of the neighbors in the vector to represent it.
    //this is conform when we insert an edge.
    //int or vertex? maybe vertex!
    std::list<vertex*> neighbors;
    std::vector<TYPE> weights;
    vertex* Dparent;
    int name;
    dheap my_data;
};
