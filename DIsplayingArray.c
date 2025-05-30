#include <stdio.h>
int main(){
int array[]={10,20,30,40,50};// Declare and initialize an integer array

int n=sizeof(array)/4;//calculate the number of elements
printf(" %d ",n);
printf("Array elements are : ");
for (int  i = 0; i <n; i++)
{
    printf(" %d\t",array[i]); // Printing array elements
}


}