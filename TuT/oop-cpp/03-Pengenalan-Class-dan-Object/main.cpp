#include <iostream>
#include <string>

using namespace std;

class Mahasiswa{
    public:
        string nama;
        string kampus;
        string jurusan;
        double IPK;

};

int main(){

    Mahasiswa data1, data2;
    
    data1.nama = "Adi";
    data1.kampus = "ITS";
    data1.jurusan = "Kedokteran";
    data1.IPK = 4.5;
    
    data2.nama = "Budi";
    data2.kampus = "ITB";
    data2.jurusan = "Keperawatan";
    data2.IPK = 1.6;

    cout<<"Nama dari data1    : "<< data1.nama << endl;
    cout<<"Kampus dari data1  : "<< data1.kampus << endl;
    cout<<"Jurusan dari data1 : "<< data1.jurusan << endl;
    cout<<"IPK dari data1     : "<< data1.IPK << endl;
    cout<< endl;
    cout<<"Nama dari data2    : "<< data2.nama << endl;
    cout<<"Kampus dari data2  : "<< data2.kampus << endl;
    cout<<"Jurusan dari data2 : "<< data2.jurusan << endl;
    cout<<"IPK dari data2     : "<< data2.IPK << endl;

    return 0;
}