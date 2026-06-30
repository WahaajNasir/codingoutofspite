#include <stdio.h>

int main()
{
    FILE* fptr;
    //fptr = fopen("test.txt", "w");
    
    //fputs("This is a test file.\n", fptr);

    // fptr = fopen("test.txt", "w");
    // printf("Enter a string to write to file: ");
    // char str[100];
    // fgets(str, sizeof(str), stdin);

    // fputs(str, fptr);
    // fclose(fptr);

    fptr = fopen("test.txt", "r");
    char buffer[100];
    fgets(buffer, 2, fptr);
    printf("Read from file: %s", buffer);
    fclose(fptr);
    return 0;
}