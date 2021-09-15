// reading from a file and writing it to the screen

#include<stdio.h>

int main(){
    FILE *fp;           //declare file pointer
    char str[100];      //allocate string for transition from file to stdout

    //open file for reading
    fp = fopen("myfile.txt", "r"); //open file for read only

    if(fp == NULL){
        perror("Error opening file");
        return(-1); //send error mesage to screen
    }

    if(fgets(str, 100, fp)!=NULL) //if
    {
        printf("%s",str); // write contents of text file to the screen
    }

    fclose(fp);     //close file
    fp=NULL;        // clear file pointer  
    return 0;
}