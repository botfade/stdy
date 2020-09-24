#include <iostream>
#include <string>

using namespace std; 

class Kelas{
    public :
        string dataStr;
        double dataDouble;
        double m_dataDouble;

        Kelas(const char* dataStr, double dataDouble){
            // !! menggunakan namespace dari class
            Kelas::dataStr = dataStr;

            // !! menggunakan "this" : pointer yang mereturn adress dari object
            this->dataDouble = dataDouble;

            // !! menggunakan konvensi penamaan
            m_dataDouble = dataDouble;

        }
};

class Player{
    public : 
        string name;
        double power;
        int speed;

        Player(const char* name, double power){
            Player::setName(name);          // BISA
            this->setPower(power);             // BISA
        }

        void setName(const char* name){
            Player::name = name;            // ISO
        }
        void setPower(double power){
            this->power = power;            // ISO
        }

        void setSpeed(int);         // prototype
};

void Player::setSpeed(int speed){               // namespaces MUTLAK wajib digunakan disini. GAISO pake this->
    this->speed = speed;            // ISO
    Player::speed = speed;          // PODO AE
}

int main(){

    Kelas *obj1 = new Kelas("object 1", 1.2);
    cout << obj1->dataDouble << endl;
    cout << obj1->dataStr << endl;              // Kelas::dataStr [RAISO]  
    cout << obj1->m_dataDouble << endl;

    Player *obj2 = new Player("ronaldi", 90);
    cout << obj2->name << endl;
    cout << obj2->power << endl;
    obj2->setSpeed(70);
    cout << obj2->speed << endl;

    

    return 0;
}
