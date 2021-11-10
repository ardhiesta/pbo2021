#include <iostream>
#include <thread>
using namespace std;

void func1() { cout << "eksekusi function 1\n"; }
void func2() { cout << "eksekusi function 2\n"; }

int main()
{
	thread t([]{
	    func1();
		func2();						 
	});
	return 0;
}