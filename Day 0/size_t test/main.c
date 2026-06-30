#include <stdio.h>

int main()
{
    size_t size = 4294967295;
    printf("Size of size_t: %zu bytes\n", sizeof(size_t));
    size_t something = 18446744073709551615;
    printf("Value of something: %zu\n", something);
    printf("Size of something: %zu bytes\n", sizeof(something));
}