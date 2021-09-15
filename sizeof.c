// print out sizeof the different data types as stored in the architecture
// need sizeof when you port your code to different systems, size of instruction words change

#include <stdio.h>

int main(){
    printf("int is %d bytes \n",sizeof(short int));
    printf("long int is %d bytes \n",sizeof(long int));
    printf("float is %d bytes \n",sizeof(float));
    printf("double is %d bytes \n",sizeof(double));
    printf("long double is %d bytes \n",sizeof(long double));
    printf("char is %d bytes \n",sizeof(char));


    return(0);
}