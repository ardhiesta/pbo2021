#include <iostream>
#define S 5
using namespace std;

class Point {
    int px;
    int py;

public :
    void input(int x,int y) {
        px=x;
        py=y;
    }

    void show() {
        cout<<"("<<px<<","<<py<<")"<<endl;
    }
};

int main() {
    Point ptarr[S];
    int i;
    for(i=0;i<S;i++)
        ptarr[i].input(234+i*2,254+i*3);
    cout<<"Points are \n";
    for(i=0;i<S;i++)
        ptarr[i].show( );
    return 0;
}

// array : int, char, string, object
/*
ptarr array berisi object dari class Point
5 object yg berada di array ptarr
(234,254) ptarr[0]
(236,257) ptarr[1]
(238,260) ptarr[2]
(240,263) ptarr[3]
(242,266) ptarr[4]
ptarr[3] : 
*/