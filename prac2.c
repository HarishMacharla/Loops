//summing of series of numbers o to terminate

#include<stdio.h>
int main()
{
   int n,sum=0;
   printf("enter series numbers:");
   scanf("%d",&n);

    while(n!=0){
        sum=sum+n;
        scanf("%d",&n);
    }
    printf("sum=%d\n",sum);
}