// LCM FINDER FOR 2 NUMBERS 

#include<stdio.h>


int main(void) {

    int num1,num2,max;
    
    printf("Enter 2 positive numbers.\n");
    scanf("%d %d", &num1, &num2);

    max=(num1>num2) ? num1 : num2; //find bigger number and copy to max variable

    while(1)  //basically saying do this forever until you hit that break
    {
        if(max % num1 == 0 && max % num2 == 0) //if our max is evenly divisible by both numbers then we have our LCM
        {   
        printf("LCM of %d and %d is %d", num1, num2, max);
        break;
        }
        ++max; //decrement max by one
    }
    return(0);
}