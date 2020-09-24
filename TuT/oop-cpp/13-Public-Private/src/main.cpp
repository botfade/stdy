#include <iostream>
#include <string>
#include "mahasiswa.hpp"

using namespace std;

int main(){
    Mahasiswa* obj = new Mahasiswa("ADI", "SAS");
    obj->publicDisplay();       // ok
    obj->privateDisplay();      // ok

    // cout << obj->privateName << endl;      // no
    cout << obj->publicName << endl;      // ok

    return 0;
}