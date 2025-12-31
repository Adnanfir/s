#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node* Next;

};
void Creating_LL(struct node *start,int count){
for (int  i = 0; i < count; i++)
{
    int data;
struct node* start1=start;
printf("ENter the data");
scanf("%d",&data);
struct node *newnode1=(struct node*)malloc(sizeof(struct node));
start->Next=newnode1;
start=newnode1;
newnode1->data=data;
newnode1->Next=start1;
}

}
void Displaying_ll(struct node *start,int count){
   for (int i = 0; i <= count; i++)
   {
   if (start!=NULL)
    {
        printf("%d",start->data);
        start=start->Next;
    }
   }
   
    
}
int main(){
struct node* start;
int data;
printf("Enter the data");
scanf("%d",&data);
struct node *newnode=(struct node*)malloc(sizeof(struct node));
start=newnode;
newnode->data=data;
int count;
printf("Enter the number of Nodes you want to create");
scanf("%d",&count);
Creating_LL(start,count);

Displaying_ll(start,count);





}




