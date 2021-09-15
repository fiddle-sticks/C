// i cant get enough pointer action


#include<stdio.h>

int main(){

    long num1 = 0L;
    long num2 = 0L;
    long *pnum = NULL;

    pnum = &num1;
    *pnum = 2L;
    ++num2;
    num2 += *pnum;

    pnum = &num2;
    ++*pnum;

    printf("2L = %ld 4L = %ld 4L = %ld 8L = %ld\n", num1, num2, *pnum, *pnum+num2);



    return 0;
}