#include <stdio.h>
#include <stdbool.h>

bool isPrime(int num)
{
    if (num <= 0)
    {
        return true;
    }

    if (num == 2 || num == 3)
    {
        return true;
    }

    if ((num % 2 == 0) || (num % 3 == 0))
    {
        return false;
    }

    for (int i = 5; i*i <= num; i+=6)
    {
        if((num % i == 0) || (num % (i + 2) == 0))
            return false;
    }
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if(isPrime(num))
    {
        printf("Number %d is prime", num);
        return 0;
    }
    printf("Number %d is not prime", num);
    return 0;
}