// this calls some kind of clock ticking function 
//
//
//
//

#include<stdio.h>
#include<time.h>

void wait (int sec)
{
    clock_t end_wait;                       //declare end wait var of type clock tick?
    end_wait = clock () + sec * CLK_TCK;    // 

    while(clock() < end_wait) {}
}

int main ()
{

    int secs = 0;
    printf("How many seconds do you want to wait?\n");
    scanf("%d",&secs);
    printf ("Start the wait!\n");

    wait(secs);            // call wait function send the number of secs as parameter

    printf("End wait!\n");
    return 0;
}

