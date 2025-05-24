#include <stdio.h>
int main(){
int a,b,c;
printf("Enter three numberes ");
scanf("%d %d %d",&a ,&b, &c);
if (a>b)
{
    if (a>c)
    {
        printf("A is the greatest");
    }
}
else if (b>c)
{
    if (b>a)
    {
        printf("b is the greatest");
    }
    
}
else if (c>a){

if (c>b)
{
    printf("C is the greatest");
}


}


}