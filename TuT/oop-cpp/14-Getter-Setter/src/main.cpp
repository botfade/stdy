#include <iostream>
#include <string>
#include "player.h"

using namespace std;

int main(){
    Player obj = Player("GatotKaca");
    obj.display();

    cout << "MAIN . . ." << endl;
    obj.addExperience(100);
    obj.display();
    obj.addExperience(200);
    obj.display();
    obj.addExperience(-250);
    obj.display();


    return 0;
}