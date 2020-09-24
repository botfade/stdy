#include <iostream>
#include <string>

using namespace std;

class Player{
    private:
        string name;
        int exp;
        int level;
        int power;

    public:
        // CONSTRUCTOR
        Player(const char* name);

        // GETTER
        string getName();

        // SETTER
        void addExperience(int );

        void display();
};