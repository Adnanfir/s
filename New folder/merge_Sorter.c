#include <stdio.h>
void merger(int arr[], int start, int middle, int end)
{
    int n1, n2;
    // calculating size of our two temp arrays
    n1 = middle - start + 1;
    n2 = end - middle;
    // creating two temp arrays
    int t1[n1], t2[n2];
    // adding arr elements to our temp arrays
    for (int i = 0; i < n1; i++)
    {
        t1[i] = arr[start + i];
    }
    for (int i = 0; i < n2; i++)
    {
        t2[i] = arr[middle + i + 1];
    }
    int a = 0, b = 0, k = start;
    // comparing values of our two tmep arrays and added them to arr
    while (a < n1 && b < n2)
    {
        if (t1[a] <= t2[b])
        {
            arr[k] = t1[a];
            a++;
        }
        else
        {

            arr[k] = t2[b];
            b++;
        }
        k++;
    }
    // adding reaining values of temp array ist
    while (a < n1)
    {
        arr[k] = t1[a];
        a++;
        k++;
    }
    // adding reaining values of temp array 2nd
    while (b < n2)
    {
        arr[k] = t2[b];
        b++;
        k++;
    }
}
void divider(int arr[], int start, int end)
{
    if (start < end)
    {
        int middle = start + (end - start) / 2;
        divider(arr, start, middle);
        divider(arr, middle + 1, end);
        merger(arr, start, middle, end);
    }
}
void display(int arr[], int size)
{
    for (int i = 0; i < size; i++)
    {
        printf(" %d ", arr[i]);
    }
}
int main()
{
    int array[] = {10, 9, 8, 7, 4, 5, 6, 8, 9};
    int size = sizeof(array) / sizeof(array[0]);
    divider(array, 0, size - 1);
    display(array, size);
}