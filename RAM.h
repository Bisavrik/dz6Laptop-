#ifndef RAM_H
#define RAM_H

class RAM 
{
private:
    int* size;
    static int ramCount;

public:
    RAM(int size);
    RAM();
    RAM(const RAM& other); 
    ~RAM();

    int getSize() const;
    void setSize(int size);

    static int getRamCount();
};

#endif 

