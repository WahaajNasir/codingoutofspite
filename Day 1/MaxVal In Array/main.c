#include <stdio.h>

int main()
{
    int arr[10];
    // initialize max to the smallest possible integer value
    int max = -2147483648;
    for (int i = 0; i < 10; i++)
    {
        printf("Enter value for arr[%d]: ", i);
        // scanf needs a & as its pass by value, so we need to pass the address
        scanf("%d", &arr[i]);
    }
    printf("The maximum value in the array is: %d\n", max);
    return 0;
}