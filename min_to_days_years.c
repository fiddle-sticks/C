//  program takes minutes from user to calculate time in days and years

#include<stdio.h>

int main(){

    int min;
    double days, years;

    printf("Enter the number of minutes and I will convert to days and years\n");
    scanf("%d",&min);

    days = (double)min / 1440;      // 1440 minutes in a day
    years = (double)min / 524160;   // 524160 minutes in a yaer, must cast the int min as a double

    printf("%d minutes equals %.2lf days and %.2lf years\n", min, days, years);

    return 0;
}