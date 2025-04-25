#include <stdio.h>
int main(){
int a =10,b=5,c;
int *Ptr=&a;
// Arithmetic Opeators
printf("Arithmetic Operators\n");
printf("a+b=%d\n",a+b);
printf("a-b=%d\n",a-b);
printf("a*b=%d\n",a*b);
printf("a/b=%d\n",a/b);
printf("A%%bb=%d\n",a%b);
// Releation Operators
printf("Relational Operators\n");
printf("a==b:%d\n",a==b);
printf("a!=b:%d\n",a!=b);
printf("a>b:%d\n",a>b);
printf("a<b:%d\n",a<b);
printf("a>=b:%d\n",a>=b);
printf("<=b:%d\n",a<=b);
// Logical Operators
printf("Logical Operators\n");
printf("a>0&&b>0:%d\n",(a>0&&b>0));
printf("a>-||b<0:%d",(a>0||b<0));
printf("!(a==b):%d\n\n",!(a==b));
// Bitwise Operators
printf("Bitwise Operators\n");
printf("a&b:%d\n",a&b);
printf("a|b:%d\n",a|b);
printf("a^b:%d\n",a^b);
printf("~a:%d\n",~a);



}