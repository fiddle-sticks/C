// Fibonacci series using while loop up to user defined element number

#include<stdio.h>

int main(void){
    int ctr=0,tot2=1,tot1=0,temp,num_elem; // intialize variables

    printf("Enter the number of elements you'd like to see fiboaci up to:");
    scanf("%d",&num_elem);

    printf("Fibo: %d, %d, ",tot1, tot2);
    ctr = 2;

    while (ctr < num_elem) 
    {   
        temp=tot1+tot2;
        tot1=tot2;
        tot2=temp;
        ++ctr;
        printf("%d, ",temp);    
    }

    return(0);

}

