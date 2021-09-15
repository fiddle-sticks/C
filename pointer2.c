// more fun with the POINTER SISTERS

#include<stdlib.h>
#include<stdio.h>

int main (){

    int number = 0;   // int variable intialized to zero
    int *pnumber = NULL; // a pointer that can point to type INT

    number = 10;
    printf("numbers address is %p\n",&number);  //prints address of number var
    printf("numbers value is %d\n\n",number);    //prints the value stores at numbers address, 10

    pnumber = &number;          //stores the address of number in the pointer pnumber

// these 4 lines of code below are great stuff

    printf("pnumbers address: %p\n",(void*)&pnumber);                                     //print the address of pnumber...which will be same as number right? WRONG this is pnumbers address not the address its pointing too!
    printf("pnumbers size: %d bytes\n",sizeof(pnumber));                                            //print the size of the address at pnumber or is it the value? both are 4 bytes
    printf("pnumbers value (the address it points to) ...should equal address of number above: %p\n",pnumber);             //print the address that pnumber points to?
    printf("value pointed to....should be ten: %d\n",*pnumber);

    return 0;
}