#include <iostream>
//#include <conio.h>
using namespace std;

class Demo {
private :
	int cx,cy;
public :
	void input_data(int x, int y) {
		cx = x;
		cy = y;
	}
	
	void show_data() {
		cout<<"cx="<<cx<<"\t"<<"cy="<<cy<<endl;
	}
};

int main(){
	Demo d1;
	//clrscr( );
	d1.input_data(10,20);
	d1.show_data( );
	//getch();
	return 0;
}
