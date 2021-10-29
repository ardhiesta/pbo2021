#include <iostream>
using namespace std;

class student {
    char sname [20];
    int rollno;

public :
    void input_st(){
        cout << "Enter student name " << endl;
        cin.getline(sname,20);
        cout << "Enter the roll number" << endl;
        cin >> rollno;
    }

    void show_st(){
        cout << "\tName :=" << sname << endl;
        cout << "\tRoll number :=" << rollno << endl;
    }
};

class Subject: public student{
    char subject[25];
public :
    void input_sub(){
        input_st();
        cin.ignore();
        cout<< "Enter the subject name" << endl;
        cin.getline(subject,25);
    }

    void show_sub(){
        show_st();
        cout << "\tSubject=" << subject << endl;
    }
};

class Internal :virtual public Subject {
    char subject[25];
protected :
    int i_marks;
public :
    void input_im(){
        cout << "Enter internal marks (0 to 20)" << endl;
        cin >> i_marks;
        if(!(i_marks >= 0 && i_marks <= 20)){
            cout << "Invalid Marks" << endl;
            exit(0);
        }
    }
    void show_im( ){
        cout<<"\tInternal marks="<<i_marks<<endl;
    }
};

class External :virtual public Subject{
protected :
    int e_marks;
    public :
    void input_em(){
        cout << "Enter External marks (0 to 80)" << endl;
        cin >> e_marks;
        if(!(e_marks >= 0 && e_marks <= 80)) {
            cout << "Invalid Marks" << endl;
            exit(0);
        }
    }
    
    void show_em(){
    cout << "\tExternal Marks=" << e_marks<< endl;
    }
};