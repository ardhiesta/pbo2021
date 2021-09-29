#include <iostream>
using namespace std;

class A {
	int x1 = 10;
public :
	int x2 = 12;
	
	void show(){
		cout << "test" << endl;
	}
	
	int getX1(){
		return x1;
	}
};

class B : public A {	
public :
	void tes(){
		cout << getX1() << endl;
	}
};

int main(){
	B bb;
	bb.tes();
	return 0;
}
