// creates a linked list, adds nodes, searches, then deletes nodes


#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct struct_daddy // hold an int value and a poitner to the next member in the list

{
    int num;
    struct struct_daddy *next;
};

struct struct_daddy *head = NULL; // intialize head node pointing to NULL
struct struct_daddy *curr = NULL; // intialize current node pointing to NULL

// create list for the first time, taking the value of the head node as a parameter, called from the append function in case its the first time
//
//
//
//

struct struct_daddy* create_list(int num) 
{
    printf("\n creating list with headnode as [%d]\n",num);
    struct struct_daddy *ptr = (struct struct_daddy*) malloc (sizeof(struct struct_daddy)); //allocate memory

    if(NULL == ptr)
    {
        printf("\n Node creation failed \n");
        return NULL;
    }

    ptr->num = num;
    ptr->next = NULL;

    head = curr = ptr; // head node is current node which is ptr node
    return ptr;  // return location of current node which is also the head node
}


// function to append the list
struct struct_daddy* append_list(int num, bool append_list)
{
    if(NULL == head) //if the head node is still NULL means we havent setup the list yet
    {
        return (create_list(num)); // call the create list function
    }

    if(append_list)
        printf("\n Adding node to end of list with the value [%d]\n",num);
    else
        printf("\n Adding node to beginning of list with value of [%d]\n",num);

    struct struct_daddy *ptr = (struct struct_daddy*)malloc(sizeof(struct struct_daddy)); //allocate memory for new list member

    if(NULL == ptr) 
    {
        printf("\n Node creation failed \n");
        return NULL; //return NULL and exit function if unable to create new list member
    }

    ptr -> num = num;
    ptr -> next = NULL;


    if(append_list)
    {
        curr -> next = ptr;
        curr = ptr;
    }
    else
    {
        ptr -> next = head;
        head = ptr;
    }

    return ptr;
}


// function to search the list, parameters include value to search and a pointer to a pointer to previous list member??
struct struct_daddy* search_list(int num, struct struct_daddy **prev)
{
    struct struct_daddy *ptr = head; // set locale current var ptr to point to head
    struct struct_daddy *tmp = NULL; // ???? not sure what this does
    bool found = false;  // set this to false until we find a match

    printf("Searching the list for value [%d] \n", num);

    while (ptr != NULL)
    {
        if(ptr->num == num)
            {
                found = true;
                break;
            }
            else
            {
                tmp = ptr;
                ptr = ptr->next;
            }
    }

    if(true == found)
    {
        if(prev)
            *prev = tmp;
        return ptr;
    }
    else
    {
        return NULL;
    }
}

int delete_from_list(int num)
{
    struct struct_daddy *prev = NULL;
    struct struct_daddy *del = NULL;

    printf("\n Deleting value [%d] from the list\n", num);

    del = search_list(num,&prev);

    if(del == NULL)
    {
        return -1;
    }
    else
    {
        if(prev != NULL)
            prev->next = del->next;

        if(del == curr)
            {
                curr = prev;
            }
        else if(del == head) // if we are deleting the head then...
            {
                head = del -> next;  // make the next list member the new head
            }
    }

    free(del);
    del = NULL;

    return 0;
}

void print_list(void){
    struct struct_daddy *ptr = head;

    printf("\n-------------- Printing List Start-------------\n");

    while (ptr != NULL)
    {
        printf("\n [%d] \n",ptr->num);
        ptr = ptr -> next;
    }
    printf("\n-------------- Printing List Finish-------------\n");

    return;

}

// Main function to call the subroutines

int main (void){
    int i = 0, ret = 0;                 // counter variables
    struct struct_daddy *ptr = NULL;    //set current list member to NULL????

    print_list();                       //print empty list

    for(i=5; i<10; i++)
        append_list(i,true);            //for values 5,6,7,8,9 call append list and add those values, whats the true do?

    print_list();                       // print new list

    for(i=4; i>0; i--)
        append_list(i,false);           // call append list again, whats the bool do?

    print_list();

    for(i = 1; i < 10; i += 4)
    {
        ptr = search_list(i,NULL);

        if(NULL == ptr)
        {
            printf("\nSearch for [num = %d] failed no element found\n", ptr->num);
        }
        else
        {
            printf("\n Booyah we found that shit, num = %d is in the list\n", ptr->num);
        }

        print_list();

        ret == delete_from_list(i);

        if(ret != 0)
        {
            printf("\n Delete failed, no [num = %d] found\n",i); // why i here?
        }
        else{
            printf("\n Delete action success, [num = %d] is now gone!\n",i); //i here again
        }
        print_list();

    }

    return 0;
}

