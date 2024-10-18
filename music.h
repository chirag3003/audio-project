#include<iostream>
using namespace std;

class Music
{
public:
    string name;
    string file;
    int time;
    int currenttime;
    bool status(int play, int pause);
    Music(string _name, string _file, int _duration);
};
