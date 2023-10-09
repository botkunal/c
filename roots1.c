#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c;
    float x1,x2,t,t1;

    printf("\nEnter the value of a:");
    scanf("%d",&a);
    printf("\nEnter the value of b:");
    scanf("%d",&b);
    printf("\nEnter the value of c:");
    scanf("%d",&c);
    t=b*b-4*a*c;
    t1=sqrt(t);
    printf("value of discriminant:%f",t);
    if(t>0)
    {
        printf("\nRoots are real and distinct");
        x1=(-b+sqrt(t))/(2*a);
        x2=(-b-sqrt(t))/(2*a);
        printf("\nRoots are %f %f",x1,x2);}
    if(t<0)
    {
        printf("\nRoots are imaginary");
    }
    if(t==0)
    {
        printf("\nRoots are real and equal");
        x1=(-b+sqrt(t))/(2*a);
        x1=x2;
        printf("\nRoots are %f ,%f",x1,x2);
    }
    
}