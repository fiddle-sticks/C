// storing data in a 2 dimensional array, 2 years, 4 quarters each
// gather monthly spend in from user, calculate average, print totals

#include <stdio.h>

#define YEARS 2             // defining years as 2, no semi colon after the define
#define PERIODS 4           // periods equals 4 to show quarters

int main(void)
{


float spend[4][6];  // declare 2d array
int x=0,y=0;
float sum=0,avg=0;

// get input from user, 2 years 4 quarters of spend data

printf("This program will take 2 years of quarterly spend data and provide analysis.\n");
printf("please Enter quarterly data\n");

for(x = 0; x < YEARS ; x++) //outer loop to iterate through the years
{
    for(y = 0;y < PERIODS ; y++) //inner loop to enter in quarter data
    {   
        printf("Year %d, Quarter %d data:",(x+1),(y+1));
        scanf("%f", &spend[x][y]);  //& to scan in array? I thought we didnt have to, maybe thats just strings

    }

}

/*

for(x = 0; x < YEARS ; x++) //outer loop to iterate through the years
{
    for(y = 0;y < PERIODS ; y++) //inner loop to enter in quarter data
    {   
        printf("Year %d, Quarter %d data:",(x+1),(y+1));
        printf("%f\n", spend[x][y]);  //print contents

    }

}

*/



//calculate quartly averages and yearly totals, store them in same array
for(x = 0; x < YEARS ; x++) //outer loop to iterate through the years
{
    for(y = 0;y < PERIODS ; y++) //inner loop to enter in quarter data
    {   
        sum += spend[x][y]; //sum all quarter data in a year, store in SUM
    }
    avg = (float) sum / PERIODS;  // casting as a float

    spend[x][y+1] = avg; // store average data in the array at the end of the line, after quarter data

    printf("Total spend for year %d equals: $%.2f\n",(x+1), sum); //prints results, didnt store sum in array, having problems with that need to circle back
    printf("Quarterly average for year %d is: $%.2f\n",(x+1), avg);
    sum = 0; //set sum back to zero for next year
    avg = 0; //set avg back to zero for next year
}



return(0);

}