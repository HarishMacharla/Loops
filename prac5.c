// #include<stdio.h>
// int main()
// {
//     int n;
//     printf("enter number:");
//     scanf("%d",&n);

//     for(int i=0 ; i<n ; i++)
//         printf("%d\n",i);
//     for(int i=1 ; i<=n ;i++)
//         printf("%d\n",i);
//     for(int i=n-1 ;i>=0 ;i--)
//         printf("%d\n",i);
//     for(int i=n;i>0 ;i--)
//         printf("%d\n",i);

// }

// ommission of expressions in for loop

#include<stdio.h>
int main()
{
    int n;
    printf("enter number:");
    scanf("%d",&n);

    int i =10;
    for(;i>0;i--)
        printf("%d\n",i);
    for(int i =1 ;i<10;)
        printf("%d\n",i++);
}