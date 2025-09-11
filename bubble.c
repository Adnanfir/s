#include <stdio.h>
int main (){
int array [5];
//Initializing values in a array
printf("Enter your array");
for (int  i = 0; i < 5; i++)
{
    scanf("%d",&array[i]);
}
printf("This is your Entered array : ");
printf("[");
for (int  i = 0; i < 5; i++)
{
    printf( " %d ",array[i]);
}
printf("]");

for (int  i = 0; i <10; i++)
{ 
    for (int p = 0; p < 5; p++)
    {     
  if (array[p]>array[p+1])
  {
    int temp;
    temp=array[p];
    array[p]=array[p+1];
    array[p+1]=temp;
  
  }
  else
  {
    continue;
  }
  
    }
 
}
printf("The sorted array is :");
printf("[");
for (int  i = 0; i <5; i++)
{
    printf(" %d ",array[i]);
}
printf("]");




}