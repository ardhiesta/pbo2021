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
/*
f = 1
num = 3

i = 1
i <= 3 : Yes
f = 1*1 = 1
i++

i = 2
i <= 3 : Yes
f = 1*2 = 2
i++

i = 3
i <= 3 : Yes
f = 2*3 = 6
i++

i = 4
i <= 3 : No

for(i=1; i<=num; i++)
	f = f*i;
*/
	
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
