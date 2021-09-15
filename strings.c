// string fun, counts the number of characters in a string

#include<stdio.h>
#include<string.h>



int main(void)
{

    char str1[]="To cheese or not to cheese";
    char str2[] = ", that is the queso";
    char s[] = "Hello boys how you doing?";
    char t[50];

    unsigned int count = 0;     //string length

    while(str1[count] != '\0')   //increment until we reach terminating character
    ++count;

    printf("The length of the string \"%s\" is %d characters.\n",str1,count);
    count = 0;

    while(str2[count] != '\0')   //increment until we reach terminating character
    ++count;

    printf("The length of the string \"%s\" is %d characters.\n",str2,count);

    printf("THe length of string 3 is: %d\n\n", strlen(s));

    strncpy(t,s,sizeof(t)-1);  //strncpy copies one string to another, argument is sizeof the destination string

    printf("the string is %s",t);

    printf(" A wise man once said, %s\n",strcat(str1,str2));  // concatenate two strings, but use strncat instead to prevent BO

}