#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
#include<assert.h>
#include"common.h"

int main(int argc, char*argv[])
{
    if (argc != 2)
    {
        fprintf(stderr, "usage: cpu <string>\n");
        exit(1);
    }

    char *str = argv[1]; // let char pointer str point to second character in command line
    while(1)
    {
        Spin(1);
        printf("%s \n", str); //print second char every second foreever

    }
    return 0;
}