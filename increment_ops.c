// placement of increment operators


#include<stdio.h>


int main(){

    int a = 3;
    int b = 3;

    printf("a equals %d\n",a++); // prints value of a before increment, then adds 1
    printf("%d\n",a);

    printf("b equals %d\n", ++b); //adds 1 to b before line of code is executed
    
    return(0);
}