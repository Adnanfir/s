#include <stdio.h>
int main(){
    int i;
    int target;
    printf("Enter the Target Value : ");
    scanf("%d",&target);

for (  i = 2; i <target; i++)
{
    if ((target%i)==0)
    {
        printf("The Number is a %d Consonant",target);
        break;
    }
    else
    {
        printf("The Number %d is a prime",target);
        break;
    }
    
    
}




}