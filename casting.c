// type conversions, cast operators


#include<stdio.h>

float a,b;


int main() {

    int c = 5;
    float d = 2.2;

    a = c + (int)d; // casting float d as an int

    printf("%f\n",a);


    return(0);
}