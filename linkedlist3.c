// Linked List from Udemy Course

#include<stdio.h>
#include<stdlib.h>

typedef struct node {
    char data;
    struct node * nextPtr;
} node_t;

typedef node_t *ListNodePtr;  //rename pointer

//function prototypes
void insert(ListNodePtr *head, char value);     // insert proto
void insertAtEnd( ListNodePtr *head, char value);   
void insertAtBeginning(ListNodePtr *head, char value);
char delete(ListNodePtr *head, char value );
void deleteAtBeginning(ListNodePtr *head);
int isEmpty(ListNodePtr head);                  //to see if head is NULL
void printList(ListNodePtr currentPtr );    

int main (void) {

    ListNodePtr head = NULL;  //no nodes on start up
    int choice;               //for user menu
    char item = '\0';         // user entered char

    //user menu
    printf("Enter your choice:")            // not enough time to type this crap all in, come back later : AUG 26 2021


    




    return 0;
}