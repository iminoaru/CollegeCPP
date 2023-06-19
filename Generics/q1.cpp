/*Write a function template ‘swap’ that can swap two items. 
Invoke this generic function by different data types like int, double, and char from the main function.*/

#include <iostream>
using namespace std;

template <class T>
void swap(T a , T b){
    T t;
    t = a;
    a = b;
    b = t;
    
    cout << a << " " << b << '\n';
}

int main(){
    
    swap<int>(10 , 20);
    swap<double>(10.1 , 20.2);
    swap<char>('x' , 'y');

    return 0;
}
