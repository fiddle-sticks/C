// scope examples, inner, outer, file, all that shit....

#include<stdio.h>

void f(int i) {

    int j = 1,i = 1;

    for (int i; i < 2; i++)
         {
            int j = 2;
            printf("j should be 2 here.... survery says? %d\n",j); // should print j is 2, INNER J
         }
        printf("j should be 1 here .... survey says? %d\n",j); // should print j is 1, OUTER J
        }

int main(void){
    
    int j = 69, i = 1;

    printf("j should be 69 here .... survey says? %d\n", j); // should be 69 here, FILE J

    f(i);

    return(0);
}
