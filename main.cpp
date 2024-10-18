#include <iostream>
#include "playlist.h"
#include "music.h"
using namespace std;

Music* getinfo() {
    string name;
    string fileAddress;
    int duration;

    cout << "enter the name";
    std::cin >> name;
    std::cin >> fileAddress;
    std::cin >> duration;
    Music *m1 = new Music(name, fileAddress, duration);

    return m1;
};

int main() {

    // Music musics[10];
    Music** array = (Music**)malloc(10 * sizeof(Music));
    cout << "enter music:";
    
    // for (int i = 0; i < 10;i++) {



    // }



    return 0;
}