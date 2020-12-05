//Write a C program to calculate sum of digits of a number.

#include<stdio.h>
int main()
{
    int i=0,n,sum=0;
    printf("enter number:");
    scanf("%d",&n);

    while(n!=0){
        sum=sum+n%10;
        n=n/10;
    }

    printf("sum of digits:%d\n",sum);

}