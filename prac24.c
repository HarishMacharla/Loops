//Write a C program to find second largest element in an array.

#include<stdio.h>
#include<limits.h>
#define max_size 100
int main()
{
    int arr[max_size];
    int N,x,max1,max2;

    printf("enter no.of elements:");
    scanf("%d",&N);

    printf("enter %d numbers\n",N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    max1=max2=INT_MIN;

    for(int i=0;i<N;i++){
        if(arr[i]>max1){
        max2=max1;
        max1=arr[i];
        }
        else if (arr[i]>max2 &&arr[i]<max1)
        {
            max2=arr[i];
        }
        
            
    }
    printf("\n second maximum of the array:%d\n",max2);
}