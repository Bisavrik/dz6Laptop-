#include <iostream>
#include <cstring>
#include "Laptop.h"
#pragma warning(disable : 4996)

using namespace std;

int Laptop::laptopCount = 0;

Laptop::Laptop(const char* name, double price, const char* color,
    const CPU& cpu, const SSD& ssd, const VideoCard& videoCard, const RAM& ram)
    : price(price), cpu(cpu), ssd(ssd), videoCard(videoCard), ram(ram) 
{
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);

    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);

    laptopCount++;
}

Laptop::Laptop() : Laptop("Unknown", 0.0, "Black", CPU(), SSD(), VideoCard(), RAM()) 
{

}

Laptop::Laptop(const Laptop& other)
    : price(other.price), cpu(other.cpu), ssd(other.ssd), videoCard(other.videoCard), ram(other.ram)
{
    this->name = new char[strlen(other.name) + 1];
    strcpy(this->name, other.name);

    this->color = new char[strlen(other.color) + 1];
    strcpy(this->color, other.color);

    laptopCount++;
}

Laptop::~Laptop() 
{
    delete[] name;
    delete[] color;
    laptopCount--;
}

const char* Laptop::getName() const 
{
    return name;
}

void Laptop::setName(const char* name) 
{
    delete[] this->name;
    this->name = new char[strlen(name) + 1];
    strcpy(this->name, name);
}

double Laptop::getPrice() const 
{
    return price;
}

void Laptop::setPrice(double price)
{
    this->price = price;
}

const char* Laptop::getColor() const 
{
    return color;
}

void Laptop::setColor(const char* color) 
{
    delete[] this->color;
    this->color = new char[strlen(color) + 1];
    strcpy(this->color, color);
}

CPU Laptop::getCpu() const 
{
    return cpu;
}

SSD Laptop::getSsd() const
{
    return ssd;
}

VideoCard Laptop::getVideoCard() const 
{
    return videoCard;
}

RAM Laptop::getRam() const 
{
    return ram;
}

int Laptop::getLaptopCount() 
{
    return laptopCount;
}