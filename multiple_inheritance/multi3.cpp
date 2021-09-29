#include <iostream>
using namespace std;

class Communication {
public:
    Communication() {
        cout << "Communication constructor executed" << endl;
    }

    void write() {
        cout << "write function executed" << endl;
    }
};

// fixing by add virtual keyword
class Transmitter: virtual public Communication {
public: 
    Transmitter() {
        cout << "Transmitter constructor executed" << endl;
    }
};

class Receiver: virtual public Communication {
public:
    Receiver() {
        cout << "Receiver constructor executed" << endl;
    }
};

class Radio: public Transmitter, public Receiver {
public:
    Radio() {
        cout << "Radio constructor executed" << endl;
    }
};

int main() {
    Radio r;
    // berapa kali constructor Communication dipanggil?
    
    // apa yang terjadi kalau write dipanggil?
    // r.write();


    // apa perbedaan dengan file multi.cpp?
    return 0;
}