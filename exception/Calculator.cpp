/* Pertemuan 1
 * contoh program C++ dengan class 
 * https://slaystudy.com/c-program-to-design-a-simple-calculator-using-class-and-object/
 * */
#include <iostream>
//#include <math.h>
using namespace std;
//nama class Calculator
class Calculator { 
	//atribut : data / informasi yang diperlukan oleh class
    double A, B; 
    
//function / method / behaviour : perilaku yang dimiliki class | cal bisa +, *, -, /
public:
	//input bilangan
    void get() { 
        cout << "Masukkan bilangan pertama: ";
        cin >> A;
        cout << "Masukkan bilangan kedua: ";
        cin >> B;
    }
    //menjumlahkan bilangan
    double add() {
        return A + B;
    }
    //mengurangi bilangan
    double sub() {
        return A - B;
    }
    //mengalikan bilangan
    double mul() {
        return A * B;
    }
    //membagi bilangan
    double div() {
        return A / B;
        // if (B == 0) {
        //     cout << "Pembagian dengan bilangan 0" << endl;
        //     return INFINITY;
        // }
        // else {
        //     return A / B;
        // }
    }
};

//fungsi utama
int main() {
    int choice;
    //cal object dari class Calculator
    Calculator cal; 
    cout << "Ketik 1 untuk menjumlahkan 2 bilangan"
        << "\nKetik 2 untuk mengurangkan 2 bilangan"
        << "\nKetik 3 untuk mengalikankan 2 bilangan"
        << "\nKetik 4 untuk membagi 2 bilangan"
        << "\nKetik 0 untuk keluar dari program"
        << "\n";
    do {
        cout << "\nKetik pilihan anda: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cal.get();
            cout << "Hasil: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Hasil: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Hasil: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Hasil: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
