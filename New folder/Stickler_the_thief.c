#include <stdio.h>
#define SIZE 19
int main(){

int arr[SIZE] = {2,3,4,2,7,8,9,54,3,4,3,56,3,235,6,64,3,9,0};
int loot=0;
if (arr[0]>arr[1])
{
    for (int  i = 0; i <SIZE-1; i=i+2)
{
    if (arr[i]>arr[i+1])
    {
        loot=loot+arr[i];
    }
    else{
        loot=loot+arr[i+1];
    }
    
}
}
else{
   for (int  i = 1; i < SIZE-1; i=i+2)
{
    if (arr[i]>arr[i+1])
    {
        loot=loot+arr[i];
    }
    else{
        loot=loot+arr[i+1];
    }
    
}
}

printf("%d",loot);
return 0;

}