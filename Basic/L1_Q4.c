/*4. Write a program using a function which returns 1 if A[i]=i
otherwise it returns 0. Here A is a 1-D array. */

/* basically the array should be 0 -> n in order to get 1. */

#include <stdio.h>
#define n 12
int main(){


    int arr[n] = {6,1,11,2,3,4,5,6,7,8,9,10};
    for(int i=0 ; i<n ; i++){
        if(arr[i] == i){
                printf("1");
            return 1;
        }
        else{
            continue;
        }
    }
    return 0;
}
