#include <stdio.h>
#define SIZE 2
int Matrix1[SIZE][SIZE], Matrix2[SIZE][SIZE], Matrix3[SIZE][SIZE],Matrix4[SIZE][SIZE];

int main()
{
    printf("Enter elements of first matrix (%dx%d):\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &Matrix1[i][j]);
        }
    }

    printf("Enter elements of second matrix (%dx%d):\n", SIZE, SIZE);
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%d", &Matrix2[i][j]);
        }
    }
     printf(" ISt matrices:\n");
    for (int i = 0; i < SIZE; i++)
    {    printf("|");
        for (int j = 0; j < SIZE; j++)
        {
            printf(" %d ", Matrix1[i][j]);
        }
         printf("|");
        printf("\n");
    }
     printf(" 2nd matrices:\n");
    for (int i = 0; i < SIZE; i++)
    {   printf("|");
        for (int j = 0; j < SIZE; j++)
        {   
            printf(" %d ", Matrix2[i][j]);
        }
        printf("|");
        printf("\n");
    }

    // Calculate sum of matrices
    printf("Performing Sum of matrix ......\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            Matrix3[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }
     printf("Sum of the two matrices:\n");
    for (int i = 0; i < SIZE; i++)
    {    printf("|");
        for (int j = 0; j < SIZE; j++)
        {
            printf("  %d  ", Matrix3[i][j]);
        } printf("|");
        printf("\n");
    }
       // Calculate Substraction of matrices
    printf("Performing Substraction of matrix ......\n");
    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            Matrix3[i][j] = Matrix1[i][j] - Matrix2[i][j];
        }
    }
     printf("Substraction of the two matrices:\n");
    for (int i = 0; i < SIZE; i++)
    {    printf("|");
        for (int j = 0; j < SIZE; j++)
        {
            printf("  %d  ", Matrix3[i][j]);
        } printf("|");
        printf("\n");
    }
    // Calculate product of matrices
    printf("Performing Product of matrix....\n");
    for (int i = 0; i < SIZE; i++)
    {   
        for (int j = 0; j < SIZE; j++)
        { 
           for (int  p = 0; p < SIZE; p++)
           {
             Matrix4[i][j]=Matrix4[i][j] + Matrix1[i][p] * Matrix2[p][j];
           }
          
        }
       
    }
     printf("Product of the two matrices:\n");
    for (int i = 0; i < SIZE; i++)
    { printf("|");
        for (int j = 0; j < SIZE; j++)
        {
            printf("  %d  ", Matrix4[i][j]);
        } printf("|");
        printf("\n");
    }

    return 0;
}


