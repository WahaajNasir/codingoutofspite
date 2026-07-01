#include <stdio.h>

long int sum(int arr[], size_t no_of_elements)
{
    long int total = 0;

    for (int i = 0; i < no_of_elements; i++)
    {
        total += arr[i]; 
    }
    return total;
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

    size_t no_of_elements = sizeof(arr) / sizeof(arr[0]);
    long int total = sum(arr, no_of_elements);
    printf("The sum of the values in the array is: %ld\n", total);
    return 0;
}