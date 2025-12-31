#include <stdio.h>
int g(int x);
int f(int x){
if (x<=0)
{
  return 1;
}
else{
    return g(x-1)*f(x-2);
}



}
int g(int x){
if (x<=0)
{ return 3;
}
else{
    return f(x-2)*g(x-3);
}



}
int main(){

int x;
scanf("%d",&x);
f(x);
printf("Value of f is %d\n",f(x));


}