// Arrays

#include<stdio.h>

int array[10] ={1,2,3,4,5,6,7,8,9,10};  //intializing the array
int count = 10;

int matrix [5][5]; // 2D array

int main(){

    for(int x = 0; x < count ; x++)
        {    
        printf("%d \n", array[x]);
        array[x+1] = array[x]+100;
        }

    return(0);
}