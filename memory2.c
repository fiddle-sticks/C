// take a string and the string length from a user, store it in a char pointer, print string, free memory

#include<string.h>
#include<stdlib.h>
#include<stdio.h>

int main(){

    char *string = NULL;
    int size = 0;

    printf("How big is your string?\n");
    scanf("%d",&size);

    string = (char*) malloc(size * sizeof(char));

    if(string != NULL)
    {
        printf("Enter a string ya dingus!\n");
        scanf(" ");  // find out what this does
        gets(string);
        printf("The string you entered is: %s\n",string);
        free(string);
    }
return 0;
}