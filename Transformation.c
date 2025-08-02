#include <stdio.h>
int main (){
int mat[3][3]={1,2,3,4,5,6,7,8,9};
int bar[3][3];

for (int  i = 0; i < 3; i++)
{ printf("|");
    for (int j = 0; j < 3; j++)
    {
        printf(" %d ",mat[i][j]);
    }printf("|");
    printf("\n");

}
for (int  i = 2, k=0; i >=0,k<3;i--, k++)
{
    for (int  j = 0; j < 3; j++)
    {
        bar[j][i]=mat[k][j];
    }
    
}printf("\n");
for (int  i = 0; i < 3; i++)
{printf("|");
    for (int j = 0; j < 3; j++)
    {
        printf(" %d ",bar[i][j]);
    }printf("|");
    printf("\n");
}






}