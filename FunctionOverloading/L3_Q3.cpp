/* 3. Create a four-function calculator for fractions. Here are the formulas for the four arithmetic operations applied to fractions:

Addition: a/b + c/d = (a*d + b*c) / (b*d)
Subtraction: a/b - c/d = (a*d - b*c) / (b*d)
Multiplication: a/b * c/d = (a*c) / (b*d)
Division: a/b / c/d = (a*c) / (b*c)

The user should type the first fraction (two values a and b), an operator, and a second fraction (two values c and d).
The program should then display the results in fraction ie. (Numerator/ denominator). */

#include <iostream>
using namespace std;

void Add(int &a , int &b , int &c , int &d){

    int num = (a*d + b*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Subtract(int &a , int &b , int &c , int &d){

    int num = (a*d - b*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Multiply(int &a , int &b , int &c , int &d){

    int num = (a*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}
void Division(int &a , int &b , int &c , int &d){

    int num = (a*c);
    int deno =(b*d);

    cout << num << "/" << deno << '\n' ;
}

int main(){

    int a , b , c , d ;
    char op;

    cout << "Enter a and b: " << '\n' ;
    cin >> a >> b ;
    cout << "enter Operator: " << '\n' ;
    cin >> op;
    cout << "Enter c and d: " << '\n' ;
    cin >> c >> d;

    if(op == '+') Add(a,b,c,d);
    else if(op == '-') Subtract(a,b,c,d);
    else if(op == '*') Multiply(a,b,c,d);
    else if(op == '/') Division(a,b,c,d);
    else cout << "Invalid Entry" ;

    return 0;
}
