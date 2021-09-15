// pointers to structures, the use the "->" operator

#include<stdlib.h>
#include<stdio.h>

struct date
{
    int month;
    int day;
    int year;
};

int main (void)
{

    struct date today, *datePtr; // declare a variable wthat is a pointer to a struct

    datePtr = &today; //assign address of today to dateptr

    datePtr->month = 9;
    datePtr->day = 9;
    datePtr->year = 1980;

    printf("Andreas birthday is %i/%i/%i\n", datePtr -> month, datePtr-> day, datePtr->year);

    return 0;
}




