#include <stdio.h>
int main(){
    int limit;
    int sum=0;
    int initailization;
    printf("Enter the number you want to start from");
    scanf("%d",&initailization);
    printf("Enter the number you want to end");
    scanf("%d",&limit);
    for (int i = initailization; i <=limit; i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}