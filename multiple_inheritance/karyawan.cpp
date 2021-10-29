#include <iostream>
using namespace std;

class Karyawan {
    string nama, alamat, jenisKelamin;

protected :
    int x;

public :
    Karyawan(){
        cout << "tes" << endl;
    }

    void setNama(string nm){
        nama = nm;
    }

    string getNama(){
        return nama;
    }

    void setAlamat(string al){
        alamat = al;
    }

    string getAlamat(){
        return alamat;
    }

    void setJenisKel(string jk){
        jenisKelamin = jk;
    }

    string getJenisKel(){
        return jenisKelamin;
    }

    virtual int hitungGaji() = 0;
};

class KaryawanHonorer: public Karyawan {
    int jmlHariKerja = 20;
    int honorPerHari = 140000;
public :
    int hitungGaji(){
        return jmlHariKerja * honorPerHari;
    }
};

class KaryawanTetap: public Karyawan {
    int bonus = 1450000;
    int gajiPokok = 2750000;
public :
    int hitungGaji(){
        string nm;
        nm = nama;
        return bonus + gajiPokok + x;
    }
};

int main() {
    KaryawanHonorer kh;
    kh.setNama("John");


    // KaryawanHonorer kh;
    // kh.setNama("Joni");
    // kh.setAlamat("Mojolaban");
    // kh.setJenisKel("L");
    // cout << "nama: " << kh.getNama() << 
    // ", alamat: "<< kh.getAlamat() << ", jenis kelamin: " << kh.getJenisKel() << endl ;
    // cout << "gaji: " << kh.hitungGaji() << endl;
    // KaryawanTetap kt;
    // kt.setNama("Sinta");
    // kt.setAlamat("Cemani");
    // kt.setJenisKel("P");
    // cout << "nama: " << kt.getNama() << 
    // ", alamat: "<< kt.getAlamat() << ", jenis kelamin: " << kt.getJenisKel() << endl ;
    // cout << "gaji: " << kt.hitungGaji() << endl;
    return 0;
}