#include <stdio.h>
int main (){
// Creating a array 
int array[10];
// initializing values to the created array 
printf("Enter the Elements : ");
for (int  i = 0; i <10; i++)
{
    scanf("%d",&array[i]);
}
printf("Your Array is  ");
printf("[ ");
for (int  i = 0; i <10; i++)
{
    printf(" %d",array[i]);
}
printf("]");
// Transverising through the array by first choosing a given target
printf("Enter the element you want to find ");
int target;
scanf("%d",&target);

for (int  i = 0; i < 10; i++)
{
    if (array[i]==target&&i<10)
{
    printf("Your desired number is found at place %d ",i);
    
}


    
}



}