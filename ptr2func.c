// pointers to functions

#include<stdio.h>

int somedisplay();

int main (void){

    int (*func_ptr)();      // declare pointer to type function

    func_ptr = somedisplay;  // ptr now points to function

    printf("\nAddress of function somedisplay is %p\n",func_ptr);

    (*func_ptr) ();

    return 0;
}

int somedisplay() {
    printf("\n--Displaying some texts--\n");
    return 0;
}