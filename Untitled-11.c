#include<stdio.h>
int main()
{
    int maths,sci,eng,sst,hindi;
    float total,avg;
    char sname[20];

    printf("enter the name of the student:");
    gets(sname);

    printf("enter the marks of maths=");
    scanf("%d",&maths);
    printf("enter the marks of sci=");
    scanf("%d",&sci);
    printf("enter the marks of eng=");
    scanf("%d",&eng);
    printf("enter the marks of sst=");
    scanf("%d",&sst);
    printf("enter the marks of hindi=");
    scanf("%d",&hindi);

    total=maths+sci+eng+sst+hindi;
    printf("Total marks=%f",total);
    avg=total/5;
    printf("\navg marks=%f",avg);
    printf("\nenter name is:");
    puts(sname);

    if(avg>=75)
    printf("result is distintion");
    if(avg<75 && avg>=60)
    printf("result is first division");
    if(avg<60 && avg>=50)
    printf("result is second division");
    if(avg<50 && avg>=35)
    printf("result is third division");
    if(avg<35)
    printf("result is fail");
    return 0;
}