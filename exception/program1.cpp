#include <iostream>
using namespace std;

int main(){
    int num1 = 800;
    int num2 = 0;

    try {
        if(num2 !=0){
            int result = num1 / num2;
            cout << result << '\n';
        } else {
            throw 0;
        }
    } catch(int err) {
        if(err == 0)
            cout << "pembagian dengan 0 tidak diizinkan" << endl;
    }
   
    return 0;
}