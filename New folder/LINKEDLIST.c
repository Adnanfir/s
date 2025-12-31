#include <stdio.h>
#include <stdlib.h>
struct NODE
{
    int data;
    struct NODE* next;

};

void Create(struct NODE *start,struct NODE *newnode){
    start=newnode;
 struct NODE *temp=start;
    int size;
printf("Enter the size of linked list you want to enter");
scanf("%d",&size);
printf("Enter the data in the first Node ");
scanf("%d",&(newnode->data));
newnode->next=NULL;
for (int  i = 1; i < size; i++)
{   
    struct NODE *newnode1;
    newnode1=(struct NODE*)malloc(sizeof(struct NODE));
    printf("Enter the data");
    scanf("%d",&(newnode1->data));
    newnode1->next=NULL;
    temp->next=newnode1;
    temp=temp->next;
}

}
void addition(struct NODE *temp){
int position;
struct NODE *newnode=(struct NODE*)malloc(sizeof(struct NODE));
printf("Enter the position where u want to insert new number");
scanf("%d",position);
   for (int  i = 1; i <position ; i++)
   {
    newnode=temp->next;
    temp->next=newnode;
   }
   printf("Enter the data you want to insert ");
   scanf("%d",&newnode->data);




}
void deletion(struct NODE *temp){
int position;
struct NODE *temp1;
printf("Enter the position where u want to delete a number");
scanf("%d",position);
   for (int  i = 1; i <position ; i++)
   {
    temp1=temp->next;
    temp->next=temp1;
   }
   printf("Enter the data you want to insert ");
   scanf("%d",&temp1->data);




}
void Display(struct NODE *temp){
while (temp->next!=NULL)
{
    printf("%d->",temp->data);
    temp=temp->next;
}
if (temp->next==NULL)
{
     printf("NULL");
}




}

int main (){

struct NODE *start;
struct NODE *newnode;
newnode=(struct NODE*)malloc(sizeof(struct NODE));
start=newnode;
printf("Welcome to linkedlist Hope u liked the linked coffe , follow me on likedIn \n");
printf("Enter the action you want to proceed with 1. creation of Linked list 2.Displaying Your linkedlist 3.Addition of newnode \n");
int x;
scanf("%d",&x);
switch (x)
{

case 1:
    
Create(start,newnode);
    break;

case 2:
    
Display(start);
    break;
case 3:
    
addition(start);
    break;    
default:
    break;
}





}