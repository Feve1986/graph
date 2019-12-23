#include "graph.h"
#include <limits>
#include <algorithm>
#include <iterator>

#define MAX std::numeric_limits<int>::max()

int graph::insertV(vertex v)
{
    vexSet.push_back(v);
    return 0;
};
    
int graph::insert(int i, int j, TYPE w)
{
    vertex* u = &vexSet[j];
    vexSet[i].neighbors.push_back(u);
    vexSet[i].weights.push_back(w);
    return 0;
};

int graph::Initialize()
{
    for(int i=0; i<vexSet.size(); i++)
    {
	vexSet[i].Dparent=NULL;
	vexSet[i].name=i;
	//tractor points to vexSet[i].my_data
	vexSet[i].my_data.tracker=&(vexSet[i].my_data);
	vexSet[i].my_data.pos=i;
	vexSet[i].my_data.order=i;
	vexSet[i].my_data.data=MAX;
    }
    return 0;
};

int graph::print_path(int s)
{
    vertex* u;
    for(int i=1; i<vexSet.size(); i++)
    {
	u=&vexSet[i];
	std::cout<< "The shortest distance from v"
		 << s
		 << " to v"
		 << i
		 << " is "
		 << (*u).my_data.data
		 << std::endl;
	std::cout<< "The shortest path is "; 
	while((*u).Dparent != NULL)
	{
	    std::cout<< "v" << (*u).name << "<-" ;
	    u=(*u).Dparent;
	}
	if((*u).my_data.data == MAX)
	    std::cout<< "No path between v"
		 << s
		 << "and v"
		 << i
		 <<std::endl;
	else
	    std::cout<<"v" <<(*u).name <<std::endl;
    }
    return 0;
};

int graph::dijkstra(int s)
{
    Initialize();//need to change
    
    vexSet[s].my_data.data=0;
    //P is a copy of vexSet.
    std::vector<dheap> data_vector;
    for(int i=0; i<vexSet.size(); i++)
    {
	data_vector.push_back(vexSet[i].my_data);
    }
    dheap target;
    int j;
    TYPE m;
    vertex v;
    std::list<vertex*>::iterator it;
    while(data_vector.size()!=1)
    {
	std::make_heap(data_vector.begin()+1, data_vector.end());
	std::pop_heap(data_vector.begin()+1, data_vector.end());
	//target=data_vector.back();
	j=data_vector.back().order;
	data_vector.pop_back();
	it=vexSet[j].neighbors.begin();
	for(int k=0; k<vexSet[j].neighbors.size(); k++)
	{
	    v=(*(*it));
	    if(v.my_data.data>vexSet[j].my_data.data+vexSet[j].weights[k])
	    {
		m = vexSet[j].my_data.data+vexSet[j].weights[k];
		(*(*it)).my_data.data = m;
		(*(*it)).Dparent=&vexSet[j];
	    }
	    it++;
	}
	for(int n=0; n<data_vector.size(); n++)
	{
	    if(data_vector[n].data!=(*(data_vector[n].tracker)).data)
		data_vector[n].data=(*(data_vector[n].tracker)).data;
	}
    }
    print_path(s);
    return 0;
};
//this is also a copy, we should avoid copy