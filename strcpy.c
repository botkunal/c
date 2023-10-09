#include<stdio.h>
#include<string.h>
void main()
{
    char source[]="nagpur";
    char target[20];
    strcpy(target,source);
    printf("\nSource string=%s",source);
    printf("\ntarget string=%s",target);
}