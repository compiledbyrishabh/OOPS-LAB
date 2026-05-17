#include <iostream>
using namespace std;

class Media {
public:
    virtual void play() = 0;
};

class Audio : public Media {
public:
    void play() {
        cout << "Playing audio track..." << endl;
    }
};

class Video : public Media {
public:
    void play() {
        cout << "Playing video file..." << endl;
    }
};

int main() {
    Media* mediaPtr;
    Audio audioObj;
    Video videoObj;

    mediaPtr = &audioObj;
    mediaPtr->play();

    mediaPtr = &videoObj;
    mediaPtr->play();

    return 0;
}