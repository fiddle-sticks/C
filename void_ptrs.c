// Void pointers

#include <stdio.h>

int main(){
    int i = 10;
    float f = 2.34;
    char ch = 'k';

    void *vptr = NULL;  // can print to anything just need to cast it
    vptr = &i;           // pointing to an int

    printf("Value of i  =  %d\n", *(int *)vptr);   // casting the void pointer as an int

    vptr = &f;
    printf("Value of f = %f\n", *(float *)vptr);   //print the value of the float using same pointer

    vptr = &ch;   //char pointer
    printf("Value of i = %c\n", *(char *)vptr);    // print and cast the char pointer




    return 0;
}