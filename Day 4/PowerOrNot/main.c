#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool isPower(int x, int y)
{
    // If x is 1, then y must also be 1 for it to be a proper power
    if (x == 1)
    {
        return y == 1;
    }

    // Anything raisd to 0, is 1
    if( y == 1)
    {
        return true;
    }

    double res = log(y) / log(x);
    return fabs(res - round(res)) < 1e-10; // Check if res is an integer within a small tolerance
}

int main()
{
    int base, power;

    printf("Enter base: ");
    scanf("%d", &base);
    printf("Enter power: ");
    scanf("%d", &power);

    if(isPower(base, power))
    {
        printf("%d is a power of %d", power, base);
    }
    else
    {
        printf("%d is not a power of %d", power, base);
    }
}