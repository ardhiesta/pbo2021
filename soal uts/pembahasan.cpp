#include <iostream>
using namespace std;

enum tipeMk {wajib, pilihan};

class Mahasiswa {
    string nim;
    string nama;

public :    
    void setNim(string nim){
        Mahasiswa::nim = nim;
    }

    string getNim(){
        return Mahasiswa::nim;
    }

    void setNama(string nama){
        Mahasiswa::nama = nama;
    }

    string getNama(){
        return Mahasiswa::nama;
    }
};

class Dosen {
    string nip;
    string nama;

public :
    void setNip(string nip){
        Dosen::nip = nip;
    }

    void setNama(string nama){
        Dosen::nama = nama;
    }
};

class MataKuliah {
    string kodeMk;
    string namaMk;
    int tipe;
    Dosen dosenPengampu;

public:
    void setkodeMk(string kode){
        MataKuliah::kodeMk = kode;
    }

    void setNamaMk(string nama){
        MataKuliah::namaMk = nama;
    }

    void setJenisMk(int tipe){
        MataKuliah::tipe = tipe;
    }

    void setDosen(Dosen d){
        MataKuliah::dosenPengampu = d;
    }
};

class Krs {

};

int main(){
    // data dosen
    Dosen d1;
    d1.setNip("001");
    d1.setNama("mark zukerberg");

    Dosen d2;
    d2.setNip("002");
    d2.setNama("bil gates");

    // simulasi mahasiswa ambil KRS
    Mahasiswa mhs1;
    mhs1.setNama("mahasiswa1");

        // isi data matkul
    MataKuliah mk1;
    mk1.setkodeMk("mk01");
    mk1.setNamaMk("aljabar linear");
    mk1.setJenisMk(wajib);
    mk1.setDosen(d1);

    MataKuliah mk2;
    mk2.setkodeMk("mk02");
    mk2.setNamaMk("konsep pemrograman");
    mk2.setJenisMk(wajib);
    mk2.setDosen(d2);
    return 0;
}