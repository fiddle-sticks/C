// taking an array of ints from a user, then taking user supplied int and inserting it in user specfied position in the array


#include<stdio.h>

int main() {

    int i, arr[50],pos,len;
    int newitem;

    printf("Enter number of ints you want in the array\n");
    scanf("%d",&len);

    printf("Enter %d integers for the array, press enter button after each.\n",len);

    for(i=0;i<len;i++)
        scanf("%d",&arr[i]);

    printf("Enter in the number you'd like to insert:\n");
        scanf("%d",&newitem);

    printf("Enter the position in the array for the new number:\n");
        scanf("%d", &pos);

        len++; // add one more slot to the existing array...at the end;
        pos--; // subract one from the desired insert position to account for zero index
        i = len - 1; // i will be the pointer to the current array position during the swap

    while (i >= pos) // setup while loop to counnt backwards and move array members back one slot, until you hit insert position
        {
            arr[i]=arr[i-1]; // the swap
            i--; //decrment i
        }

    arr[pos]=newitem; // insert the new int

    printf("Here is the array after inserting the new int\n");

    for(i=0;i<len;i++)
        printf("%d ",arr[i]);

    return(0);
}