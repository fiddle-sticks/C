// introduction to basic time and date functions in C
//
//
//


#include<stdio.h>
#include<time.h>

int main ()
{
    time_t sec;
    sec = time (NULL);

    printf("The number of hours since Jan1, 1970 is %ld \n", sec/3600);

    time_t mytime;          //creating my time variable from system defined time_t type
    mytime = time(NULL);    // calling the time function frime time.h library, the return value equaling the current time
    
    printf("Today is....");
    printf(ctime(&mytime));

    return 0;
}