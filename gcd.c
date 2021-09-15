// Function Junction 
//

#include<stdio.h>
#include<stdlib.h>

int gcd(int, int); // function decleration, prototype for GCD
float abs_val(float z); //absolute value of a number



int main(void)
{
    int x,y;
    float a=0;

    printf("Enter 2 numbers to to find their greatest common divisor:\n");
    scanf("%d %d",&x, &y);

    printf("GCD of %d and %d equals %d\n",x,y,gcd(x,y));
    
    printf("Enter a number to find its absolute value\n");
    scanf("%f",&a);

    printf("The absolute value of %f is %f\n", a , abs_val(a));

    return 0;
}

// the infamous GCD algo

int gcd(int x, int y)
{
    if (x == 0)
        return y;
    return gcd(y % x,x);
    
}

float abs_val(float n)
{
    return abs(n); //abs function returns an int

}