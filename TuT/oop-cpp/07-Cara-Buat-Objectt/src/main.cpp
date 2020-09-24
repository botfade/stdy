#include <iostream>
#include <string>

using namespace std;

class denganCon{
    public :
        string data;
        denganCon(const char* data){
            denganCon::data = data;
        }
        void show(){
            cout << denganCon::data << endl;
        }
};
class tanpaCon{
    public:
        string data;
    void show(){
            cout << data << endl;
    }
};


int main(){
    // 1. membuat object tanpa constructor
    tanpaCon obj1;
    obj1.data = "ini objek 1";
    obj1.show();

    // 2. membuat object dengan constructor
    denganCon obj2 = denganCon("ini objek 2");
    obj2.show();

    // 3. membuat object dengan constructor (2)
    denganCon obj3("ini objek 3");
    obj3.show();

    // 4. membuat object pada heap memory
    denganCon* obj4 = new denganCon("ini objek 4");
    (*obj4).show();             // 4.1 dengan dereference
    obj4->show();               // 4.2 dengan arrow operator
    string tes = obj4->data;    // 4.3 assign ke variabel
    cout << tes << endl;

    // 5. membuat object dengan constructor pada heap
    denganCon* obj5;
    obj5 = new denganCon("ini objek 5");
    obj5->show();

    return 0;
} 