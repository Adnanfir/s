#include <stdio.h>
// // types of diffrent functions
// int adding(){
//     int a;
//     int b;
//     printf("Enter the values of varaible and constants\n");
//     scanf("%d",&a);
//     printf("Enter the values of varaible and constants\n");
//     scanf("%d",&b);
//     return a+b;
// } 
int sum(){
    int a;
    int b;
    printf("Enter the values of varaible and constants\n");
    scanf("%d",&a);
    printf("Enter the values of varaible and constants\n");
    scanf("%d",&b);
    // printf("The sum of two numbers is %d\n",a+b);
    return a,b;
}

int main(){
    int a ;
    int b;
   int Sum= sum();
   int p=sum();
    printf("The sum of two numbers is %d\n",Sum);
    printf("Calling sum function\n");
        

}