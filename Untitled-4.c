#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,great;
    printf("\nEnter any two numbers:");
    scanf("%d %d",&a,&b);  //89 78
    great=a;               //89
    if(a<b)
    great=b;               //89
    printf("\nThe greatest number is %d",great);
    getch();
}