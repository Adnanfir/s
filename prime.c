#include <stdio.h>
#include <stdbool.h>
int main(){
    int i;
    int target;
    printf("Enter the Target Value : ");
    scanf("%d",&target);
    int p=0;
bool isprime=true;
for (  i = 2; i <target; i++)
{
    if ((target%i)==0)
    {
        isprime=false;
        p++;
        
    }
    
    
}
if (isprime==true)
{
    printf("The number is prime\n");
}
else
{
    printf("the number is Non-prime\n");
}
printf("Total number  of divisors for the Number %d ",p);



}