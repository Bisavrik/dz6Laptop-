#include <iostream>
#include "RAM.h"

int RAM::ramCount = 0;

RAM::RAM(int size) 
{
    this->size = new int(size);
    ramCount++;
}

RAM::RAM() : RAM(8) {}

RAM::RAM(const RAM& other) 
{
    this->size = new int(*(other.size));
    ramCount++;
}

RAM::~RAM() 
{
    delete size;
    ramCount--;
}

int RAM::getSize() const
{
    return *size;
}

void RAM::setSize(int size)
{
    *(this->size) = size;
}

int RAM::getRamCount() 
{
    return ramCount;
}
