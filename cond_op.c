// conditional operator ? :



#include<stdio.h>


int main(){

    int x,y;


    printf("Please enter your last golf score.\n");
    scanf("%d",&y);

    x = y > 72 ? 1 : 0; // if score(y) is greater than 72 then assign 1 to x else make it a 0.

    printf("%d",x);

    return(0);
}