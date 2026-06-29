#include<stdio.h>
#include<conio.h>

extern int a;
void fun();

int main()
{
    a = 2000;
    printf("Value of a in main is %d\n",a);
    fun();
    return 0;
}