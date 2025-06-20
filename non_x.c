#include<stdio.h>

int main(){

char aq[120];
char Reversal[120];
int j=0;
scanf("%s",&aq);
int telem;
for(telem=1;aq[telem-1]!='\0';telem++){

}

for (int i = 0; i <telem; i++)
{
printf("%c",aq[i]);
}

printf("\n%d\n",telem);


for (int i = telem-1; i >=0; i--)
{
    Reversal[j]=aq[i];
   
 printf("%c",aq[i]);
    j++;

}
printf("\n");
for (int i = 0; i <telem+1; i++)
{
printf("%c",Reversal[i]);
}

    return 0;
}