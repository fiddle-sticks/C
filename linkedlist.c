// Introduction to Linked Lists

#include<stdio.h>
#include<stdlib.h>

int main(){

    struct test_struct
    {
        int val;                      // this list stores ints
        struct test_struct *next ;   // pointer of type test_struct that points to the next instance of the list
    };

    struct test_struct *ptr = (struct test_struct*) malloc ( sizeof( struct test_struct)); // define a node in list, allocate memory

    ptr->val = 69; // assign a value to current node

    ptr->next = NULL;

    printf("%d is the value of the current node\n",ptr->val );



    return 0;
}