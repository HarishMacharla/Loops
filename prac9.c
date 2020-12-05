//sum of ten non zero numbers
#include <stdio.h>
int main()
{
    int n=0,sum=0,i;

    while(n<10){
        printf("enter i(0 t0 terminate):");
        scanf("%d",&i);
        if(i==0)
            continue;   //if i==0 skips the statements after continue
        sum=sum+i;
        n++;
    } 
    printf("sum=%d\n",sum);
}