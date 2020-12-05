//Write a C program to calculate product of digits of a number.
#include<stdio.h>
int main()
{
    int n,pro=1;
    printf("enter number:");
    scanf("%d",&n);

    while(n!=0){
        pro=pro*(n%10);

        n=n/10;
    }

    printf("product of digits:%d\n",pro);

}