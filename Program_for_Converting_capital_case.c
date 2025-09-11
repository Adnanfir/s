#include <stdio.h>
int main()
{
 int i;
    char Capita_Alphabets[5];
    printf("Enter the Sentance");
    scanf("%s", &Capita_Alphabets);
    char Small_Alphabets[5];
   
        // char Input;
        // printf("Enter the Desired Character : ");
        // scanf("%c", &Input);
        // int c = 32 + (char)Input;
        // printf("%c", c);
        for (int i = 0; i < sizeof(Capita_Alphabets); i++)
    {
        Small_Alphabets[i] = Capita_Alphabets[i] + 32;
    } for (int i = 0; i < Capita_Alphabets; i++)
    {
           printf("%c", Small_Alphabets[i]);

    }
}






// #include <stdio.h>
// int main()
// {
//     char Capita_Alphabets[100];
//     printf("Enter the Sentence: ");
//     scanf("%99s", Capita_Alphabets); // Prevent buffer overflow

//     char Small_Alphabets[100];

//     int i = 0;
//     while (Capita_Alphabets[i] != '\0') {
//         // Convert only uppercase letters
//         if (Capita_Alphabets[i] >= 'A' && Capita_Alphabets[i] <= 'Z') {
//             Small_Alphabets[i] = Capita_Alphabets[i] + 32;
//         } else {
//             Small_Alphabets[i] = Capita_Alphabets[i];
//         }
//         i++;
//     }
//     Small_Alphabets[i] = '\0'; // Null-terminate the string
    

//     printf("%s\n", Small_Alphabets);
//     return 0;
// }