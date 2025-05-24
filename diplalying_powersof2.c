#include <stdio.h>
int main(){
int number=1;
int result=1;
printf("Enter the desired Exponent");
scanf("%d",&number);
int power;
printf("Enter the desired Power");
scanf("%d",&power);
for (int  i = 1; i <=power; i++)
{
    result=result*number;
    printf("%d\t",result);
}




}