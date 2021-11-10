#include <iostream>
#include <thread>
#include <vector>
#include <mutex>
using namespace std;

struct Counter {
    mutex mtx;
    int value;
    Counter():value(0){}

    void increment(){
        mtx.lock();
        ++value;
        mtx.unlock();
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
        // cout << "thread-" << thread.get_id() << " joined" << endl;
        thread.join();
    }

    cout << counter.value << endl;

    return 0;
}