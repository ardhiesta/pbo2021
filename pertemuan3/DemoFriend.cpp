#include <iostream>
using namespace std;

class second;

class first {
    int fx;
public :
    void inputf(int x) {
        fx=x;
    }
    friend void findmax(first, second);
};

class second {
    int sx;
public :
    void inputs(int x) {
        sx = x;
    }
    friend void findmax(first, second);
};

void findmax(first A, second B) {
    if(A.fx > B.sx)
        cout<<A.fx<<"of class first is greater than "<<B.sx<<"of class second\n";
    else
        cout<<B.sx<<"of class second is greater than "<<A.fx<<"of class first\n";
}

int main(){
    first F;
    second S;
    F.inputf(140);
    S.inputs(270);
    findmax(F, S);
    return 0;
}