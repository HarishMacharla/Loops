//Write a C program to count total number of even and odd elements in an array.
#include<stdio.h>
#define max_size 1000
int main()
{
    int arr[max_size];
    int N;
    printf("enter no.of elements in an array:");
    scanf("%d",&N);

    printf("enter %d numbers:",N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    int count =0;
    int count_2=0;

    for(int i=0;i<N;i++){
        if(arr[i]%2==0)
            count=count+1;
        else
            count_2=count_2+1;
    }

    printf("count of even elements in an array:%d\n",count);
    printf("count of odd elements in an array:%d\n",count_2);

    return 0;
}