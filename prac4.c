// // //finding number of digits in a non negative-number
// // #include<stdio.h>
// // int main()
// // {
// //     int num,count=0;
// //     printf("enter non negative number:");
// //     scanf("%d",&num);

// //     while(num!=0){
// //         num=num/10;
// //         ++count;}
// //     printf("count=%d\n",count);
// // }

// using do statement

#include<stdio.h>
int main()
{
    int n,digit=0;
    printf("enter non negative integer:");
    scanf("%d",&n);

    do{
        n=n/10;
        ++digit;
    }
    while(n!=0);

    printf("the number has %d digit\n",digit);

}