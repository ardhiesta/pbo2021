#include <iostream>
#include <thread>

using namespace std;

void print(int n, const std::string &str)  {  
    cout << "Printing integer: " << n << endl;  
    cout << "Printing string: " << str << endl;  
} 

int main() {
    thread t1(print, 10, "Educative.blog");
    t1.join();
    return 0;
}