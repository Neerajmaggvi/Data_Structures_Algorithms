#include<stdio.h>
#include<stdlib.h>

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
            return 1;
        }

        printf("Enter the data for %d node: ", i + 1);
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

    // Print the linked list
    temp = head;

    while(temp != NULL)
    {
        printf("%d -> ", temp -> data);
        temp = temp -> link;
    }

    printf("NULL\n");

    return 0;
}