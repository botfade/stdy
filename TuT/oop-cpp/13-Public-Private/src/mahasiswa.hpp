#ifndef __MAHASISWA
#define __MAHASISWA

#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    // ATRIBUTE
    public:
        string publicName;
    private:
        string privateName;
    // METHOD
    public:
        Mahasiswa(const char*, const char*);         // constructor selalu public
        void publicDisplay();
        void privateDisplay();
    private:

};

#endif