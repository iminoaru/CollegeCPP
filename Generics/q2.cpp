
/*Write a genering function to find the max element  in a given array. 
Test your function for integer array, float array, char array.*/

#include <iostream>
using namespace std;

template <class T>
void maxima(T arr[] , T max){
    
    for(int i = 0 ; i < 5 ; i++){
        if(arr[i] > max) max = arr[i];
    }
    
    cout << max << '\n';
}

int main(){

    int arri[5] = {8 , 2 , 3 , 6 , 5};
    maxima<int>(arri , 0);   
    
    float arrf[5] = {1.8 , 2.8 , 3.2 , 4.6 , 5.9};
    maxima<float>(arrf , 0.0);
    
    char arrc[5] = {'s' , 'h' , 'i' , 'v' , 'a'};
    maxima<char>(arrc , 'a');

    return 0;
}
