// Review on the string functions
// oh jeez


#include<stdio.h>
#include<string.h>

int main(){

    /* review
    strlen() - get length of a string
    strcpy() - copy one string to another
    strcat() - concatenate
    strcmp() - compare one string to another
    strchr() - find a char in a string
    strstr() - Find a substring in a larger string
    strlwr() - Convert to lower
    strupr() - converto to upper
    */


   char *t = "XXX";
   printf("The length of %s is %d\n",t, strlen (t) );

   char str1[100];
   char str2[100];

   strcpy(str1, "The Quick Brown Fox ");            // string copy seems to be a good way to get data in a char arracy
   strcpy(str2,"Jumped over the lazy dog");

   printf("%s\n",strcat(str1,str2));                // concatenate works like a charm

   






    return 0;
}