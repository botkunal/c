#include<stdio.h>
#include<conio.h>
void main()
{
    int num,n1,n2,rev,orin;
    printf("\nEnter the number:");
    scanf("%d",&num);
    orin=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    rev=n1+10+n2+10+num;
    if(rev==orin)
    printf("\nNumber is pallindrome");
    else
    printf("\nNumber is not pallindrome");
    getch();
}