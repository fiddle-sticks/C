//print multiplication tables for a user specificed number

#include <stdio.h>

int main(void) {

    int user_num, mult=1, prod;

    printf("Please enter a number and I'll print the multiplication table up to 20.\n");
    scanf("%d",&user_num);

    while(mult<21)
    {
        prod = mult * user_num;
        printf("%d * %d = %d\n",user_num,mult, prod);
        mult++;
    }

    return (0);
}