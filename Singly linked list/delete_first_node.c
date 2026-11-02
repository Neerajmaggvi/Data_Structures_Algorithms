#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node * link;
}Slist;

int main()
{
    Slist **head = NULL;

    Slist *Node1 = malloc(sizeof(Slist));
    printf("Enter the data for node 1: ");
    scanf("%d",&Node1 -> data);

    Slist *Node2 = malloc(sizeof(Slist));
    printf("Enter the data for node 2: ");
    scanf("%d", &Node2 -> data);

    *head = Node1;

    if(*head == NULL)
    {
        return 0;
    }
    else
    {
        Slist *temp = *head;
        *head = temp -> link;
        free(temp);
    }

    Slist *temp = *head;
    while(temp -> link != NULL)
    {
        printf("Node1 -> %d ", temp -> data);
        temp = temp -> link;
    }

    return 0;
}