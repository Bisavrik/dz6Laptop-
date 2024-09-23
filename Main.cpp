#include <iostream>
#include "Laptop.h"

using namespace std;

int main() 
{
    CPU cpu("Intel Core i7", 8);
    SSD ssd(512);
    VideoCard videoCard("NVIDIA RTX 3060", 6);
    RAM ram(16);

    Laptop originalLaptop("Gaming Laptop", 1500.0, "Silver", cpu, ssd, videoCard, ram);

    cout << "Original Laptop:" << endl;
    cout << "Name: " << originalLaptop.getName() << endl;
    cout << "Price: " << originalLaptop.getPrice() << endl;
    cout << "Color: " << originalLaptop.getColor() << endl;
    cout << "CPU: " << originalLaptop.getCpu().getModel() << endl;
    cout << "SSD Capacity: " << originalLaptop.getSsd().getCapacity() << " GB" << endl;
    cout << "VideoCard: " << originalLaptop.getVideoCard().getModel() << endl;
    cout << "RAM: " << originalLaptop.getRam().getSize() << " GB" << endl;

    Laptop copiedLaptop(originalLaptop);

    cout << "\nCopied Laptop:" << endl;
    cout << "Name: " << copiedLaptop.getName() << endl;
    cout << "Price: " << copiedLaptop.getPrice() << endl;
    cout << "Color: " << copiedLaptop.getColor() << endl;
    cout << "CPU: " << copiedLaptop.getCpu().getModel() << endl;
    cout << "SSD Capacity: " << copiedLaptop.getSsd().getCapacity() << " GB" << endl;
    cout << "VideoCard: " << copiedLaptop.getVideoCard().getModel() << endl;
    cout << "RAM: " << copiedLaptop.getRam().getSize() << " GB" << endl;

    cout << "\nTotal Laptops created: " << Laptop::getLaptopCount() << endl;

    return 0;
}