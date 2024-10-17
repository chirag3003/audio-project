#include <iostream>
#include "music.h"

using namespace std;

class Music
{
public:
    string name; // Name of the music
    string file; // Address of the music file
    int duration; // Duration of music
    int currenttime; //Current time of the music
    bool status; // Play or pause
    void play(){
        status = true;
    }
    void pause(){
        status = false;
    }
    void restart(){
        currenttime = 0;
    }
    Music(){

    }
    void getinfo(){
        cout<< "enter the name";
    }
};

int main()
{

    Music m1;
    m1.name = "xyz";
    m1.file = "mp";
    m1.duration = 12;
    m1.currenttime = 5;

    return 0;
}