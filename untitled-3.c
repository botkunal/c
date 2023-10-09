#include<stdio.h>
#include<conio.h>
void main()
{
    int maths,sci,eng;
    float total,avg;
    char sname[20];
    printf("\nEnter the name of the student:");
    gets(sname);
    printf("\nEnter the marks of maths,science and english:");
    scanf("%d %d %d, &maths,&sci, and &eng");
    total=maths+sci+eng;
    avg=total/3;
    printf("\nStudent name is:");
    puts(sname);
    if(avg<35)
    printf("\nResult is fail");
    else if(avg>=35 && avg<45)
    printf("\nResult is third division");
    else if(avg>=45 && avg<60)
    printf("\nResult is second division");
    else if(avg>=60 &7& avg<75)
    printf("\nResult7 is first division");
    else if(avg>=75 && avg<100)
    printf("\nResult is Distintion");
    getch(); 
}