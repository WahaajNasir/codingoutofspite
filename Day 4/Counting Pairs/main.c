#include <stdio.h>
#include <math.h>

int pairCount(int n)
{
    int count = 0;
    for(int i = 1; i <= cbrt(n); i++)
    {
        // Gives us a^3
        int cb = i*i*i;

        // Gives us what we expect b^3 to be
        int diff = n - cb;

        // Get the cube root of the current difference
        int cbrtDiff = cbrt(diff);

        if(cbrtDiff * cbrtDiff * cbrtDiff == diff)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Number of pairs for %d: %d", num, pairCount(num));
}