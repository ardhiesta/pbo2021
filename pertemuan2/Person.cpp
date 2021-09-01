#include <iostream>
#include <string.h>
using namespace std;

class Person {
    char name[15];
    char sex;
    float sal;

public :
    void input(char n[], char s, float f){
        strcpy(name, n);
        sex = s;
        sal = f;
    }

    char * getname(){
        return name;
    }

    char getsex(){
    return sex;
    }

    float getsal(){
        return sal;
    }
};

int main(){
    Person p;
    //clrscr( );
    p.input("MANMOHAN",'M',15000);
    cout<<"NAME :="<<p.getname( )<<endl;
    cout<<"Sex :="<<p.getsex( )<<endl;
    cout<<"Salary :="<<p.getsal( )<<endl;
    //getch( );
    return 0;
}