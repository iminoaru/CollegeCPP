/* 1. Write a function that finds the minimum and the maximum value in an array
of N integers. Inputs to the function are the array of integers, an integer variable
containing the length of the array and pointers to integer variables that will contain
the minimum and the maximum values. The function prototype is:

void minmax( int array[], int length, int * min, int * max);

Write a main function that uses this function to find and display the minimum
and the maximum values of an array of integers. */

#include <iostream>
using namespace std ;

void minmax( int array[], int length, int &min, int &max){

    for(int i = 0 ; i<length ; i++){
        if(max < array[i]){
            max = array[i];
        }

        if(min > array[i]){
            min = array[i];
        }
    }
}

int main(){

    int length = 7;
    int array[length] = {6,2,4,5,7,3,8};

    int min = array[0];
    int max = array[0];

    cout << "Minimum value is : " << min << '\n' << "Maximum value is : " << max ;
    cout << '\n' << '\n' ;

    minmax(array, length, min, max);

    cout << "Minimum value is : " << min << '\n' << "Maximum value is : " << max ;

return 0;

}


