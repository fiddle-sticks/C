//intro to signals

#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

int main()
{
    printf("Testing SIGSTOP, program should quit soon\n");
    wait(100);

    raise (SIGSTOP);
    return 0;
}