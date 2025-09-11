#include <stdio.h>
int main(){
    int arr[100],n;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the Elements : ");
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        printf("%d\t",arr[i]);
    }
    
    
}