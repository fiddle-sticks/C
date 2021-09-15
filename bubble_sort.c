// BUBBLE SORT IN THE HOUSE


#include <stdio.h>

void bubble_sort(long[],long);  // declaring the function, is this necessary? yes i see why now....

int main()
{
    long array[100],n,c,d,swap;

    printf("Enter a number of elements\n");
    scanf("%ld",&n);

    printf("Enter %ld integers\n",n);

    for(c = 0;c < n ; c++)
        scanf("%ld",&array[c]);

    bubble_sort(array,n); // call sorting function, passing the array and total number of elements

    printf("The now sorted array in ascending order. you're welcome\n\n");

    for(c = 0; c < n; c++)
        printf("%ld ",array[c]);



    return(0);
    }


    void bubble_sort(long list[],long n)
    {
        long c,d,t; //declaring variables for bubble sort

        for(c = 0 ; c < n-1 ; c++) //starting at index zero, move through array 
            {
            for(d = 0; d < n - c - 1; d++) // examines everthing after our c position
                {
                    if(list[d] > list[d+1]) // if the number to the right is larger, swap them. 
                        {
                        t = list[d];
                        list[d] = list[d+1];
                        list[d+1]= t;
                        }
                }
            }

    
    }






