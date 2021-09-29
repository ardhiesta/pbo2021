#include <iostream>
using namespace std;

class Super
{
public :
	int x = 20;
	
	void show(){
		cout<<"Hello from show of Super"<<endl;
	}
};

class Super2
{
public: 
	int y = 14;
};

class Class3:public Super, public Super2
{

};

int main()
{
	Class3 obj;
	cout << obj.x << endl;
	cout << obj.y << endl;
	obj.sup_show();
}
