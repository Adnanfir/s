#include <stdio.h>
#include <math.h>
int main(){
int a,x,b,c,x1,x2;
// printf("Enter the standard Quadratic Equation");
// scanf("%d",Quadratic_Equation);
printf("Enter the values of varaible and constants");
scanf("%d",&a);
printf("Enter the values of varaible and constants");
scanf("%d",&b);
printf("Enter the values of varaible and constants");
scanf("%d",&c);
printf("%d^x2 +%dx+%d\n",a,b,c);
int d=b*b-4*a*c;
if (d>0)
{
    printf("Real and unequal roots\n");
     x1=(-b+sqrt(b*b-4*a*c))/2*a;
     x2=(-b-sqrt(b*b-4*a*c))/2*a;
    printf("x1=%d and x2=%d\n",x1,x2);
}
else if (d==0)
{
    printf("Real and equal roots\n");
     x1=(-b)/2*a;
     x2=(-b)/2*a;
    printf("x1=%d and x2=%d\n",x1,x2);
}
else 
{   printf("imaginary and unequal roots\n");
    x1=(-b+sqrt(-b*b+4*a*c))/2*a;
    x2=(-b-sqrt(-b*b+4*a*c))/2*a;
   printf("x1=%d*i and x2=%d*i\n",x1,x2);
    
}
}