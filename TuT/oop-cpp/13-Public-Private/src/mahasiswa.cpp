#include <iostream>
#include <string>
#include "mahasiswa.hpp"

using namespace std;

Mahasiswa::Mahasiswa(const char* name, const char* name2){
    this->publicName = name;
    this->privateName = name2;
}

void Mahasiswa::publicDisplay(){
    cout << "publicName :" << this->publicName << endl;
}

void Mahasiswa::privateDisplay(){
    cout << "privateName :" << this->privateName << endl;
}