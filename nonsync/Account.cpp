#include "Account.h"

Account::Account(double balance) {
    this->balance = balance;
}

double Account::getBalance() {
    return balance;
}

void Account::withdraw(double amount) {
    if ( balance < amount ) {
        cout << "Insufficient balance, withdraw denied." << endl;
        return;
    }
    balance = balance - amount;
}

void Account::deposit(double amount) {
    balance = balance + amount;
}