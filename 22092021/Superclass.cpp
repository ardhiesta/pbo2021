//contoh kode program berikut memuat implementasi konsep inheritance / pewarisan

#include <iostream>
using namespace std;

class ClassA
{
public:
	int x = 20;
	
	void show(){
		cout<<"Hello from ClassA"<<endl;
	}
};

/* 1. Apa maksud dari :public ClassA pada baris di bawah ini
 * 
 * :public ClassA adalah deklarasi pewarisan
 * ClassA diwariskan / diturunkan / diinherit menjadi ClassB
 * ClassB akan memiliki karakteristik yang sama seperti superclassnya (ClassA)
 * ClassB memiliki atribut dan method yang sama seperti ClassA
 * */
class ClassB:public ClassA
{
	
};

class ClassC:public ClassB
{
public:
	int z = 19;
	
	/*5. Tambahkan function untuk menjumlahkan atribut x dengan z
	panggil function tersebut di dalam main */
	
	void test(){
		int t = x + z;
		cout << t << endl;
	}
};

int main()
{
	ClassB obj;
	cout << obj.x << endl; //2. Apa output yang didapatkan dari baris ini --> 20
	obj.show(); //3. Apa output yang didapatkan dari baris ini --> Hello from ClassA
	/* 4. Mengapa obj yang merupakan object dari ClassB dapat menggunakan atribut x dan function show, padahal di ClassB tidak dideklarasikan atribut dan function apapun 
	 * 
	 * karena ClassB merupakan turunan dari ClassA
	 * ClassB akan mewarisi atribut dan method2 yang ada pada superclassnya
	 * */
	
	//6. Apa yang dapat anda simpulkan dari konsep inheritance / pewarisan
	return 0;
}
