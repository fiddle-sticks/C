#include <stdio.h>

int main(){
    char first_name[20],mid_name[20],last_name[20];

    printf("enter your full name.... first middle and last \n");

    scanf("%s %s %s",&first_name,&mid_name,&last_name);

    printf("Your short name goes like: ");
    printf("%c. %c. %s",first_name[0],mid_name[0],last_name);
    return (0);

}