#include <thread>
#include "Account.h"
using namespace std;

enum ThreadType {
    DEPOSITOR,
    WITHDRAWER
};

Account account(5000.00);

void threadProc ( ThreadType typeOfThread ) {
    while ( 1 ) {
        switch ( typeOfThread ) {
            case DEPOSITOR: {
                cout << "Account balance before the deposit is "
                << account.getBalance() << endl;
                account.deposit( 1000.00 );
                cout << "Account balance after deposit is "
                << account.getBalance() << endl;
                this_thread::sleep_for( 1s );
            }
            break;

            case WITHDRAWER: {
                cout << "Account balance before withdrawing is "
                << account.getBalance() << endl;
                account.withdraw( 1000.00 );
                cout << "Account balance after withdrawing is "
                << account.getBalance() << endl;
                this_thread::sleep_for( 1s );
            }
            break;
        }
    }
}

int main( ) {
    thread depositor ( threadProc, ThreadType::DEPOSITOR );
    thread withdrawer ( threadProc, ThreadType::WITHDRAWER );
    depositor.join();
    withdrawer.join();
    return 0;
}