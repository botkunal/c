#include<stdio.h>
void main()
{
    int a,b,c,d;
    printf("\nMENU\n1.ADD\n2.SUB\n3.MUL\n4.DIV\n5.MOD");
    printf("\nEnter your choice:");
    scanf("%d",&d);
    printf("\nEnter any two numbers:");
    scanf("%d %d",&a,&b);
    switch(d)
    {
        case 1: c=a+b;
        printf("\nThe result for addition is:%d",c);
        break;
        case 2: c=a-b;
        printf("\nThe result for subtraction is:%d",c);
        break;
        case 3: c=a*b;
        printf("\nThe result for multiplication is:%d",c);
        break;
        case 4: c=a/b;
        printf("\nThe result for division is:%d",c);
        break;
        case 5: c=a%b;
        printf("\nThe result for modular division is:%d",c);
        break;
        default:printf("\nInvalid Choice");
    }
}