/*4. Write a program to show that constructors follow the property of function
overloading as well as default parameter. Also, show that in case of constructor
also, default parameter may create problem in implementing function overloading.*/

#include<iostream>
using namespace std;

class Demo{
    public:

        Demo(){
            cout << "Default constructor" << '\n';
        }

        Demo(int x){
            cout << "One argument constructor" << '\n';
        }

       // Demo(int x = 108){
       //     cout << "One argument constructor" << '\n';
       // }  //this will be considered ambgious for default and one arg cons.

        Demo(int x, int y){
            cout << "Two argument constructor" << '\n';
        }
};

int main(){

    Demo ob;
    Demo obb(69);
    Demo obbb(10, 420);

    return 0;
}





