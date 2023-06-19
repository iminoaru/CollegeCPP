/*5. Write a program to round off an integer “i” to the next largest multiple of another integer “j”.
 Take the values of i and j from user. For example, if i=256 and j=7 then you will get 259.*/

 #include <stdio.h>
 int main(){

    int i , j , remainder;
    printf("Enter Values: ");
    scanf("%d%d",&i,&j);
    remainder = i % j ;
    if(remainder == 0){
        printf("%d",i);
        return 0;
    }
    for(int k=remainder ; k<j ; k++){
        i++;
    }
    printf("%d",i);

    return 0 ;
 }
