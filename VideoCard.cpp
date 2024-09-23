#include <iostream>
#include "VideoCard.h"
#include <cstring>
#pragma warning(disable : 4996)

int VideoCard::videoCardCount = 0;

VideoCard::VideoCard(const char* model, int vram) : vram(vram) 
{
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
    videoCardCount++;
}

VideoCard::VideoCard() : VideoCard("Unknown", 0) {}

VideoCard::VideoCard(const VideoCard& other) : vram(other.vram)
{
    model = new char[strlen(other.model) + 1];
    strcpy(model, other.model);
    videoCardCount++;
}

VideoCard::~VideoCard()
{
    delete[] model;
    videoCardCount--;
}

const char* VideoCard::getModel() const 
{
    return model;
}

void VideoCard::setModel(const char* model) 
{
    delete[] this->model;
    this->model = new char[strlen(model) + 1];
    strcpy(this->model, model);
}

int VideoCard::getVram() const
{
    return vram;
}

void VideoCard::setVram(int vram)
{
    this->vram = vram;
}

int VideoCard::getVideoCardCount() 
{
    return videoCardCount;
}
