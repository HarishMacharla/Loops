//printing squares using for loop
#include<stdio.h>
int main()
{
    int n,i;
    printf("enter a number:");
    scanf("%d",&n);

    for(int i=1;i<=n;i++)
        printf("%d------%d\n",i,i*i);
}