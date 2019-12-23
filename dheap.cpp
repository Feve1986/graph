#include "dheap.h"

bool dheap::operator <(const dheap &other)
{
    return this->data > other.data;
};

bool dheap::operator >(const dheap &other)
{
    return this->data < other.data; 
};
