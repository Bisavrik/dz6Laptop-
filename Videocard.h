#ifndef VIDEOCARD_H
#define VIDEOCARD_H

class VideoCard
{
private:
    char* model;
    int vram;
    static int videoCardCount;

public:
    VideoCard(const char* model, int vram);
    VideoCard();
    VideoCard(const VideoCard& other);
    ~VideoCard();

    const char* getModel() const;
    void setModel(const char* model);

    int getVram() const;
    void setVram(int vram);

    static int getVideoCardCount();
};

#endif 

