#include <stdio.h>

int sumofDig(int num)
{
    if(num == 0)
    {
        return 0;
    }

    return (num % 10) + sumofDig(num / 10);
}


int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Sum of digits of %d is: %d\n", num, sumofDig(num));
}