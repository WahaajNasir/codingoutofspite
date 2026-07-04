#include <stdio.h>

void fun(int n)
{
    printf(" F(%d) Stack push\n", n);

    if(n > 1)
    {
        fun(n - 1);
        fun(n - 1);
    }

    printf(" F(%d) Stack pop\n ", n);
}

int main()
{
    fun(3);
    return 0;
}