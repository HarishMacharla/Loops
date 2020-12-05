// program to find prime number

#include <stdio.h>
int main()
{
    int n,d;
    printf("enter a number:");
    scanf("%d",&n);

    for(int d=2;d<n;d++){
        if(n%d==0)
           break;
    }
    if(d<n)
        printf("%d is divisible by %d\n",n,d);
    else
    {
        printf("%d is prime\n",n);
    }
    
    return 0;

    
}