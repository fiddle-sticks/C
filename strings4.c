// Case Conversion tool, searching for substring ignoring case

#include<string.h>
#include<stdio.h>


int main () {
    char text[100];
    char substring[40];
    int i=0;

    printf("Enter the string to be searched.\n");
    scanf("%s",text);

    printf("Enter the substring.\n");
    scanf("%s",substring);

    //convert both strings to upper to search 

    for(i = 0 ; (text[i] = (char) toupper(text[i])) != '\0'; ++i);

    for(i = 0 ; (substring[i] = (char) toupper(substring[i])) != '\0'; ++i);

    printf("The Second string %s found in the first.\n",((strstr(text,substring) == NULL) ?"was not" :"was")); // assingment state if string was found



    return 0;
}