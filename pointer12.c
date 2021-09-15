// from scratch challenge: write a function that calculates length of a string not using strnlen()

#include<stdio.h>

int stringlength(const char *str) // makes the array read only
{
    int len = 0;
    char *str2;
    str2 = str;

    while(*str) 
    {
    len++;
    *str++;
    }

    printf("The length of the string is %d\n",(int)(str-str2));

    return(len);

}

int main(void){

char string[50] = {"Hi there How are you?"};
char *ptr;

ptr = string;

printf("The length of the String is %d\n",stringlength(ptr));

return 0;
}