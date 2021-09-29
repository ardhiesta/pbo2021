#include <iostream>
using namespace std;

class demo_sum{
private :
	int num;
	static int count;
public :
	void input(){
		cout<<"Enter the number for "<<"Object"<<++count<<"\n";
		cin>>num;
	}
	
	void operator +(demo_sum temp){
		int x;
		x=num+temp.num;
		cout<<"Sum of two is "<<x<<endl;
	}
	
	void show(){
		cout<<"The num is "<<num<<endl;
	}
};

int demo_sum::count;
int main( ){
	demo_sum d1,d2;
	d1.input( );
	d1.show( );
	d2.input( );
	d2.show( );
	d1+d2;
	return 0;
}
