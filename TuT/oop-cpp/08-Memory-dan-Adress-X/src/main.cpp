#include <iostream>
#include <string>
#include <chrono>
#include <time.h>

using namespace std;

using Clock = std::chrono::high_resolution_clock;
using TimePoint = std::chrono::time_point<Clock>;


class Kosong{
    public :
        int fungsi(){       // 1 byte
            return 1;
        }
};

class Isi{
    public :
        int dataInt;        // 4 byte
        int dataInt2;       // 4 byte
        double dataDoub;    // 8 byte
        string dataStr;     // 24 byte
};

class Mahasiswa{
    public :
        string nama;
        Mahasiswa(const char* nama){
            Mahasiswa::nama = nama;
        }
};

int main(){

    // !! besaran memory sebuah object
    cout << "Alokasi class Kosong : " << sizeof(Kosong) << " byte" << endl;
    cout << "Alokasi class Isi    : " << sizeof(Isi) << " byte" << endl;

    // !! adrres
    string a;
    Mahasiswa obj1 = Mahasiswa("Adi");              // obj di stack, otomatis terhapus jika selesai
    
    Mahasiswa* obj2 = new Mahasiswa("Budi");        // obj di heap, tidak otomatis terhapus 
    // variabel nya ada di stack, TAPI object nya ada di heap
    
    string b;

    cout << "Adress : " << endl;
    cout << &a << endl;
    cout << &obj1 << endl;
    cout << obj2 << endl;           // alamat di heap
    cout << &obj2 << endl;          // alamat anunya di stack
    cout << &b << endl;

    // !! kecepatan membuat object di stack vs heap [chrono]
    
    // TimePoint *tStackStart = new TimePoint();
    // TimePoint *tStackEnd = new TimePoint();
    // TimePoint *tHeapStart = new TimePoint();
    // TimePoint *tHeapEnd = new TimePoint();

    // cin.get();
    // *tStackStart = Clock::now();
    // Mahasiswa obj3 = Mahasiswa("Caca");
    // *tStackEnd = Clock::now();

    // cin.get();
    // *tHeapStart = Clock::now();
    // Mahasiswa* obj4 = new Mahasiswa("Dodo");
    // *tHeapEnd = Clock::now();

    // chrono::duration<double> durasi = *tStackEnd - *tStackStart;
    // cout << "Durasi Membuat obj di Stack : " << durasi.count() << endl;
    // durasi = *tHeapEnd - *tHeapStart;
    // cout << "Durasi Membuat obj di Heap : " << durasi.count() << endl;

    // !! kecepatan membuat object di stack vs heap [time.h]

    time_t t;
    double durasi;

    cin.get();
    t = clock();
    Mahasiswa obj5 = Mahasiswa("Eka");
    t = clock() - t;
    durasi = ((double)t)/CLOCKS_PER_SEC;
    printf("STACK   : %.100f seconds\n", durasi);

    cin.get();
    t = clock();
    Mahasiswa* obj6 = new Mahasiswa("Fifo");
    t = clock() - t;
    durasi = ((double)t)/CLOCKS_PER_SEC;
    printf("HEAP   : %.100f seconds\n", durasi);


    return 0;
}