#include <iostream>
#include <string>
#include "player.h"

using namespace std;

Player::Player(const char* name){
    this->name = name;
    this->level = 1;
    this->exp = 0;
    this->power = 100;
}

// GETTER
string Player::getName(){
    return this->name;
}

// SETTER
void Player::addExperience(int exp){
    cout << "EXP +" << exp << " !" << endl;
    this->exp += exp;
    if(this->exp >=0){
        if(this->exp % 100 > 0){
            this->level += this->exp/100;
            this->exp = this->exp%100;
        }
        else{
            this->level+= this->exp/100;
            this->exp = this->exp%100;
        }
    }else{
        if(this->exp % 100 < 0){
            this->level += -1 + this->exp/100;
            this->exp = 100 + this->exp%100;
        }
        else{
            this->level+= this->exp/100;
            this->exp = this->exp%100;
        }
    }
}

void Player::display(){
    cout << "NAME\t :" << this->name << endl;
    cout << "EXP\t :" << this->exp << endl;
    cout << "LEVEL\t :" << this->level << endl;
    cout << "POWER\t :" << this->power << endl;
}
