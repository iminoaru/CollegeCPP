/*6. Write a program which finds a four digit number AABB which is a perfect square.
 A and B represent different digits. For example 7744 is a four digit perfect square number
  which is also satisfying the condition AABB
ie. first two digits (AA=77) are same and last two digits (BB=44) are same.*/

#include <stdio.h>
 int main(){


    for(int i = 1000 ; i<9999 ; i++){
        if(((i%10 == (i/10)%10)&& (i/100)%10 == (i/1000)%10) && (i%10 != (i/100)%10)){

                printf("%d  ",i);

        }
    }
    return 0;
 }
