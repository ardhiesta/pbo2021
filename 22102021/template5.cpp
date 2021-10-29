#include <iostream>
using namespace std ;

template <typename T>
T jumlah (T arr[]) {
	T sum = arr[0];
	int  i;
	for (i=1;i<=4;i++){
		sum = sum + arr[i];
	}
    //cout << "Jumlah = "<< sum ;
    return sum;
}

int main (){
	int iarr[5]={1,3,4,9,12};
	float farr[5]={2.0,1.1,3.2,2.5,2.4};
	double darr[5]={2.345,1.234,4.145,1.344,4.567};
	
	cout<<"Jumlah array integer = "<< jumlah(iarr)<<"\n";
	cout<<"Jumlah array float = "<< jumlah(farr)<<"\n";
	cout<<"Jumlah array double = "<< jumlah(darr)<<"\n";
    return 0;
}