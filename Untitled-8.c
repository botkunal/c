#include<stdio.h>
#include<conio.h>
void main()
{
    int num,orin,n1,n2,sum;
    printf("\nEnter a 3 digit number:");
    scanf("%d",&num);
    orin=num;
    n1=num%10;
    num=num/10;
    n2=num%10;
    num=num/10;
    sum=n1*n2*n1+n2*n2*n2+num*num*num;
    if(sum==orin)
    printf("\nNumber is Armstrong");
    else
    printf("\nNumber is not Armstrong");
    getch();

}