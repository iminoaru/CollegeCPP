/*1. Create a class named 'Student' with a string variable 'name' and an integer variable 'roll_no'.
Include member functions ‘setdata()’ and ‘showdata()’ to take the input and display the output.
Write main function to test your class. */

#include <bits/stdc++.h>

using namespace std;

class Student {

        int roll_no;
        string name;

    public:
        void setdata();
        void showdata();

};

void Student :: setdata(){
    cout << "Enter Roll No. : " ;
    cin >> roll_no;

    cout << "Enter Name : " ;
    cin.ignore();
    getline(cin , name , '\n');
}

void Student :: showdata(){
    cout << "Entered Roll No. : " << roll_no << '\n';
    cout << "Entered Name. : " << name;

}

int main(){

    Student ob;
    ob.setdata();
    ob.showdata();

return 0 ;
}
