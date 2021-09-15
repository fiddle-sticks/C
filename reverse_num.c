// this program will take a user supplied number, reverse it, and print

#include <stdio.h>

int main() {
 
    int num,rem=0,rev=0;

    printf("Enter a number to see its reverse\n");
    scanf("%d",&num);

    while(num>=1)
    {
        rem=num % 10;
        rev=rev * 10 + rem;
        num = num /10;

    }

    printf("The reversed number is ...... %d",rev);

    return(0);
}