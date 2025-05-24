#include <stdio.h>
int main(){
int limit;
int initialization;
printf("Enter the initialization");
scanf("%d",&initialization);
printf("Enter the limit");
scanf("%d",&limit);
long int product=1;
for (int  i = initialization; i <=limit; i++)
{
    product=product*i;
}

printf("%ld",product);

}