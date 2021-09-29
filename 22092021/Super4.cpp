#include <iostream>
using namespace std;

class Super
{
public :
	int x = 20;
	
	/*void show(){
		cout<<"Hello from show of Super"<<endl;
	}*/
};

class Sub1:public Super
{
	void show(){
		cout<<"Hello from show of Sub1"<<endl;
	}
};

class Sub2:public Super
{
	void show(){
		cout<<"Hello from show of Sub2"<<endl;
	}
};

class ChildClass:public Sub1, public Sub2
{

};

int main()
{
	ChildClass obj;
	obj.show();
}
