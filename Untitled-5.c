#include<stdio.h>
#include<conio.h>
void main()
{
    int num;
    printf("\nEnter the number:");
    scanf("%d",&num);
    if(num%2==0)
    printf("\nNumber is even");
    else
    printf("\nNumber is odd");
    getch();
}