#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* arr[10];
int main()
{
    for (int i = 0; i < 10; i++)
    {   
        // Create a buffer of 12 characters to hold the string temporarily
        char buffer[12];
        // Use snprintf to move that string into the buffer with the index number
        // syntax: snprintf(BUFFER, SIZE, FORMAT, ARGS);
        snprintf(buffer, sizeof(buffer), "String no %d", i);

        // Dynamically allocate memory for the string and copy
        arr[i] = malloc(strlen(buffer) + 1);
        strcpy(arr[i], buffer);
    }

    printf("No of elements: %zu\n", sizeof(arr) / sizeof(arr[0]));
    for (int i = 0; i < 10; i++)
    {
        printf("%s\n", arr[i]);
        free(arr[i]);
    }
    return 0;
}