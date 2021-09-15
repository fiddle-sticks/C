// more pointers ;)


#include<stdio.h>



int main(){

    int number = 0;
    int *pnumber = NULL;
    
    number = 10;
    pnumber = &number;

    *pnumber += 25; 

    printf("SHould be 35: %d\n", *pnumber);
    printf("%d is this 35?\n", number);

    number -= 10;

    printf("SHould be 25: %d\n", *pnumber);
    printf("%d is this 25?\n", number);


    return 0;
}