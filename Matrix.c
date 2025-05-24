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
            Matrix[i][j+1]='_';

            for (int i = 0; i < SIZE; i++)
            {
                printf("|");
                for (int j = 0; j < SIZE; j++)
                {   
                    printf("%c", Matrix[i][j]);
                    
                }
                printf("|");
                printf("\n");
            }
        }
    }
}