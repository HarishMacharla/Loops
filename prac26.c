//  C program to copy all elements of one array to another

#include<stdio.h>
#define max_size 1000

int main()
{
    int arr1[max_size],arr2[max_size];
    int N,i;
    printf("enter number no.of elements in array:");
    scanf("%d",&N);

    printf("enter %d numbers:",N);

    for(int i=0;i<N;i++){
        scanf("%d",&arr1[i]);
    }

    for(int i=0;i<N;i++){
        arr2[i]=arr1[i];
    }
    printf("arr1:");
    for(int i=0;i<N;i++){
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    printf("arr2:");
    for(int i=0;i<N;i++){
        printf("%d\t",arr2[i]);
    }
    
    return 0;
}