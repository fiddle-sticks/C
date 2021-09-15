// Introduction to Unions, like structres but less memory becuase you can only have one element at a time

#include<stdio.h>

union car {
    int i_value;
    float f_value;
    char c_val[40];
};

int main()
{
    union car car1, car2, *car3;
    printf("mem size occupied by car is: %zu\n",sizeof(car1));


    return 0;
}

