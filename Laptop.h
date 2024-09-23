#ifndef LAPTOP_H
#define LAPTOP_H

#include "CPU.h"
#include "SSD.h"
#include "VideoCard.h"
#include "RAM.h"

class Laptop 
{
private:
    char* name;        
    double price;       
    char* color;        
    CPU cpu;            
    SSD ssd;            
    VideoCard videoCard;
    RAM ram;            
    static int laptopCount; 

public:
    Laptop(const char* name, double price, const char* color,
        const CPU& cpu, const SSD& ssd, const VideoCard& videoCard, const RAM& ram);
    Laptop();                              
    Laptop(const Laptop& other);           
    ~Laptop();                             

    const char* getName() const;
    void setName(const char* name);

    double getPrice() const;
    void setPrice(double price);

    const char* getColor() const;
    void setColor(const char* color);

    CPU getCpu() const;
    SSD getSsd() const;
    VideoCard getVideoCard() const;
    RAM getRam() const;

    static int getLaptopCount();           
};

#endif 
