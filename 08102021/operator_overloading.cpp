#include <iostream>
using namespace std;

class Demo {
    int value = 9;

public :
    void incValue(){
        cout << ++value << endl;
    }

    // Overload ++ when used as prefix
    void operator ++() {
        value = value - 1;
        cout << value << endl;
    }
};

int main() {
    Demo d;
    //d.incValue();
    ++d;
    return 0;
}