#include <iostream>
#include <string>

using namespace std;

// Class tanpa constructor
class Polos{
    public :
        string dataString;
        int dataInteger;
};

// Class dengan Constructor
// fungsi/method yang ada di class yang dipanggil pertama kali saat object dibuat
class Mahasiswa{
    public :
        string nama;
        string nrp;
        double ipk;
        
        // Ini adalah Constructor dengan parameter
        // default : nama fungsi = nama class.
        // tipe return dari constructor adalah nama fungsinya (Mahasiswa)
        Mahasiswa(string inpNama, string inpNRP, double inpIPK){
            Mahasiswa::nama = inpNama;
            Mahasiswa::nrp = inpNRP;
            Mahasiswa::ipk = inpIPK;

            cout << "Nama Mahasiswa : " << Mahasiswa::nama << endl;
            cout << "NRP Mahasiswa  : " << Mahasiswa::nrp << endl;
            cout << "IPK Mahasiswa  : " << Mahasiswa::ipk << endl;
            cout << "=======================" << endl;
        }

};

int main(){

    // Mahasiswa mhs1, mhs2;  [gabisa]

    Mahasiswa mhs1 = Mahasiswa("Adi", "051119401", 4.1 );
    Mahasiswa mhs2 = Mahasiswa("Budi", "051119402", 4.2);

    return 0;
}