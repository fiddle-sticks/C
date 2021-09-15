// program to count digits, letters, and puncuation from a user supplied string

#include<string.h>
#include<stdio.h>


int main(){

    char buf[100];
    int nLetters = 0;
    int nDigits = 0;
    int nPunct = 0;

    printf("Enter a string of characters\n");
    scanf("%s",buf); //read into buffer string

    int i = 0;
    while(buf[i])
    {
    if(isalpha(buf[i]))
        ++nLetters;
    if(isdigit(buf[i]))
        ++nDigits;
    if(ispunct(buf[i]))
        ++nPunct;
        ++i;
    }


    printf("Your string contained %d letters, %d numbers, and %d punctuations\n",nLetters,nDigits,nPunct);



    return 0;
}