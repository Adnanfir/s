#include <stdio.h>
int main(){
    int size;
    printf("Enter the size ");
    scanf("%d",&size);
    int array[size];
    printf("Enter the Elements ");
    for (int  i = 0; i < size; i++)
    {
        scanf("%d",&array[i]);
    }
        printf("\nDisplaying the Elements:");

     for (int  i = 0; i < size; i++)
    {
        printf(" %d ",array[i]);
    }
            printf("\nDisplaying the Reverse ");

    for (int  i =size; i >0;i--)
    {
        printf(" %d ",array[i]);
    }
    
}