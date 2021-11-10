#include <iostream>
#include <thread>
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
    vector<thread> threads;

    for(int i=0; i<5; i++){
        threads.push_back(thread([&counter](){
            for(int i=0; i<5000; i++){
                counter.increment();
            }
        }));
    }

    for(auto &thread : threads){
        thread.join();
    }

    cout << counter.value << endl;

    return 0;
}