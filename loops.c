// loops 


#include<stdio.h>



int main(){

    int x,y;

    for(x = 100 ; x > 0 ; x--)
        {
            if((x % 10) == 0) // if bottles of beer is a multiple of 10 then skip iteration
                continue;
            y = x - 1;
            printf("%d bottles of beer on the wall, %d bottles of beer, take one down pass it around, %d bottles of beer on the wall\n",x,x,y);
        }
        
    return(0);
}


//nested loop

