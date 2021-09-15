#include <stdio.h>

int main(){
float area, height, base;

printf("Please enter the height and the base lengths of a Triangle and i will tell you the area.\n");

printf("height:");
scanf("%f", &height);

printf("base:");
scanf("%f", &base);

area = (height * base) / 2;
printf("The area is: %f",area);

return(0);
}