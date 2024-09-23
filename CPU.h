#ifndef CPU_H
#define CPU_H

class CPU 
{
private:
    char* model;
    int cores;
    static int cpuCount;

public:
    CPU(const char* model, int cores);
    CPU();
    CPU(const CPU& other); 
    ~CPU();

    const char* getModel() const;
    void setModel(const char* model);

    int getCores() const;
    void setCores(int cores);

    static int getCpuCount();
};

#endif 

