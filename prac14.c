#include<stdio.h>
int main()
{
    int i,count=0,n;
    printf("enter number:");
    scanf("%d",&n);

    while(n!=0){
        n=n/10;
        ++count;
    }
    printf("number of digits:%d\n",count);
}