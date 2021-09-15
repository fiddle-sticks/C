//Find area and circumference of a circle
//Circumference = 2 * pi * r
//Area of circle = Pi * r * r

#include <stdio.h>
int main(){
    int rad;
    double PI = 3.14,area,cir;

    printf("Enter a radius of a circle: ");
    scanf("%d", &rad);

    area = PI * rad * rad;
    printf("\nArea of a circle: %f",area);

    cir = 2 * PI * rad;
    printf("\nCircum of a circle: %f",cir);

    return(0);
}

