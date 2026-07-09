#include <stdio.h>

int reverseDigits(int num)
{
    int reversed = 0;

    while(num > 0)
    {
        reversed = (reversed * 10) + (num % 10);

        num = num / 10;
    }

    return reversed;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Reverse of number of %d is: %d\n", num, reverseDigits(num));
}