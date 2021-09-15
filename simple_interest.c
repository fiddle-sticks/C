//calculate simple interest

#include <stdio.h>

int main() {
    float principle,rate,years,interest;

    printf("How much are you going to invest?\n");
    scanf("%f",&principle);
    printf("what is the annual interest rate?\n");
    scanf("%f",&rate);
    printf("How many years is the investment?\n");
    scanf("%f",&years);

    interest = (principle * rate * years);
    printf("WIth the information you've entered, your investment will accumulate $%.2f interest",interest);


    return(0);
}