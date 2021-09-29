#include <iostream>
#define BARIS 3
#define KOLOM 3

using namespace std;

class SqrMat {
	int arr[BARIS][KOLOM];
public :
	void input();
	void display();
	void testDiag();
	void testDiag2();
};

void SqrMat::testDiag(){
	int i, j;
	for(i=0;i<BARIS;i++){
		for(j=0;j<KOLOM;j++)
			if(i==j)
				cout<<arr[i][j]<<"\n";
				//cout<<i<<" _ "<<j<<" | "<<arr[i][j]<<"\t";
	}
}

void SqrMat::testDiag2(){
	int i, j;
	for(i=0;i<BARIS;i++){
		for(j=0;j<KOLOM;j++)
			if(i+j == BARIS-1)
				//cout<<arr[i][j]<<"\n";
				cout<<i<<" _ "<<j<<" | "<<arr[i][j]<<"\t";
	}
}

void SqrMat::display(){
	int i, j;
	cout<<"Matrix is \n";
	for(i=0;i<BARIS;i++){
		for(j=0;j<KOLOM;j++)
			cout<<arr[i][j]<<"\t";
		cout<<endl;
	}
}

void SqrMat::input(){
	int i,j;
	for(i=0;i<BARIS;i++)
		for(j=0;j<KOLOM;j++){
			cout<<"\nEnter arr["<<i<<"]["<<j<<"]elements :=";
			cin>>arr[i][j];
		}
}

int main(){
	SqrMat obj;
	obj.input();
	obj.display();
	obj.testDiag2();
	return 0;
}
