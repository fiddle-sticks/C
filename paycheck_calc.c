// will calculate your take home pay given number of hours, pay rate, and tax rate


#include<stdio.h>

int main(){

    float hourlywage, hoursworked, grosspay, netpay;

    printf("what is your hourly rate\n");
    scanf("%f",&hourlywage);

    printf("How many hours did you work this week, all hours over 40 are paid at 1.5 times normal rate\n");
    scanf("%f",&hoursworked);

    // caluclate gross pay

    if(hoursworked <= 40)
        grosspay = hourlywage * hoursworked;
    else 
        grosspay = ((40 * hourlywage) + (hoursworked - 40) * (hourlywage * 1.5));

    
    //calculate pay after taxes

    if(grosspay <= 300)
    {   
        netpay = grosspay * .85;
    }
    else if (grosspay > 300 && grosspay <=450)
    {
        netpay = (300 * .85) + (grosspay - 300) * .8;
    }
    else
    {
        netpay = (300 * .85) + (150 * .8) + (grosspay - 450) * .75;
    }



    //print results

    printf("Your gross pay is $%.2f\n",grosspay);
    printf("Your net pay is $%.2f\n",netpay);

    return(0);
}