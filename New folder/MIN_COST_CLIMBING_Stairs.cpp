#include <iostream>
using namespace std;
#define SIZE 4
int Min_cost(int *arr, int idx)
{

    if (idx > SIZE - 1)
    {
        return 0;
    }
    else
    {
        if (arr[idx] < arr[idx + 1] && idx <= SIZE - 1)
        {
            return arr[idx] + Min_cost(arr, idx + 1);
        }
        else if (arr[idx] > arr[idx + 1] && idx <= SIZE - 1)
        {
            return arr[idx + 1] + Min_cost(arr, idx + 2);
        }
        else if (arr[idx] == arr[idx + 1] && idx <= SIZE - 1)
        {
            return arr[idx] + Min_cost(arr, idx + 2);
        }
    }
}
int main()
{
    int jump = 0;
    int idx = 0;
    int dp[SIZE];
    for (int i = 0; i < SIZE; i++)
    {
        dp[i] = -1;
    }

    int arr[SIZE] = {10, 20, 5, 2};
    jump = Min_cost(arr, idx);
    cout << "Minimum cost to reach the top of the stairs is: " << jump << endl;
    return 0;
}

// #include <iostream>
// using namespace std;
// #define SIZE 4
// int Min_cost(int arr[],int idx,int dp[])
// {
//    if (idx>=SIZE-1)
//    {
//     return 0;
//    }
//    if (dp[idx]!=-1)
//    {
//     return dp[idx];
//    }
//    int cost1=arr[idx]+Min_cost(arr,idx+1,dp);
//    int cost2=arr[idx+1]+Min_cost(arr,idx+2,dp);
//    dp[idx]=min(cost1,cost2);
//    return dp[idx];

// }
// int main()
// {
//     int jump=0;
//     int idx=0;
//     int dp[SIZE];
//     for (int i = 0; i <SIZE; i++)
//     {
//         dp[i]=-1;
//     }

//     int arr[SIZE] = {10,20,5,2};
//     jump = Min_cost(arr,idx,dp);
//     cout << "Minimum cost to reach the top of the stairs is: " << jump << endl;
//     return 0;
// }