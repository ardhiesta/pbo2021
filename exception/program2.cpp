#include <iostream>
using namespace std;

void fn(const char* str)
    {
        if (islower(str[0]))
            throw 'l';
    }

int main()
{
    try
        {
            fn("Smith");
        }
    catch (char ch)
        {
            if (ch == 'l')
                cout << "Person's name cannot begin in lowercase!" << '\n';
        }
   
    return 0;
}