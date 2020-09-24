#include <iostream>
#include <string>

using namespace std;

class Player{
    public :
        string name;

        // constructor
        Player(const char*);
        void display();
        string getName();
};