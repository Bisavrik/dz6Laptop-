#include <iostream>
#include "CPU.h"
#include <cstring>
#pragma warning(disable : 4996)

int CPU::cpuCount = 0;

CPU::CPU(const char* model, int cores) : cores(cores)
{
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    cpuCount++;
}

CPU::CPU() : CPU("Unknown", 0) {}

CPU::CPU(const CPU& other) : cores(other.cores)
{
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
    cpuCount++;
}

CPU::~CPU() 
{
    delete[] model;
    cpuCount--;
}

const char* CPU::getModel() const
{
    return model;
}

void CPU::setModel(const char* model)
{
    delete[] this->model;
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

int CPU::getCores() const
{
    return cores;
}

void CPU::setCores(int cores) 
{
    this->cores = cores;
}

int CPU::getCpuCount()
{
    return cpuCount;
}
