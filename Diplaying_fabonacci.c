#include <stdio.h>
int main(){
    int count;
    int First;
    int second;
    printf("Enter the first and second number");
    scanf("%d\t%d",&First,&second);
    printf("Enter the limit");
    scanf("%d",&count);
    printf("%d %d\t",First, second);
for (int i = 0; i < count; i++)
{   int temp=second;
    second=second+First;
    First=temp;
    printf("%d \t",second);
}




}