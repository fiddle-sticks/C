// ENUMS

#include<stdio.h>

enum company{GOOGLE,FACEBOOK = 1, XEROX = 2, YAHOO = 3, EBAY = 4, MSFT = 6};

int main(void)
{


int num;
char str[10];
enum company var1 = GOOGLE;
enum company var2 = MSFT;


printf("GOOGLE IS %d\n",var1);
printf("MSFT IS %d",var2);



return 0;
}