// C program to find maximum and minimum element in array
#include<stdio.h>
#define max_size 1000
int main()
{
    int N,arr[max_size],max=0,min=0;

    printf("enter no.of elements in an array:");
    scanf("%d",&N);

    printf("Enter %d numbers\n",N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
   
    for(int i=0;i<N;i++){
        
        if(arr[i]>max)
            max=arr[i];
        if(arr[i]<min)
            min=arr[i];
    }
    printf("maximum:%d\n",max);
    printf("minimum:%d\n",min);

    return 0;
}