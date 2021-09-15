// malloc, calloc, realloc

// int *pNumber = (int *)malloc(25*sizeof(int))   allocating space for 25 ints on any system, portable


#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){

    char *str = NULL;

    //intialize memory allocation

    str = (char*) malloc(15 * sizeof(char));
    strcpy(str,"jimbo");
    printf("String = %s, Address = %p\n", str, str);

    //Reallocating memory

    str = (char *) realloc(str,25 * sizeof(char));
    strcat(str,".com");
    printf("String = %s, Address = %p\n", str, str);

    free(str); // free memory


    return 0;
}