// Write a C program to check whether a number is positive, negative or zero using switch case.

#include<stdio.h>
int main()
{
    int num;
    printf("enter number:");
    scanf("%d",&num);

    
    switch (num>0)
    {
    case 1:
            printf("positive\n");
        break;
    case 0:
        switch(num<0){
            case 1:
                printf("number is negative\n"); 
                break;
            case 0:
                printf("number is zero\n");
                break;
        }
    }
}   