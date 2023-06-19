/* 4. Write four overloaded function to perform addition of different types as follows:
 First function to add three integers, second to add three floats, third function to add
three doubles, and fourth to add three long doubles. Call these functions from main function. */

#include <iostream>
using namespace std;

int Add(int num1 , int num2 , int num3){
    return num1 + num2 + num3 ;
}

float Add(float num1 , float num2 , float num3){
    return num1 + num2 + num3 ;
}

double Add(double num1 , double num2 , double num3){
    return num1 + num2 + num3 ;
}

long double Add(long double num1 , long double num2 , long double num3){
    return num1 + num2 + num3 ;
}

int main(){

    int num1 , num2 , num3 ;

    cout << Add(5.8 , 47576.223 , 39778.804);

    return 0;
}
