#include <iostream>
#include "SSD.h"
#pragma warning(disable : 4996)

int SSD::ssdCount = 0;

SSD::SSD(int capacity) 
{
    this->capacity = new int(capacity);
    ssdCount++;
}

SSD::SSD() : SSD(256) {}

SSD::SSD(const SSD& other) 
{
    this->capacity = new int(*(other.capacity));
    ssdCount++;
}

SSD::~SSD() 
{
    delete capacity;
    ssdCount--;
}

int SSD::getCapacity() const 
{
    return *capacity;
}

void SSD::setCapacity(int capacity) 
{
    *(this->capacity) = capacity;
}

int SSD::getSsdCount() 
{
    return ssdCount;
}
