#include<stdio.h>
#include<math.h>
int main()
{
    int n,a,b,c,x,x1,x2,x3;
    scanf("%d",&n);
    if(n>=1 || n<=200)
    for(a=1;a<=n;a++){
        for(b=1;b<=n;b++){
            x=a*a+b*b;
            c=sqrt(x);
            if(c*c==x && b<=c && a<=c && a<=b && c<=n){
                x1=a;
                x2=b;
                x3=c;
                printf("%d %d %d\n",x1,x2,x3);}       
        }
    }
    else
        printf("---\n"); 

    return 0;
}