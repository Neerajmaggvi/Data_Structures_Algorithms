#include<stdio.h>
#include<stdlib.h>
#include"SLL.h"

typedef struct node
{
    int data;
    struct node * link;
}Slist;

int main()
{
    Slist *head = NULL;
    Slist *new = NULL;
    Slist *temp = NULL;

    int n; 

    printf("Enter the number of nodes: ");
    scanf("%d",&n);

    for(int i = 0; i < n; i++)
    {
        new = malloc(sizeof(Slist));

        if(new == NULL)
        {
            printf("Memory not allocated\n");
            return FAILURE;
        }

        printf("Enter the data for %d node: ", i+ 1);
        scanf("%d",&new -> data);

        new -> link = NULL;

        if(head == NULL)
        {
            head = new;
            temp = new;
        }
        else
        {
            temp -> link = new;
            temp = new;
        }
    }

    printf("Before deleting the first node: ");
    
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> link;
    }

    printf("NULL\n");

    printf("After deleting the first node: ");

    temp = head;
    head = temp -> link;
    free(temp);

    Slist *print = head;

    while(print != NULL)
    {
        printf("%d -> ", print -> data);
        print = print -> link;
    }

    printf("NULL");


    // Free all remaining nodes
    while(head != NULL)
    {
        temp = head;
        head = head->link;
        free(temp);
    }

    return SUCCESS;
}