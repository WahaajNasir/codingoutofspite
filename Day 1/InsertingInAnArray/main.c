#include <stdio.h>

void insert(int arr[], size_t size, int value, int index)
{
    if(index < 0 || index >= size)
    {
        printf("Index out of bounds\n");
        return;
    }

    for (int i = size - 1; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[index] = value;
    return;
}
int main()
{
    int arr[5] = {1, 5};

    int size = sizeof(arr) / sizeof(arr[0]);
    while ((arr[size - 1]) == 0)
    {
        insert(arr, size, 5, 2);
        printf("The values in the array are: ");
        printf("[");
        for (int i = 0; i < size; i++)
        {
            printf(", %d ", arr[i]);
        }
        printf("]\n");
    }
    printf("Array is full, cannot insert more elements.\n");
    return 0;
}