#include <iostream>
using namespace std;

template <typename X>
void show(X par){
    cout << "isi parameter : "<< par <<endl;
}

// // non template
// void show(int x1) {
//     cout << "isi parameter : "<< x1 <<endl;
// }

// void show(string ss) {
//     cout << "isi parameter : "<< ss <<endl;
// }

int main(){
    int x = 234;
    float y = 34.56f;
    double d = 3.444456;
    char ch = 'P';
    string s = "Template";
    show(x);
    show(y);
    show(d);
    show(ch);
    show(s);
    return 0;
}