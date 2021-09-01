#include <iostream>

using namespace std;

class Revnum {
	int num;

public :
	void input(int x){
		num = x;
	}

	int getnum(){
		return num;
	}
	long int getrev();
};

long int Revnum::getrev() {
	int save = num, r, rev = 0;
	while (save!=0){
		r = save % 10;
		rev = rev*10 + r;
		save = save/10;
	}
	return rev;
}

int main() {
	Revnum obj;
	int x;
	//clrscr( );
	cout<<"ENTER THE NUMBER";
	endl(cout);
	cin>>x;
	obj.input(x);
	cout<<"reverse of "<<obj.getnum()<<" is "<<obj.getrev( )<<endl;
	//getch( );
	return 0;
}

/*
int save = num, r, rev = 0;
while (save!=0)
{
	r = save % 10;
	rev = rev*10 + r;
	save = save/10;
}
return rev;

num 123
save = num
save = 123
rev = 0

r = 123 % 10 = 3
rev = 0*10 + 3 = 3
save = 123/10 = 12

r = 12 % 10 = 2
rev = 3*10 + 2 = 32
save = 12/10 = 1

r = 1 % 10 = 1
rev = 32*10 + 1 = 321
save = 1/10 = 0	

*/
