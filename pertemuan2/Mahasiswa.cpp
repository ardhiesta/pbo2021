#include <iostream>

using namespace std;

class Mahasiswa{
private :
    string nama;
    char jenisKelamin;
    string alamat;

public :
    void isiData(){
        nama = "Dennis Ritchie";
        jenisKelamin = 'L';
        alamat = "Sukoharjo";
    }

    void setNama(string mNama){
        nama = mNama;
    }

    string getNama(){
        return nama;
    }

    void setJenisKelamin(char mJenisKelamin){
        jenisKelamin = mJenisKelamin;
    }

    char getJenisKelamin(){
        return jenisKelamin;
    }

    void setAlamat(string mAlamat){
        alamat = mAlamat;
    }

    string getAlamat(){
        return alamat;
    }
};

int main(){
    Mahasiswa mhs;
    mhs.isiData();
}