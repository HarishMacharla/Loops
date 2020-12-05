// Program to check even or odd using switch...case
#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    switch (num%2)
    {
    case 0:
        printf("%d is even\n",num);
        break;
    default:
        printf("%d is odd\n",num);
        break;
    }
    return 0;
}