/*
FIND and print THE AREA AND PERIMITER OF A RECTANGLE....YAY
*/

#include<stdio.h>

double find_area (float length, float width);
double find_perimeter (float length, float width);


int main(void) {

    double length, width, area, perimeter;

    printf("This program will return the area and perimeter of a recatangle with its given dimensions.\n");
    printf("Please enter the length.\n");
    scanf("%lf",&length);
    printf("Please enter the height.\n");
    scanf("%lf",&width);

    area = find_area(length,width);
    perimeter = find_perimeter(length,width);

    printf("The area of the rectangle is %.1lf, the perimeter is %.1lf\n", area, perimeter);

    return (0);

}


double find_area (float length, float width)
{
    double x;
    x = length * width;
    return x;
}

double find_perimeter (float length, float width)
{
    double x;
    x = (2 * length) + ( 2 * width);
    return x;
}

