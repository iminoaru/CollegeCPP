/*9. Given an array A of size N-1 and given that there are numbers from 1 to N
 with one element missing; Write program to find the missing number.
       Test case 1: Given array: 1 2 3 5; missing element is 4.
       Test case 2: Given array: 1 2 3 4 5 6 7 8 10; missing element is 9.
*/

#include <stdio.h>
#define n 10
// #define n 5 (Test case 1)
int main(){

    int sum = 0;
    //int arr[n-1] = {1,2,3,5}; (Test case 1)

    int arr[n-1] = {1,2,3,4,5,6,7,8,10};

    for(int i=0 ; i<n-1 ; i++){
            sum = arr[i] + sum;
    }
    int Osum = (n*(n+1))/2;
    int ans = Osum - sum ;

    printf("Missing element is: %d",ans);

    return 0;
}
