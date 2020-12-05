// Write a C program to print all negative elements in an array.

#include<stdio.h>

int main(){

    int N,arr[N];
    int i;

    //inputing no.of elements in array

    printf("enter number of elements in array:");
    scanf("%d",&N);

    //intializing elements into array
    printf("enter %d numbers\n",N);
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }

    //printing negative numbers

    for(int i=0;i<N;i++){
        if(arr[i]<0){
            printf("%d\t",arr[i]);
        }
        
    }
    printf("\n");

    
}

