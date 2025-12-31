#include <stdio.h>
void selection_sort(int arr[], int size)
{
    int min_val;
    int min_index;
    for (int i = 0; i < size; i++)
    {
        min_val = arr[i];
        for (int j = i + 1; j < size; j++)
        {
            if (min_val > arr[j])
            {   
                int temp=min_val;
                min_val = arr[j];
                arr[j]=temp;
                min_index = j;
            }
        }
        arr[i] = min_val;
    }
}
void display(int array[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", array[i]);
    }
}
int main()
{
    int array[] = {10, 9, 8, 7, 4, 5, 6, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    selection_sort(array, size);
    display(array, size);
}