// intro to the random number generator

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
    int i, n;
    time_t t;

    n = 5;

    //seed the random number generator with current time

    srand((unsigned) time(&t));

    // print 5 random numbers from 1 to 100

    for(i=0 ; i < n; i++)
    {
        printf("%d\n", rand() % 100);
    }
    
    return 0;
}