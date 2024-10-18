#include <iostream>
#include "music.h"
#include "playlist.h"
using namespace std;

class Playlist
{
    string name;
    int currentmusic;
    Music** musics;
    int currentTime;
    int numberOfMusics = 0;
    void restart() {
        currentTime = 0;
    }
    void add(Music* m) {
        musics[numberOfMusics] = m;
        numberOfMusics++;
    }
    void remove(){

    }
};


