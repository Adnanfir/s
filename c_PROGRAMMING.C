#include <stdio.h>
int a, b, sum, subs, multiplication, division;
char i;
// Function to recive Numbers
int Reciever()
{
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the first number: ");
    scanf("%d", &b);
    return a, b;
}
// Function for addition
int Adder(int a, int b)
{
    sum = a + b;
    return sum;
}
// Function for Substraction
int Subs(int a, int b)
{
    subs = a - b;
    return subs;
}
// Function for multiplication
int Mul(int a, int b)
{
    multiplication = a * b;
    return multiplication;
}
// Function for division
int div(int a, int b)
{
    division = a / b;
    return division;
}
void choosing(char p)
{

    switch (p)
    {
    case '+':
        Adder(a, b);
        printf("The sum of %d and %d is: %d\n", a, b, sum);
        break;
    case '-':
        Subs(a, b);
        printf("The substraction of %d and %d is: %d\n", a, b, subs);
    case '*':
        Mul(a, b);
        printf("The substraction of %d and %d is: %d\n", a, b, multiplication);
    case '/':
        div(a, b);
        printf("The Division of the %d and %d is %d\n", a, b, division);
    default:
        printf("Error");
        break;
    }
}
int main()
{
    printf("If you want to continue press p for input");
    scanf("%c", &i);
    if (i == 'p')
    {
        for (int k = 0; k < 10; k++)
        {
            // Function call to recive numbers
            Reciever();
            char p;
            printf("Enter the task you want to perform");
            scanf("%s", &p);
            choosing(p);
        }
    }

    return 0;
}