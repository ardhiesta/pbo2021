#include <iostream>
using namespace std;

class GrandFather {
public:
    GrandFather() {
        cout << "GrandFather constructor executed" << endl;
    }
};

class Parent1: public GrandFather {
public: 
    Parent1() {
        cout << "Parent1 constructor executed" << endl;
    }
};

class Parent2: public GrandFather {
public:
    Parent2() {
        cout << "Parent2 constructor executed" << endl;
    }
};

class Child: public Parent1, public Parent2 {
public:
    Child() {
        cout << "Child constructor executed" << endl;
    }
};

int main() {
    Child c;
    // berapa kali constructor GrandFather dipanggil?
    return 0;
}