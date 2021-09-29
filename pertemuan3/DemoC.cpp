#include <iostream>
using namespace std;

class DemoC {
private:
    /* data */
    int x, y, z;
public:
    DemoC() {
        cout << "hai dari constructor" << endl;
    }

    DemoC(int x) {
        cout << "x = " << x << endl;
    }

    DemoC(int x1, int y1, int z1){
        x = x1;
        y = y1;
        z = z1;
    }

    // int getX(){
    //     return x;
    // }

    // int getY(){
    //     return y;
    // }

    // int getZ(){
    //     return z;
    // }
};

int main() {
    DemoC d;
    DemoC d1(8);
    DemoC d2(1, 2, 3);

    // cout << "x: " << d.getX() << " | y: " << d.getY() 
    // << " | z: " << d.getZ()
    // << endl;
}