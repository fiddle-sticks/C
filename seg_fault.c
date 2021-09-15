// segmentation faults

#include<stdio.h>

int main() {
    int n = 2;
    scanf("%d", n);
    printf(" Value of N %d \n", n);
    printf("Address of N %d \n",&n);
    return 0;
}