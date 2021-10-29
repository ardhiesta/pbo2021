#include <iostream>
using namespace std;

class Vehicle{
    int speed;
    int numWheel;

public :
    double countSpeed(){
        return 0.0;
    }
};

class two_wheeler: public Vehicle{

};

class three_wheeler: public Vehicle{

};

class four_wheeler: public Vehicle{

};

int main(){

}