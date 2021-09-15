// Calendar Printing program using user input to line up days of the week

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(void){
    int i, j, k, days, dt=1;
    char first_day[3];

    printf("C program to print a calendar\n\n");

    printf("enter total number of days in the month : ");
    scanf("%d",&days);

    printf("\n\n Enter first day to start the month: mon, tue, wed, thu, fri, sat, or sun\n");
    scanf("%s", first_day); // capture first day of the month from user


// string compare conditional logic to convert day to a number 0 - 6.... not working.
    if(strcmp(first_day,"mon") == 0)
        k=0;

    if(strcmp(first_day,"tue") == 0)
        k=1;

    if(strcmp(first_day,"wed") == 0)
        k=2;

    if(strcmp(first_day,"thu") == 0)
        k=3;

    if(strcmp(first_day,"fri") == 0) 
        k=4;

    if(strcmp(first_day,"sat") == 0)
        k=5;

    if(strcmp(first_day,"sun") == 0)
        k=6;

    printf("\nMon \tTue \tWed \tThu \tFri \tSat \tSun \n"); // \t means to tab!
    printf("---------------------------------------------------\n");
    
    for(j = k ; j > 0; j--)
    {
        printf("\t");
        
    }

    while(dt <= days)
    {
        if(k!=0)
        {
            if(k % 7 == 0)
            printf("\n");
        }

    printf("%d\t",dt);
    dt++;
    k++;
    }


   

return(0);

    }
