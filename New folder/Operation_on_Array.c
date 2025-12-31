
#include <stdio.h>
void Creating_Array(int *array)
{
    printf("Enter the Elements of the array :");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &array[i]);
    }
}

void Displaying_Array(int *array)
{
    printf("Displaying the array :");
    for (int i = 0; i < 10; i++)
    {
        printf("%d", array[i]);
    }
}
void Insertion_At_begining(int *array,int SIZE)
{
    int p;
    printf("Enter the Number You want to insert");
    scanf("%d",&p);
    for (int i = SIZE + 1; i > 0; i--)
    {
        array[i] = array[i - 1];
    }
    array[0] = p;
}
void Insertion_At_Specific(int *array,int SIZE)
{
    printf("Enter the New element you want to insert");
    int new;
    scanf("%d", &new);
    printf("Enter the Position at which u want to insert new number");
    int Position;
    scanf("%d", &Position);
    for (int i = SIZE+1; i < Position; i++)
    {
        array[i] = array[i - 1];
        new = array[i - 1];
    };
    printf("inserted %d at position %d", new, Position);
}
void Insertion_At_End(int *array,int SIZE)
{
    int new;
    printf("Enter the Number you want to add");
    scanf("%d", &new);
    ++SIZE;
    array[SIZE]=new;
}

void Deletion_At_begining(int *array,int SIZE)
{
   for (int  i = SIZE; i >0; i--)
   {
        array[i]=array[i-1];
   }
   
}
void Deletion_At_Specific(int *array,int SIZE)
{
    printf("Enter the element which u want to Delete a number");
    int Position;
    scanf("%d", &Position);
    printf("Deleted %d", array[Position]);
    array[Position]=array[Position+1];
    --SIZE;
}
void Deletion_At_End(int *array,int SIZE)
{
    
    printf("Deleted %d",array[SIZE]);
    SIZE--;
}
void Deleting_Elements(int *array,int SIZE)
{
    int Choose ;
    scanf("%d", &Choose);
    printf("Do you want to add elemnts 1. Inertion at beginning 2. Insertion at end 3. Insertion at specific position :");
    switch (Choose)
    {
    case 1:
        Deletion_At_begining(array,SIZE);
        break;
    case 2:
        Deletion_At_Specific(array,SIZE);
        break;
    case 3:
        Deletion_At_End(array,SIZE);
        break;
    default:
        break;
    }
}
void Adding_Element(int *array,int SIZE)
{

    int Choose=1;
    while (Choose)
    {

        printf("Do you want to add elemnts 1. Inertion at beginning 2. Insertion at specific position 3.Insertion at end  0.Exit :");
        scanf("%d", &Choose);
        switch (Choose)
        {
        case 1:
            Insertion_At_begining(array,SIZE);
            break;
        case 2:
            Insertion_At_Specific(array,SIZE);
            break;
        case 3:
            Insertion_At_End(array,SIZE);
            break;
        case 0: 
            Choose=0;
            break;
        default:
            break;
        }
    }
    printf("Exited\n");
}
int main()
{   int SIZE=10;
    int p;
    int array[SIZE];
    while (p != 5)
    {
        printf("Choose Option 1.Creating array 2.Displaying 3.Adding 4.Deletion 5.Exit :");
        int x;
        scanf("%d",&x);
        switch (x)
        {
        case 1:
            Creating_Array(array);
            break;
        case 2:
            Displaying_Array(array);
            break;
        case 3:
            Adding_Element(array,SIZE);
            break;
        case 4:
            Deleting_Elements(array,SIZE);
        case 5:
            printf("Enter the value of while condition");
            scanf("%d", &p);
            break;
        default:
            break;
        
        }
    }
    return 0;
}