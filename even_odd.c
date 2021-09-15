// Even or odd finder of a user supplied number

#include<stdio.h>

int main(void){

    int num;

    printf("Please enter a number to see if its even or odd\n");
    scanf("%d",&num);

    if (num == 0){
        printf("You entered Zero. Bye\n");
        return(0);
    }

    else if(num % 2 == 0)
    {
        printf("You entered an even number\n");
        return(0);
    }

    else printf("You entered an odd number\n");
        return(0);

}