//Write a C program to print multiplication table of any number.

#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter number to find a table:");
    scanf("%d",&n);

    while(i){                                                           //while(i<=10)
        printf("%d x %d = %d\n",n,i,n*i);
        if(i==10)
            break;
        ++i;

    }
    return 0;
}