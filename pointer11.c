// copy string function

#include<stdio.h>

void copystring (char *to, char *from)
{
    while(*from) // once from array his null character it will jump out, Null interpreted as a zero
    *to++ = *from++;

    *to = '\0'; // add null char at end of string
}

int main (void)
{
    char string1[] = "Avengers Assemble!";
    char string2[50];

    copystring(string2,string1);
    printf("%s\n",string2);
}
