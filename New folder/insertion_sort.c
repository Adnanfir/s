#include <stdio.h>
void Insertion_sort(int unsorted[], int size)
{
    for (int i = 1; i < size; i++)
    {
        int j = i - 1;
        int key = unsorted[i];
        while (j >= 0 && unsorted[j] > key)
        {
            unsorted[j + 1] = unsorted[j];
            j--;
        }
        unsorted[j + 1] = key;
    }
    for (int  i = 0; i < size; i++)
    {
        printf(" %d ", unsorted[i]);
    }
    
}
int main()
{
    int array[] = {10, 9, 8, 7};
    int size = sizeof(array) / sizeof(array[0]);
    Insertion_sort(array, size);
}