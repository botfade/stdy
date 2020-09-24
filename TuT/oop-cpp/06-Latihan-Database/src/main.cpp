#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Mahasiswa{
    public :
        string nama;
        string nrp;
        string jurusan;

        Mahasiswa(string nama, string nrp, string jurusan){
            Mahasiswa::nama = nama;
            Mahasiswa::nrp = nrp;
            Mahasiswa::jurusan = jurusan;
        }

        // string getData(){
        //     return "\n" + nama + " " + nrp + " " + jurusan;
        // }
};

class DBase{
    public :
        ifstream in;
        ofstream out;
        string fileName;
        
        DBase(const char* fileName){
            DBase::fileName = fileName;
        }

        void savetoFile(Mahasiswa obj){
            DBase::out.open(DBase::fileName, ios::app);
            DBase::out << obj.getData();

            DBase::out.close();
        }

        void showfromFile(){
            DBase::in.open(DBase::fileName, ios::in);
            string nama, nrp, jurusan;
            int index = 1;
            
            while(!DBase::in.eof()){
                DBase::in >> nama;
                DBase::in >> nrp;
                DBase::in >> jurusan;
                cout << index++ << ".\t";
                cout << nama << "\t";
                cout << nrp << "\t";
                cout << jurusan << endl;
            }

            DBase::in.close();
        }
};

int main(){
    // show content of file
    DBase objDB = DBase("iniDataBase.txt");
    objDB.showfromFile();

    // get input form user
    string nama, nrp, jurusan;
    cout << "Masukan Data Mahasiswa !" <<endl;
    cout << "Nama : "; cin >> nama;
    cout << "NRP  : "; cin >> nrp;
    cout << "Jurs : "; cin >> jurusan;

    Mahasiswa objMhs = Mahasiswa(nama, nrp, jurusan);
    objDB.savetoFile(objMhs);

    objDB.showfromFile();


    return 0;
}