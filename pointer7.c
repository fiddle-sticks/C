
// void pointers - makes a single variable able to assume any data type, very effcient (embedded)


#include<stdio.h>

int main (){

    int i = 10;
    float f = 2.34;
    char ch = 'g';

    void *vptr;

    vptr = &i;
    printf("Value of i = %d\n",*(int*)vptr); // must cast as a pointer to an int

    vptr = &f;
    printf("Value of f = %.2f\n",*(float*)vptr); // must cast as a pointer to an float

    vptr = &ch;
    printf("Value of ch = %c\n",*(char*)vptr); // must cast as a pointer to char

    return 0;
}