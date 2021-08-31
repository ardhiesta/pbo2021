#include <iostream>
//#include <conio.h>
using namespace std;

class Fact{
	int num;
public :
	void input(int x){
		num = x;
	}
	void getfact();
};

void Fact::getfact(){
	long int f = 1;
	short i;
	for(i=1; i<=num; i++)
		f = f*i;
	cout<<"Factorial of"<<num<<" is "<<f<<endl;
}

int main( ){
	int n;
	//clrscr();
	Fact obj;
	cout<<"ENTER THE NUMBER :=";
	cin>>n;
	obj.input(n);
	obj.getfact( );
//	getch( );
	return 0;
}
