// introduction to structs
// kinda like OOP, elements inside structs are called members
// struct keyword
//kinda like an enum but better
// first you define a structure, then you declare a variable which allocates memory

#include<stdio.h>


int main (){
    int x = 0;

    struct date
    {
        int month;
        int day;
        int year;
    };

    struct date familybdays[4];


    for(x = 0 ; x < 4 ; x++)
    {
        printf("Enter Family member %d, birth month in numerical form\n");
        scanf("%d", familybdays.month[x]);
        printf("Enter birth day\n");
        scanf("%d", .day);
        printf("Enter todays year\n");
        scanf("%d", &today.year);

    }
    today = (struct date) {2,3,1976}; // one line variable assign to today instance. need to cast vars as data type "date"

    printf("\nok just to confirm, todays date is %d - %d - %d?\n\n", today.month,today.day,today.year);

    return 0;
}
