// Write a C program to print day of week name using switch case.
#include<stdio.h>
int main()
{
    int day,week;

    printf("\nenter day no.(sun=0):");
    scanf("%d",&day);

    printf("\n");
        switch (day)
        {
        case 1 :
            printf("sunday\n");
            break;
        case 2 :
            printf("monday\n");
            break;
        case 3 :
            printf("tuesday\n");
            break;
        case 4 :
            printf("wednesday\n");
            break;
        case 5 :
            printf("thrusday\n");
            break;
        case 6 :
            printf("friday\n");
            break;
        case 7 :
            printf("saturday\n");
            break;
        default:
            printf("enter valid number\n");
            break;
        }
    printf("\n");
    
    return 0;
}