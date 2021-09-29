#include <iostream>
using namespace std;

class A {
	int x1 = 10;
public :
	int x2 = 12;
	
	void show(){
		cout << x1 << endl;
	}
};

class B {
public :
	int x2 = 20;
};

class C : public A {
public :
	void show(){
		cout << x2 << endl; 
	}
};

int main(){
	C cc;
	cc.show();
	return 0;
}
