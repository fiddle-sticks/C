//COUNT THE NUMBER OF DIGITS IN A USER SUPPLIED NUMBER

#include<stdio.h>

int main(void){

    int n, count = 0;

    printf("Enter a numner and I will tell you the number of digits!\n");

    scanf("%d",&n);

    while(n!=0)
    {
        n /= 10; //divid itself by 10, assign that number as new number -- chop off the ones column
        count++; //what happens when yo move ++ to backside? answer: nothing
    }

    printf("\n\nCongrats, you have %d number of digits in that number.\n",count);
    
    return(0);
}