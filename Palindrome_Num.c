//chck to see if a number is a palindrome

#include<stdio.h>

int main(void){

    int num,rev=0,rem,temp;

    printf("Enter an integer to check number:\n");
    scanf("%d", &num);

    temp = num;

    while(temp != 0) //generate reverse number
    {
        rem = temp % 10; //assign number in ones column to rem
        rev = rev * 10 + rem; //  add the new remainder in the ones column
        temp /= 10; // divide itself by 10 and assign that number
    }

    if(rev == num)
        printf("%d is a Palindrome number",num);
        else
            printf("Not a PALINDROME YOU FOOL!!!");


    return(0);





    return(0);
}