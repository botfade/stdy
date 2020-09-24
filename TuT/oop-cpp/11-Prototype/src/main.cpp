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

int main(){

    Player* playerObject = new Player("Adi");
    playerObject->display();

    cout << playerObject->getName() << endl;

    return 0;
}

Player::Player(const char* name){
    this->name = name;
}

void Player::display(){
    cout << "Nama Player : " << this->name << endl;
}

string Player::getName(){
    return this->name;
}
