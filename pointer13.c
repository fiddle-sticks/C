//pointer arithmetic

#include<stdio.h>

int main() {
    int aiData[3] = {100,200,300};

    void *pvData = &aiData[1];

    pvData += sizeof(int);

    printf("%d", *(int *)pvData);

}