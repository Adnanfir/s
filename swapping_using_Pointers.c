#include <stdio.h>
int swap(int *a, int *b){
    int temp;
    temp=*a;
    *a=*b;
    *b =temp;
    return *a,*b;
    
}
int main (){
int x,y;
printf("Enter the number x and y : ");
scanf("%d  %d", &x , &y);
printf("Number's before swap %d and %d \n", x, y);
swap(&x,&y);
printf("Number's after swap %d and %d", x, y);
}