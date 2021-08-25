/* Pertemuan 1
 * contoh program C++ dengan class 
 * https://slaystudy.com/c-program-to-design-a-simple-calculator-using-class-and-object/
 * */
#include <iostream>
#include <math.h>
using namespace std;
//nama class Calculator
class Calculator { 
	//atribut : data / informasi yang diperlukan oleh class
    double A, B; 
    
//function / method / behaviour : perilaku yang dimiliki class | cal bisa +, *, -, /
public:
	//input bilangan
    void get() { 
        cout << "Enter First Number: ";
        cin >> A;
        cout << "Enter Second Number: ";
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
        if (B == 0) {
            cout << "Divison By Zero" << endl;
            return INFINITY;
        }
        else {
            return A / B;
        }
    }
};

//fungsi utama
int main() {
    int choice;
    //cal object dari class Calculator
    Calculator cal; 
    cout << "Enter 1 Add 2 Numbers"
        << "\nEnter 2 Subtract 2 Numbers"
        << "\nEnter 3 Multiply 2 Numbers"
        << "\nEnter 4 Divide 2 Numbers"
        << "\nEnter 0 To Exit"
        << "\n";
    do {
        cout << "\nEnter Choice: ";
        cin >> choice;
        switch (choice) {
        case 1:
            cal.get();
            cout << "Result: " << cal.add() << endl;
            break;
        case 2:
            cal.get();
            cout << "Result: " << cal.sub() << endl;
            break;
        case 3:
            cal.get();
            cout << "Result: " << cal.mul() << endl;
            break;
        case 4:
            cal.get();
            cout << "Result: " << cal.div() << endl;
            break;
        }
    } while (choice >= 1 && choice <= 4);
    return 0;
}
