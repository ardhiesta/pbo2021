#include <iostream>
using namespace std;

class Demo{
	int data;
public :
	Demo(){
		data = 200;
		cout<<"Default constructor is called\n";
	}
	
	Demo(int x){
		data = x;
	}
	
	Demo(const Demo &d){
		data = d.data;
		cout<<"copy constructor is called\n";
	}
	
	void show(){
		cout<<"data="<<data<<endl;
	}
};

int main(){
	Demo d1(300);
	
	Demo d2 = d1;
	
	Demo d3;
	d3 = d2;
	
	Demo d4 = Demo(d3);
	
	d1.show();
	d2.show();
	d3.show();
	d4.show();
	return 0;
}
