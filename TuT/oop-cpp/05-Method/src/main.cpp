#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public :
        string nama;
        double ipk;

        Mahasiswa(string inpNama, double inpIPK){
            Mahasiswa::nama = inpNama;
            Mahasiswa::ipk = inpIPK;
        }

        // Method tanpa parameter tanpa return
        void tampilkanData(){
            cout << "Nama Saya " << Mahasiswa::nama << ", IPK Saya " << Mahasiswa::ipk << endl;
        }

        // Method dengan parameter tanpa return
        // string = const char* , const lebih ringan
        // setiap kirim reference mllui parameter wajib pake const
        void ubahNama(const char* namaBaru){
            Mahasiswa::nama = namaBaru;
        }

        // Method tanpa parameter dengan return
        string getNama(){
            return Mahasiswa::nama;
        }
        double getIPK(){
            return Mahasiswa::ipk;
        }

        // Method dengan parameter dengan return
        double tambahIPK(const double &tambahanIPK){
             return Mahasiswa::ipk + tambahanIPK;
        }
};

int main(){

    Mahasiswa satu = Mahasiswa("Adi", 3.1);
    Mahasiswa dua = Mahasiswa("Budi", 3.2);

    satu.tampilkanData();
    dua.tampilkanData();

    satu.ubahNama("Caca");
    satu.tampilkanData();

    cout << "Nama : " << satu.getNama() << endl;
    cout << "IPK  : " << satu.getIPK() << endl;

    cout << "IPK " << satu.getNama() << " setelah ditambah : " << satu.tambahIPK(1.31) << endl;


    return 0;
}