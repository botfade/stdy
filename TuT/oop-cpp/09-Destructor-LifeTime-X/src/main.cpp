#include <iostream>
#include <string>

using namespace std;

class Player{
    public :
        string nama;
        // constructor
        Player(const char* nama){
            Player::nama = nama;
            cout << "Player " << Player::nama << " dibuat" << endl;
        }

        // destructor
        // fungsi yang dijalankan setelah objek dihapus
        ~Player(){
            cout << "Player " << Player::nama << " dihapus" << endl;
        }
};

void objStack(){
    Player objStack = Player("stack");
}
void objHeap(){
    Player* objHeap = new Player("heap");
    delete objHeap; 
}

int main(){
    {
        Player objStack = Player("stack");
    }
    {
        Player* objHeap = new Player("heap");   // obj heap tidak akan terhapus dari heap
        delete objHeap;                         // manual menghapus object dari heap . xx free
    }
    
    objStack();
    objHeap();

    

    return 0;
}