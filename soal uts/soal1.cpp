#include <iostream>
using namespace std;

class Mahasiswa {
    string nim;
    string nama;
    string alamat;

public :
    void setNim(string nim) {
        Mahasiswa::nim = nim;
    }

    void setNama(string nama) {
        Mahasiswa::nama = nama;
    }

    void setAlamat(string alamat) {
        Mahasiswa::alamat = alamat;
    }

    string getNim() {
        return Mahasiswa::nim;
    }

    string getNama() {
        return Mahasiswa::nama;
    }

    string getAlamat() {
        return Mahasiswa::alamat;
    }
};

int main(){
    Mahasiswa mhs[5];
    int i;
    for (i=0; i<5; i++) {
        mhs[i].setNim("M050100"+to_string(i));
        mhs[i].setNama("Mahasiswa-"+to_string(i));
        mhs[i].setAlamat("kota-"+to_string(i));
    }

    for (i=0; i<5; i++) {
        cout << mhs[i].getNim() << endl;
        cout << mhs[i].getNama() << endl;
        cout << mhs[i].getAlamat() << endl;
    }
    return 0;
}