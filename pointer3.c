// basically the same file as pointer2 but creating it from scratch

#include<stdio.h>

int main(){

    int num = 69;
    int *ptr = NULL; // need to intialize to NULL

    ptr = &num;

    printf("Nums address: %p\n",&num);

    printf("The size of the pointer: %d\n",sizeof(ptr));
    printf("The Address of the pointer: %p\n",(void*)&ptr);
    printf("The value of the pointer: %p\n",ptr);
    printf("The value of what the pointer is pointing to: %d\n",*ptr);


return 0;
}