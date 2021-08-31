#include <iostream>
#include <math.h>
using namespace std;
//nama class Calculator
class Termometer { 
    double suhu = 0;

    public:
	//input bilangan
    void get() { 
        cout << "Masukkan suhu (dalam derajat Celcius): ";
        cin >> suhu;
    }

    double celciusToReamur() {
        return (4.0/5.0) * suhu;
    }
};

int main(){
    Termometer term;
    term.get();
    double hasil = term.celciusToReamur();
    cout << hasil;
    return 0;
}