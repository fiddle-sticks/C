#include <stdio.h>

int i = 100;

void foo(void);

int main (void)
{
    printf("%i ",i);
    foo();
    printf("% i \n",i);

    return 0;
}