#include <iostream>
//#include <conio.h>
using namespace std;

class DemoPrivate {
// num tidak bisa diakses dari luar blok class DemoPrivate
private:
    int num;

// getter dan setter
// setter : memberi nilai ke variabel
// getter : mengambil nilai variabel

public:
    // setter
    void setNum(int num){
        DemoPrivate::num = num;
    }

    void fun() {
        num = 20;
    }

    // getter
    int getNum() {
        return num;
    }
};

int main() {
    DemoPrivate d;
    /*d.num = 100;
    cout << "nilai num: " << d.num << endl;*/

    // panggil setter
    //d.fun();
    d.setNum(1450);
    //d.num tidak bisa digunakan karena akses ke variabel tidak bisa dilakukan
    cout<<"nilai num: "<<d.getNum()<<endl;
    return 0;
}