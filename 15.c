// sum of natural numbers i.e. 5 = 5 + 4 + 3 + 2 + 1 = 15

#include<stdio.h>


int main(void) {

    int num1,sum=0,ctr=1;

    printf("Please enter a number to find the sum of all the natural numbers\n");
    scanf("%d",&num1);

     while (ctr<=num1)
     {
        sum+=ctr;
        ++ctr;
     }

     printf("\nSum of Natural Numbers is : %d\n",sum);



    return (0);
}