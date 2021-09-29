#include <iostream>
using namespace std;

class Demo {
public:
	/*void square(int f){
		cout << f << endl;
	}
	
	void square(float x){
		cout << x << endl;
	}
	
	void func1(char ch) {
		cout << "Char " << ch << endl;
	}
	
	void func1(double ch) {
		cout << "double " << ch << endl;
	}*/
	
	float amount(float p, int t=2, float r=0.08){
		return p+t+r;
	}
};

int main(){
	Demo d;
	//d.func1(174);
	cout << d.amount(3000, 10, 1.0) << endl;
	return 0;
}
