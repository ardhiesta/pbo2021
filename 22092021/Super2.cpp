#include <iostream>
using namespace std;

class Super
{
public :
	int x = 20;
	
	void sup_show(){
		cout<<"Hello from show of super"<<endl;
	}
};

class Sub:public Super
{
public: 
	int y = 14;
};

class Class3:public Sub
{
public: 
	int z = 19;	
};

int main()
{
	Class3 obj;
	cout << obj.x << endl;
	cout << obj.y << endl;
	obj.sup_show();
}
