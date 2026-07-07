#include <stdio.h>

bool isEven(int n)
{
    if((n & 1) == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if(isEven(num))
    {
        printf("The number is even.\n");
    }
    else
    {
        printf("The number is odd.\n");
    }

    return 0;
}