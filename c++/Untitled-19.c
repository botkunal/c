#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter the value of a,b,c:");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if (a>c)
        printf("the greatest value is %d",a);
        else
        printf("the greatest value is %d",c);
    }
    else if (b>c)
    {
        printf("the greatest value is %d",b);
    }
    else
    {
    printf("the greatest value is %d",c);
    }
}