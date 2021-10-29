#include <iostream>
using namespace std;

class GrandFather {
public:
    GrandFather() {
        cout << "GrandFather constructor executed" << endl;
    }

    ~GrandFather(){
        cout << "GrandFather destructor executed" << endl;
    }
};

class Parent1: public GrandFather {
public: 
    Parent1() {
        cout << "Parent1 constructor executed" << endl;
    }

    ~Parent1() {
        cout << "Parent1 destructor executed" << endl;
    }
};

class Parent2: public GrandFather {
public:
    Parent2() {
        cout << "Parent2 constructor executed" << endl;
    }

    ~Parent2() {
        cout << "Parent2 destructor executed" << endl;
    }
};

class Child: public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child constructor executed" << endl;
    }

    ~Child() {
        cout << "Child destructor executed" << endl;
    }
};

int main() {
    Child c;
    // berapa kali constructor GrandFather dipanggil?
    return 0;
}