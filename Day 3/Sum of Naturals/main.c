#include <stdio.h>

int getNatural(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("The sum of the first %d natural numbers is: %d\n", num, getNatural(num));
    return 0;
}