/*2. Write a function to reverse an array of long double types.
 Call this function from main function.*/

#include <iostream>
using namespace std ;

void rev(long double arr[]){

    for(int i = 5 ; i>0 ; i++){
        arr[5-i] = arr[i];
    }

}


int main(){

    long double arr[5] = {12.54 , 23.56 , 5.76 , 7.89 ,4.5};

    //for(int i = 0 ; i<5 ; i++){
    //    cout << arr[i] << '\n' ;
    //}

    rev(arr);

    cout << arr << '\n' ;

    for(int i = 0 ; i<5 ; i++){
        cout << arr[i] << '\n' ;
    }
    return 0;
}

