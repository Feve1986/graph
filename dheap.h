#include <iostream>

typedef int TYPE;
class dheap
{
public:    
    TYPE data;
    int pos;
    dheap* tracker;
    int order;
    bool operator >(const dheap &other);
    bool operator <(const dheap &other);
};
