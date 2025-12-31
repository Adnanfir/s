#include <stdio.h>
int f(int x,int dp[],int* count)
{  *count=*count+1;
    if (x==0 || x==1)
    {
        return 1;
    }
    else{
        return x*f(x-1,dp,count);
    }
    if (dp[x]!=-1)
    {
        return dp[x];
    }
    {
       dp[x]=x*f(x-1,dp,count);
       return dp[x];
    }
    x--;
    
}
int main()
{
    int number;
    int count=0;
    printf("Enter the number whose factorial you want to get  ");
    scanf("%d", &number);
    int dp[100];
    for (int  i = 0; i <sizeof(dp)/4; i++)
    {
        dp[i]=-1;
    }
    
    int resutl =f(number,dp,&count);
    printf("Factorial of %d is %d , and the number of times function is called is %d ", number, resutl,count);
}