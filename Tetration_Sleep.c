#include <stdio.h>
int main(){
    long int power,number,p,times;
    number=1;
    printf("Enter the Number: ");
    scanf("%ld",&p);
    power=p;


    printf("Enter the times: ");
    scanf("%ld",&times);
    for (int i = 1; i <= times; i++)
    {
        for (int i = 1; i <=power; i++)
        {
            number=number*p;
            if (i==power)
            {
                power=number;
                number=1;
                break;
                
            }
            
        }
        
    }
    printf("%ld",power);
    

}