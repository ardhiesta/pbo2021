#include <iostream>
//#include <conio.h>
#include <string.h>
using namespace std;

class Emp {
    char ename[15];
    float sal;
public:
    void input(char n[15], float s){
        strcpy(ename, n);
        sal = s;
    }    

    float getsal(){
        return sal;
    }

    char * getname(){
        return ename;
    }
};

void main() {
    Emp e1;
    //clrscr( );
    e1.input("HARI", 26000);
    Emp e2;
    e2.input("VIJAY",30000);
    if(e1.getsal( )>e2.getsal( ))
        cout<<e1.getname( )<<" 's salary is higher \n";
    else
        cout<<e2.getname( )<<" 's salary is higher \n";
    //getch( );
}