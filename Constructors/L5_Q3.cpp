/*3.  Write a program to show that, the constructor and destructor functions of a globally
declared object are the first and last functions, respectively to be called in a program.*/

#include<iostream>
using namespace std;

class Demo{
    public:
        Demo(){
            cout << "constructor called" << '\n';
        }
        ~Demo(){
            cout << "destructor called" << '\n';
        }
};

int main(){
    Demo a;
    cout << "Main called" << '\n';
    return 0;
}
