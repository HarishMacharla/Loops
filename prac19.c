//write a progrma to find prime number

#include <stdio.h>
#include<stdbool.h>


bool isDivisor(int n,int i)
{
    if(n%i==0)
        return  true;
    else
        return false;
}
int main()
{
    int i, n;
    printf("enter a number:");
    scanf("%d", &n);

    for (i = 2; i <= n; i++)
    {
        if (isDivisor(n,i)==true)       //if(n%i==0)
            break;
    }

    if (i < n)
        printf("%d is divisible \n", n);
    else
        printf("%d is prime\n", n);

    return 0;
}