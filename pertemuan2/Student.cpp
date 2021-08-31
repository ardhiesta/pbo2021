#include <iostream>
#include <string.h>
//#include <conio.h>
using namespace std;

class Student{
	char sname[10];
	int sage;
	char sclass[10];
public :
	void getdata(char[], int, char[]);
	void showdata();
};

void Student::getdata(char sn[10], int a, char sc[10]){
	strcpy(sname, sn);
	sage=a;
	strcpy(sclass, sc);
}

void Student::showdata(){
	cout<<"Name=\t"<<sname<<endl;
	cout<<"Age=\t"<<sage<<endl;
	cout<<"Class=\t"<<sclass<<endl;
}

int main(){
	Student s1, s2;
	char st[10];
	int sa;
	char scls[10];
	//clrscr();
	cout<<"Enter data for student 1\n";
	cin>>st>>sa>>scls;
	s1.getdata(st,sa,scls);
	cout<<"Enter for student 2\n";
	cin>>st>>sa>>scls;
	s2.getdata(st,sa,scls);
	cout<<"\n\t Student 1\n\n";
	s1.showdata( );
	cout<<"\n\t Student2\n\n";
	s2.showdata();
	//getch( );
	return 0;
}
