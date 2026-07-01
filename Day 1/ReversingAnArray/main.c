#include <stdio.h>

void reverse(int arr[], size_t no_of_elements)
{
    int j,k;
    j = 0; k = no_of_elements - 1;
    for(; (no_of_elements % 2 == 0)? j < ((no_of_elements / 2) - 1): j == no_of_elements / 2 ; j++, k--)
    {
        int temp = arr[j];
        arr[j] = arr[k];
        arr[k] = temp;
    }
}
int main()
{
    int arr[10];

    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for arr[%d]: ", i);
        // scanf needs a & as its pass by value, so we need to pass the address
        scanf("%d", &arr[i]);
    }
    size_t size = sizeof(arr) / sizeof(arr[0]);
    printf("[Before Reversing] The values in the array are: ");
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(", %d ", arr[i]);
    }
    printf("]\n");
    reverse(arr, size);

    printf("[After Reversing] The values in the array are: ");
    printf("[");
    for (int i = 0; i < size; i++)
    {
        printf(", %d ", arr[i]);
    }
    printf("]\n");
    return 0;

}