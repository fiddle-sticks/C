// just the factorial maam ... hahahahah

#include<stdio.h>

int main(void) {

    int x=0,num=0,temp=0;

    printf("What number would you like to see factorial?\n");
    scanf("%d",&num);
    temp=num;
    for(x=num-1;x>0;x--){
        temp = temp*x;
    }

    printf("The factorial of %d is %d.\n",num,temp);


    return(0);
}