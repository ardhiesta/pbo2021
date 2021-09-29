#include <iostream>
using namespace std;

class Demo {
    static int x;
public :
    void tes() {
        cout << "contoh function" << endl;
    }

    static void show() {
        x = x + 1;
        cout << "contoh fungsi static \n";
    }

    //static void shows();

    void fungsiDiLuarClass();
};

void Demo::fungsiDiLuarClass() {
    cout << "contoh fungsi";
}

// void Demo::shows(){
//     cout << "test";
// }

int main() {
    // Demo::show();
    // Demo::shows();

    //Demo d;
    //d.show();

    Demo d;
    // d.tes();
    // Demo::tes();

    // d.show();
    Demo::show();
    return 0;
}