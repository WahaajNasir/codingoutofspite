#include <stdio.h>

int sumOfSquares(int n)
{
    return n * (n + 1) * (2 * n + 1) / 6;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The sum of squares of the first %d natural numbers is: %d\n", num, sumOfSquares(num));
    return 0;
}