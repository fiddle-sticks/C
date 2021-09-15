// pointers and arrays, need to learn for ptr arithmetic
// ar[i] is the same as *(ar+i)

#include<stdio.h>

int arraySum (int array[],const int n)
{
    int sum = 0, *ptr;
    int *const arrayEnd = array + n;

    for(ptr = array ; ptr < arrayEnd; ++ptr) // ptr = array is same as ptr = &array[0]
        sum += *ptr;

    
    return sum;
}


int main(void){

 int arraySum (int array[],const int n);
 int values[10] = {10,20,30,40,50,60,70,80,90,100};

printf("The sum is %i\n",arraySum(values,10));


return 0;
}