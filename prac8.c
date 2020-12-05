#include <stdio.h>
int main()
{
    int i;
    for(;;){
        printf("enter number(0 to terminate):");
        scanf("%d",&i);
        if(i==0)
            break;
        else
        {
            printf("%d cubed :%d\n",i,i*i*i);
        }
        

    }
    return 0;    
        
}