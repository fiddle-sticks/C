// MORE string action!

#include<string.h>
#include<stdio.h>


int main(void){

    char text[] = "Thanos is a big bully!";
    char word[] = "big";

    char *pFound = NULL;
    pFound = strstr(text,word); // substring search

    printf("%s\n",pFound);

    //strtok function which is used to tokenize a string, kind of like text to columns

    char csv[100] = "Iron man,Thanos,Captain America,Hulk,Thor,Spymaster";
    const char s[2] = ",";
    char *token;

    //get the first token
    token = strtok(csv,s);

    //walk through others using while loop

    while(token != NULL) {
        printf("%s\n",token );

        token = strtok(NULL,s);
    }


    return 0;
}