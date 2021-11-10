#include <iostream>
using namespace std;

class first{
public :
    virtual void show(){
        cout<<"Hello from show of first class"<<endl;
    }
    virtual void display(){
        cout<<"Hello from display of first class"<<endl;
    }

    void fun(){
        cout<<"Hello from fun of first"<<endl;
    }
};

class second :public first{
public :
    virtual void show(){
        cout<<"Hello from show of second class"<<endl;
    }
    virtual void fun(){
        cout<<"Hello from fun of second class"<<endl;
    }
};

int main(){
    first *ptr;
    first f;
    second s;
    ptr=&f;
    ptr->show( );
    ptr->display( );
    ptr->fun( );
    ptr=&s;
    ptr->show( );
    ptr->display( );
    ptr->fun( );
    return 0;
}