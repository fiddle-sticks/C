// print ascii value of a char

#include <stdio.h>


void main(){
    char a;
    int b;
    printf("Enter a character: ");
    scanf("%c",&a);
    b=a;
    printf("\nThe ASCII character for %c is %d",a,b);
}