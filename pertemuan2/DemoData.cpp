#include <iostream>
using namespace std;

class DemoData {
    int num;
public :
    void fun() {
        num = 20;
    }

    int getnum() {
        return num;
    }
};

void main(){
    DemoData d;
    //clrscr( );
    d.fun( );
    cout<<"num is "<<d.getnum( )<<endl;
    //getch( );
}