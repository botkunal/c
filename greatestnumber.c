#include<stdio.h>

void main()
{
    int number[10];
    int great,i;
    
    printf("Enter any ten numbers:");
    for(i=0;i<10;i++)
    {
    scanf("%d",&number[i]);
    }
    great=number[0];
    for(i=0;i<10;i++)
    {
    if(great<number[i])
    great=number[i];
    }
    printf("\nThe greatest number is:%d", great);
}