#include <stdio.h>
#include <stdlib.h>

int closestDivisible(int n, int m)
{
    if (m == 0)
    {
        printf("Error: Division by zero is not allowed. \n");
        return -1;
    }

    int q = n/m;
    
    int n1 = q * m;
    int n2;

    if((m * n) > 0)
    {
        n2 =  (q + 1) * m;
    }
    else
    {
        n2 =  (q - 1) * m;
    } 

    if(abs(n - n1) < abs(n- n2))
    {
        return n1;
    }
    else
    {
        return n2;
    }
}


int main()
{
    int n, m;

    printf("Enter numerator(n): ");
    scanf("%d", &n);
    printf("Enter denominator(m): ");
    scanf("%d", &m);

    int res = closestDivisible(n, m);
    printf("The closest number to %d that is divisible by %d is %d\n", n, m, res);
    return 0;
}