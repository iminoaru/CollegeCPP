/*3. Overload ‘+’ operator that adds two strings to make a third string. Write a program to do the following tasks:
i. Create uninitialized string objects
ii. Creates the objects with string constants.
iii. Concatenates two strings properly using operator overloading.
iv. Displays a desired string object */

#include <iostream>
#include <string>
using namespace std;

class String{
private:
    string str;

public:
    String(){}

    String(string s){
        str = s;
    }

    String operator+(String s2){
        String s3;
        s3.str = str + s2.str;
        return s3;
    }

    void display(){
        cout << str << endl;
    }
};

int main(){
    String s1, s2("Ronnie"), s3(" Arnie"), s4;
    s4 = s2 + s3;
    s1.display();
    s2.display();
    s3.display();
    s4.display();
    return 0;
}
