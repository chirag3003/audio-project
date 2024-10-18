#include <iostream>
#include "music.h"

using namespace std;

class Music
{
public:
    string name; // Name of the music
    string fileAddress; // Address of the music file
    int duration; // Duration of music
    int currentTime; //Current time of the music
    bool status; // Play or pause
    void play(){
        status = true;
    }
    void pause(){
        status = false;
    }
    void restart(){
        currentTime = 0;
    }
    Music(string _name, string _fileAddress, int _duration){
        name = _name;
        fileAddress = _fileAddress;
        duration = _duration;
    }
};

int main()
{

    Music m1("name","fileaddress", 12);
    m1.play();
    // m1.name = "xyz";
    // m1.file = "mp";
    // m1.duration = 12;
    // m1.currenttime = 5;

    return 0;
}