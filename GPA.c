// taking the number of classes and grades for each to get an average for the user

#include<stdio.h>

int main(void) {
    int num_classes;
    float array[10], GPA = 0 , sum = 0;

    printf("How many classes have taken?");
    scanf("%d",&num_classes);
    
    printf("Enter grades for each class\n");
    //put the grades from the user into an array, and add up grades while doing so
    for(int x = 0; x < num_classes;x++)
    { 
        scanf("%f",&array[x]);
        sum = sum + array[x];
     }

    GPA = sum / num_classes;

    printf("Your GPA is %.1f\n",GPA);

    return(0);
}