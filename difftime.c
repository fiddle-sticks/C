// Using the difftime function, needed for CS6200 in all likelehood, takes two times and gives the difference

#include<stdio.h>
#include<time.h>

int main (void){

    time_t start,end;
    volatile long unsigned counter; // since variable can change on its own make it VOLATILE

    start = time(NULL);

    for(counter=0; counter < 1000000000; counter++)
    ;   // do nothhing just loop

    end = time(NULL);

    printf("The loop took %f seconds.\n",difftime(end,start));

    return 0;
}