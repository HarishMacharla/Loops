// Input

// Input size: 10
// Input elements: 1
// 2
// 3
// 4
// 5
// 6
// 7
// 8
// 9
// 10

// Output

// Output: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10

#include<stdio.h>
#define Max_size 1000
int main()
{
    int arr[Max_size];
    int N,i;

    printf("enter size of array:");
    scanf("%d",&N);

    printf("enter %d numbers\n",N);

    //input elements in array
    for(int i=0;i<N;i++){
        scanf("%d",&arr[i]);
    }
    //displaying them
    for(int i=0;i<N;i++){
        printf("output:%d,",arr[i]);
    }
    printf("\n");
}