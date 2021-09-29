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
	
};

int main()
{
	Sub obj;
	cout << obj.x << endl;
	obj.sup_show();
}
