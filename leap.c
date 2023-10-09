#include<stdio.h>
int main()
{
    int year;
    printf("Enter the year you want to cheak:");
    scanf("%d",&year);
    ((year%4==0)||(year%400==0))&&(year%100==0)?
    printf("Enter year is leap year"):
    printf("Enter year is not leap year");

}