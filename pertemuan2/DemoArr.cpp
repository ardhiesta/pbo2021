#include <iostream>
//#include <conio.h>
#define S 5 // condition compilation (MACRO)
using namespace std;

class DemoArr
{
    int arr[S];

public:
    void input(){
        for(int i = 0; i<S; i++){
            cout<<"\n Enter arr["<<i<<"]element :=";
            //cin>>arr[i];
        }
    }
};

int main(){
    DemoArr d;
    d.input();
    return 0;
}