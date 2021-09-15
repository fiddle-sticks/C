// bitwise operations

#include<stdio.h>

int main(){

    long int a = 5;         // 0000 0101
    long int b = 10;        // 0000 1010
    long int c = 0;
    long int d = 255;       // 1111 1111
    
    a <<= 8;
    printf("a shifted 8 to the left is %d\n",a);

    a >>= 4;
    printf("a shifted 4 to the RIGHT is %d\n",a);

    c = (a & b);
    printf("a bitwise AND b = %d\n",c); // bitwise AND of a and b

    c = (a | b);
    printf("a bitwise OR b = %d\n",c); // bitwise OR of a and b

    c = (a ^ b);
    printf("a bitwise XOR b = %d\n",c); // bitwise XOR of a and b

    c = ~a+1;
    printf("2s complement, makes signed ints go negative = %d\n",c); // 2s complement of a

    c = (d ^ (a | b));
    printf("this should print %d - %d  ...... %d\n",d,c,a); // bitwise AND of a and b

    return 0;
}