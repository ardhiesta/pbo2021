#include <iostream>
using namespace std;

int main()
{
    int var = 2;

    int *var2 = &var; // pointer *var2 diassign ke alamat memory var

    cout<<&var<<" memiliki nilai "<<var<<endl; // &var menampilkan alamat memory

    cout<<*&var<<endl;

    cout<<*var2<<endl; // menampilkan isi dari alamat memory var2

    return 0;
}