// find the greatest of 3 numbers input by the user

#include<stdio.h>

int main(){
    double num1,num2,num3,high_num;

    printf("enter in 3 numbers:");
    scanf("%lf %lf %lf", &num1, &num2, &num3);

    if(num1 > num2)
        high_num = num1;
        else high_num = num2;

      if(num3 > high_num)
        printf("%lf is the high number",num3);
        else printf("%.0lf is the high number",high_num);

    return(0);
}