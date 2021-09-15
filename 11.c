// checking to see if its a vowel

#include<stdio.h>

int main (void){

    char letter;

    printf("Enter the letter you'd like to check for vowel status\n");
    scanf("%c",&letter);

    if(letter=='a'||letter=='e'||letter=='i'||letter=='o'||letter=='u'||letter=='A'||letter=='E'||letter=='I'||letter=='O'||letter=='U')
        {printf("This letter is a vowel\n");}
    else printf ("This aint no vowel\n");
    return(0);
}