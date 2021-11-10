#include <iostream>
using namespace std;

int main(){
    int num1 = 800;
    int num2 = 2;

    // int result = num1 / num2;
    // cout << result << '\n';

    try {
        if(num2 > 0){
            int result = num1 / num2;
            cout << result << '\n';
        } else if (num2 == 0) {
            throw 0;
        } else if (num2 < 0) {
            throw 1;
        }
    } catch(int err) {
        if(err == 0)
            cout << "pembagian dengan 0 tidak diizinkan" << endl;
        else if(err == 1)
            cout << "pembagi kurang dari 0" << endl;
    }
   
    return 0;
}