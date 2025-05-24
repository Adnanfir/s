#include <stdio.h>
#define size 3
int main(){
int Martix[size][size] ;
printf("Enter your desired array\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        scanf("%d",&Martix[i][j]);
    }
    
}
printf("Displaying the matrix\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d",Martix[i][j]);
    }
    printf("\n");

    
}
printf("Transposing....\n");
for (int i = 0; i < size; i++)
{ 
    for (int j = i + 1; j < size; j++)
    {
        int temp = Martix[i][j];
        Martix[i][j] = Martix[j][i];
        Martix[j][i] = temp;
    }
    
}
printf("Displaying the Transposed matrix\n");
for (int i = 0; i < size; i++)
{
    for (int j = 0; j < size; j++)
    {
        printf("%d",Martix[i][j]);
    }
    printf("\n");

    
}





}