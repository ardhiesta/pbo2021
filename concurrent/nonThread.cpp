#include <iostream>
#include <vector>
using namespace std;

struct Counter {
    int value;
    Counter():value(0){}

    void increment(){
        ++value;
    }
};

int main(){
    Counter counter;

    for(int i=0; i<5; i++){
        for(int i=0; i<5000; i++){
            counter.increment();
        }
    }

    cout << counter.value << endl;

    return 0;
}