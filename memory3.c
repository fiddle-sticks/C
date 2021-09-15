// from 3 easy pieces page 7

#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>

int main(int argc, int *argv[])
{
    int *p = malloc(sizeof(int));

    assert(p != NULL);

    printf("(%d) address pointed to by p: %p\n",getpid(),p);

    *p = 0;

    while(1)
    {
        
    }
}