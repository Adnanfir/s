#include <stdio.h>
int main(){
int array[10];
int sum=0;
printf("Enter the array");
for (int  i = 0; i < 10; i++)
{
    scanf("%d",&array[i]);

} printf("[");
for (int  i = 0; i < 10; i++)
{
    printf(" %d ",array[i]);

}
printf("]");
for (int  i = 0; i < 10; i++)
{
    sum=sum+array[i];
}
printf("The sum of your array is %d",sum);





}