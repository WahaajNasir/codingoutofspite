#include <stdio.h>

int main()
{
    int arr[15];
    printf("The value of i/2 is: %zu\n", sizeof(arr) / sizeof(arr[0]));
    printf("%d\n", sizeof(arr));
}