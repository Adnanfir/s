#include <stdio.h>
#define SIZE 3
int main()
{
    char Matrix[SIZE][SIZE];
    for (int i = 0; i <= SIZE; i++)
    {
        for (int j = 0; j <= SIZE; j++)
        {
            Matrix[i][j] = ' ';
        }
    }

    for (int i = 0; i < SIZE; i++)
    {
        for (int j = 0; j < SIZE; j++)
        {
            scanf("%s", &Matrix[i][j]);
        }
    }
    for (int i = 0; i < SIZE; i++)
    {
        // printf("|");
        if (i == 0)
        {
            for (int j = SIZE - 1; j >= 0; j--)
            {
                printf("%c", Matrix[i][j]);
            }

            printf("\n");
        }
        else if (i == 1)
        {
            {   for (int j = 0; j <1; j++)
            {
                printf("%c", Matrix[i][j]);
            }              
            }
            printf("\n");
        }
        else if (i == 2)
        {
            for (int j = 0; j < SIZE; j++)
            {
                printf("%c", Matrix[i][j]);
            }
        }

        // Matrix[i][j+1]='_';
    }
    // printf("|");
    printf("\n");
}