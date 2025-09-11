#include <stdio.h>
int p = 1;
int Condition = 1;
int p1;
int p2;
int p3;
int p4;
int p5;
int Array1[100];
int Array2[100];
int Array3[100];
int Array4[100];
int Array5[100];
// creating a Exponential function
int Exponential(int Number, int Count)
{
  int i=0;
  if (Count / 2 >= i + 1)
  {
    for (int i = 0; i < Count / 2; i++)
    {
      int j = 0;
      Array2[i] = Array1[j] * Array1[j + 1];
      j = j + 2;
      p2 = i;
    }
  }
  // for (int i = 0; i < Count / 4; i++)
  // {
  //   if (Count / 4 > i+1)
  //   {
  //     int j = 0;
  //     Array3[i] = Array2[j] * Array2[j + 1];
  //     j = j + 2;
  //      p3=i;
  //   }
  // }
  // for (int i = 0; i < Count / 8; i++)
  // {
  //   if (Count / 8 > i+1)
  //   {
  //     int j = 1;
  //     Array4[i] = Array3[j] * Array3[j + 1];
  //     j = j + 2;
  //      p4=i;
  //   }
  // }
  // for (int i = 1; i < Count / 16; i++)
  // {
  //   if (Count / 16 > i+1)
  //   {
  //     int j = 1;
  //     Array5[i] = Array4[j] * Array4[j + 1];
  //     j = j + 2;
  //      p5=i;
  //   }
  // }
  for (int i = 0; i < p5; i++)
  {
    printf(" %d ", Array5[i]);
  }
  for (int i = 0; i < p4; i++)
  {
    printf(" %d ", Array4[i]);
  }
  for (int i = 0; i < p3; i++)
  {
    printf(" %d ", Array3[i]);
  }
  for (int i = 0; i < p2; i++)
  {
    printf(" %d ", Array2[i]);
  }
  for (int i = 0; i < p1; i++)
  {
    printf(" %d ", Array1[i]);
  }
}

//   if (Array5[0] == '\0')
//   {
//     if (Array4[0] == '\0')
//     {
//       if (Array3[0] == '\0')
//       {
//         if (Array2[0] == '\0')
//         {
//           if (Array1[0] == '\0')
//           {
//             for (int i = 0; i <sizeof(Array1); i++)
//             {
//               printf(" %d ", Array1[i]);
//             }
//           }
//         }
//         else
//         {
//           for (int i = 0; i <sizeof(Array2); i++)
//           {
//             printf(" %d ", Array2[i]);
//           }
//         }
//       }
//       else
//       {
//         for (int i = 0; i <sizeof(Array3); i++)
//         {
//           printf(" %d ", Array3[i]);
//         }
//       }
//     }
//     else
//     {
//       for (int i = 0; i <sizeof(Array4); i++)
//       {
//         printf(" %d ", Array4[i]);
//       }
//     }
//   }
//   else
//   {
//     for (int i = 0; i <sizeof(Array5); i++)
//     {
//       printf(" %d ", Array5[i]);
//     }
//   }
// }

void Creating_Array(int Number, int Count)
{
  for (int i = 0; i < Count; i++)
  {
    Array1[i] = Number;
  }
  for (int i = 0; i < Count; i++)
  {
    printf("%d", Array1[i]);
  }
}
int main()
{
  int Count;
  int Number;
  int power;
  printf("Enter the Number ");
  scanf("%d", &Number);
  printf("Enter the Count");
  scanf("%d", &Count);
  Creating_Array(Number, Count);
  Exponential(Number, Count);
}