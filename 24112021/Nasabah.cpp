#include <iostream>
using namespace std;

class Nasabah{
private :
    string nama;
    double saldo;

public :
    Nasabah(string nama, double saldoAwal){
        nama = nama;
        saldo = saldoAwal;
    }

    void withdraw(double amount){
        saldo = saldo - amount;
    }

    void deposit(double amount){
        saldo = saldo + amount;
    }

    string getNama(){
        return nama;
    }

    double getSaldo(){
        return saldo;
    }
};

int main(){
    Nasabah n1("Budi", 1000000);
    cout << "saldo " << n1.getNama() << " = " << n1.getSaldo() << endl;
    n1.deposit(500000);
    cout << "saldo " << n1.getNama() << " = " << n1.getSaldo() << endl;
    n1.withdraw(200000);
    cout << "saldo " << n1.getNama() << " = " << n1.getSaldo() << endl;
}