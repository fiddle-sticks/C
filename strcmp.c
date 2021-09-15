// compare two strings inputted by the user ... yay


#include<string.h>
#include<stdio.h>

int main(){

    char s1[100], s2[100];

    printf("Enter the first string\n");
    gets(s1);

    printf("Enter the second string\n");
    gets(s2);

    if(strcmp(s1,s2) == 0)
        printf("The strings are identical\n");
    else
        printf("They are not the same\n");

    return(0);
}