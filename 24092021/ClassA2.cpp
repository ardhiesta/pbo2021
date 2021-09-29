#include <iostream>
using namespace std;

class A {
	int x1 = 10;
public :
	int x2 = 12;
	
	void show(){
		cout << "testA" << endl;
	}
};

class B {
public :
	int x2 = 20;
	
	void show(){
		cout << "testB" << endl;
	}
};

class C : public A, public B {
public :
	void show(){
		cout << "testC" << endl;
	}
};

int main(){
	C cc;
	cc.show();
	cc.B::show();
	return 0;
}
