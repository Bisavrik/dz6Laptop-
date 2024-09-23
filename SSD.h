#ifndef SSD_H
#define SSD_H

class SSD 
{
private:
    int* capacity;
    static int ssdCount;

public:
    SSD(int capacity);
    SSD();
    SSD(const SSD& other); 
    ~SSD();

    int getCapacity() const;
    void setCapacity(int capacity);

    static int getSsdCount();
};

#endif // SSD_H

