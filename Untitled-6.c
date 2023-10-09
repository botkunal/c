#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    if(num<0)
    printf("\nNumber is negative");
    if(num>0)
    printf("\nNumber is postive");
    if(num==0)
    printf("\nNumber is zero");
    getch();
}