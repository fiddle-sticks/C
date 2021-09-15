#include <stdio.h>
#include <stdlib.h>

int main ()
{

int count = 10,x; // two int vars
int *int_pointer; // pointer to data type int

int_pointer = &count; // assign address of count to int_pointer
x = *int_pointer; // x is the value stored in int_pointer, dereferenced

printf("count=%i,x=%i\n",count, x); //printing the vales of both count and x, both 10

// printf("address of int_pointer %p\n address of x %p\n address of count %p\n",int_pointer,&x,&count);
// printf("mem address of (void*)&int_pointer: %p\n",(void*)&int_pointer);

printf("int_number's size in byyes: %d \n",(int)sizeof(int_pointer));

return 0;
}