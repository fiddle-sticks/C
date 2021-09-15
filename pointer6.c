// blah blah



#include<stdio.h>

int main (){

    int value = 0;
    int *pvalue = NULL;
    pvalue = &value;

    printf("Input a number:\n");
    scanf("%d",pvalue);  // no "&"" needed since its already an address

    printf(" You entered %d", value);


    return 0;
}