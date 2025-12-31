#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *Next;
    struct node *previous;
};
struct node *end;
void Creation_of_Dubbly(struct node *start, int count)
{
    for (int i = 0; i < count; i++)
    {
        struct node *newnode = (struct node *)malloc(sizeof(struct node));
        start->Next = newnode;
        newnode->previous = start;
        newnode->Next = NULL;
        start = newnode;
        printf("Enter the data to be to insterted  ");
        scanf("%d", &newnode->data);
        end = newnode;
    }
}
void Displaying_of_Dubbly(struct node *start)
{
    do
    {
        printf(" %d ", start->data);
        start = start->Next;
    } while (start != NULL);
}

void Displaying_of_Dubbly_reverse(struct node *start)
{
    do
    {
        printf(" %d ", start->data);
        start = start->previous;
    }
    while (start!= NULL);
}

int main()
{
    struct node *start;
    struct node *Newnode = (struct node *)malloc(sizeof(struct node));
    start = Newnode;
    Newnode->previous = NULL;
    printf("Enter the data for first node ");
    scanf("%d", &Newnode->data);
    int count;
    printf("Enter the counter ");
    scanf("%d", &count);
    Creation_of_Dubbly(start, count);
    Displaying_of_Dubbly(start);
    printf("Now printing backward");
    Displaying_of_Dubbly_reverse(end);
}