// introduction to file I O

#include<stdio.h>

int main()
{
        FILE *pfile = NULL;

        char *filename = "myfile.txt";
        pfile = fopen(filename,"w"); //open myfile.txt to write to it

        if(pfile!=NULL)
            printf("failed to open %s\n",filename);

    return 0;
}