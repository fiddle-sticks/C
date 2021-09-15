// raises to the power of 3  using pow function

#include<stdio.h>
#include<math.h>

int main(void){
    int num,power;

    printf("What number would you like to see risen to the power of 3?\n");
    scanf("%d",&num);

    power=pow(num,3);

    printf("You got the touch, you got the power!!!!! of 3 ............. %d",power);

    return(0);
}