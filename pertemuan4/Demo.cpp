#include <iostream>

using namespace std;

class Demo {
public :
	void display(){
		cout<<"hello "<<endl;
	}
	
	void display(string name){
		cout<<"hello, "<<name<<endl;
	}
	
	void display(string message, string name){
		cout<<"please "<<message<<", "<<name<<endl;
	}
};

int main(){
	Demo dm;
	dm.display();
	dm.display("rudi");
	dm.display("open the door", "rudi");
}
