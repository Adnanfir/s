#include <stdio.h>
int main(){
int limit;
printf("Enter the Number");
scanf("%d",&limit);
long int product=1;
for (int  i = limit; i >0; i--)
{
    product=product*i;
}

printf("the factorial of %ld is %ld",limit,product);

}