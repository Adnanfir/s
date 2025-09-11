#include <stdio.h>
int main()
{

    // char n;
    // printf("%%");
    // scanf(" %c",&n);//whitespace
    // printf("%c",n);
    // }

    // int a=1,b=0,c=0,d;
    // d=++a&&(b++||c--);
    // if(d)
    // {
    //     printf("Hello");

    // }

    // else{
    //     printf("Y");
    // }
    // printf("%d",d);

    // int x;
    // if (x=4,5,6)
    // {
    //     printf("Hello\n");

    // }
    // else{
    // printf("Bye\n");
    // }
    // printf("Compile\n");

    // }

    // int x;
    // if (1 ||x,x = 0, 1)
    // {
    //     printf("Hello");
    // }
    // else
    //     {}
    //         printf("%d",x);

    // int x,y;
    // if (x=0,y=3,2)
    // {
    //     printf("%d %d\n",x,y);
    // }
    // printf("%d",y);

// int input;
// printf("Enter the input");
// scanf("%d",&input);
//     for (int i = 0; i < input; i++)
//     {
//         if (i == 0 || i == 9)
//         {
//             for (int j = 0; j < 10; j++)
//             {
//                 printf("*");
//             }
//         }
//         else
//         {

//             {
//                 for (int j = 0; j < 10; j++)
//                 {
//                     if (j == 0 || j == 9)
//                     {
//                         printf("*");
//                     }
//                     else{
//                         printf(" ");
//                     }
//                 }
//             }
//         }

//         printf("\n");
//     }
// }
// #include <stdio.h>
//     int main()
//     {
//         int m, n;
//         scanf("%d%d", &m, &n);
//         for (int i = 0; i <= m; i++)
//         {
//             for (int j = 1; j <= n; j++)
//             {
//                 if (i == 0 || i == m || j == 1 || j == n)
//                 {
//                     printf("*");
//                 }
//                 else
//                 {
//                     printf(" ");
//                 }
//             }
//             printf("\n");
//         }
//          return 0;
//     }

// 
int size,target,ISt ,SECOND,NOT_FOUND=1;
printf("Enter the size \n");
scanf("%d",&size);
int array[size];
printf("Enter the array \n");
for (int i = 0; i <size; i++)
{
    scanf("%d",&array[i]);
}
printf("[");
printf("The Entered Array is ");
for (int  i = 0; i<size; i++)
{   
    printf(" %d ",array[i]);
}
printf("]");
printf("Enter the target \n");
scanf("%d",&target);
for (int  i = 0; i <size; i++)
{
    for (int  j = 0; j < size; j++)
    {
        if ((array[i]+array[j])==target)
        {
            ISt=i;
            SECOND=j;
            NOT_FOUND=0;

        }
       
    }
    
}

printf("Num[%d]+Num[%d]=%d",ISt,SECOND,target);
if (NOT_FOUND)
{
    printf("Error 404");
}



}