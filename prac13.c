//Write a C program to find first and last digit of a number and compute their sum.
#include <stdio.h>
int main()
{
    int x, y, n, i = 0;
    printf("enter a number:");
    scanf("%d", &n);

    x = n % 10;
    printf("last digit:%d\n", x);

    while (n >= 10)
    {
        n = n / 10;
    }

    printf("first digit:%d\n", n);

    printf("the sum of first and last digit:%d\n", x + n);

    return 0;
}