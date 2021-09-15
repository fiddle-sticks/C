// binary to decimal converter and vice versa  TODO: Add hexidecimal as an option

#include<stdio.h>
#include<math.h>

int BTD(int n); //delcaring function binary to decimal
int DTB(int n); // declaring function decimal to binary

int main()
{
    int n;
    char c;

    printf("This is a hand binary to decimal and decimal to binary converter thingy. Press 'd' for decimal to binary conversion and 'b' for binary to decimal.\n");
    scanf(" %c",&c);

    if(c == 'b')
        {
            printf("Enter a binary number:\n");
            scanf("%d",&n);
            printf("%d in binary equals %d in decimal",n,BTD(n));
        }

    if(c == 'd')
        {
            printf("Enter a decimal number:\n");
            scanf("%d",&n);
            printf("%d in binary equals %d in decimal",n,BTD(n));
        }

    return(0);
}

int DTB(int n) // fucntion to convert d to b
{
    int rem , i = 1 , binary = 0;

    while(n!=0)
    {
        rem = n % 2; // working right to left, mod the number by 2 to get the ones column for binary
        n /= 2; // divide number by 2 
        binary += rem * i; //add remainder each time multplying i by 10 to move to tens, hundreds, etc
        i *= 10; //power of 10
    }
    return binary;

}

int BTD(int n) // function to convert b to d
{
    int decimal = 0, i = 0, rem;
    while(n!=0)
    {
        rem = n % 10;
        n /= 10;
        decimal += rem * pow(2,i); // wtf does this do?
        ++i;
    }
    return decimal;

}