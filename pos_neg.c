// checking to see if a number is positive or negative or zero

#include <stdio.h>

int main(void){

    int num;

    printf("Enter the number you'd like to check:");
    scanf("%d",&num);

    if(num>0) printf("THe number is positve!\n");
        else if (num<0) printf("The number is negative!\n");
        else printf("The number is zero");

    return(0);
}