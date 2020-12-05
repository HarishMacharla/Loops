// Write a C program to check whether a number is palindrome or not.

#include <stdio.h>

int main()
{
    int num, n,rev = 0, remainder;
    printf("enter an integer:");
    scanf("%d", &n);

    printf("\n");
    num=n;

    while (n != 0)
    {
        remainder = n % 10;
        rev = rev * 10 + remainder;
        n = n / 10;
    }
    printf("the reverse of is:%d\n", rev);

    if(rev==num)
        printf("number is palindrome\n");
    else
    {
        printf("number is not a palindrome\n");
    }

    printf("\n");
    

    return 0;
}