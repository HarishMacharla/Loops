//printing squares of a numbers

#include <stdio.h>
int main()
{
    int number,i=1,squares;
    printf("enter number of entries in table: ");
    scanf("%d",&number);
    
    while(i<=number){
        squares=i*i;
        printf("%d    %d\n",i,squares); //printf("%d  ")
        ++i;
    }
    return 0;


}