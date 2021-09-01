#include <iostream>
//#include <conio.h>
using namespace std;

class DemoPrivate {
// num tidak bisa diakses dari luar blok class DemoPrivate
    int num;
public :
    void fun() {
        num = 20;
    }

    int getnum() {
        return num;
    }
};

int main() {
    DemoPrivate d;
    d.fun( );
    //d.num tidak bisa digunakan karena akses ke variabel tidak bisa dilakukan
    //d.num = 0;
    cout<<"num is "<<d.getnum( )<<endl;
    return 0;
}