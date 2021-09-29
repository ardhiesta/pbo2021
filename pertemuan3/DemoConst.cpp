#include <iostream>
using namespace std;

class DemoConst {
public :
    const int num = 100;

    void changeNum() {
        num = num - 1;
    }
};

int main() {
    DemoConst d;
    cout << "num: " << d.num << endl;
    d.changeNum();
    cout << "num: " << d.num << endl;
    return 0;
}