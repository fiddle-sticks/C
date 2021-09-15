// logical operators

#include<stdio.h>

int main(){

    _Bool a = 1;
    _Bool b = 0;
    _Bool result;

    result = a && b;
    printf("a and b is %d\n", result);

    result = a || b;
    printf("a OR b is %d\n", result);

    return(0);
}